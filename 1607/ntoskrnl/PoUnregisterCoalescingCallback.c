/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x14066DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EX_RUNDOWN_REF *v8; // rdi
  signed __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  do
  {
    v4 = ExReferenceCallBackBlock(&PopCoalescingCallbackRoutine[v3]);
    v8 = v4;
    if ( v4 )
    {
      v9 = &PopCoalescingCallbackRoutine[v3];
      if ( v4 == a1 )
      {
        if ( ExCompareExchangeCallBack(v9, 0LL, (__int64)v4) )
        {
          _InterlockedAdd(&PopCoalescingCallbackRoutineCount, 0xFFFFFFFF);
          ExDereferenceCallBackBlock(&PopCoalescingCallbackRoutine[v3], v8);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
          ExWaitForRundownProtectionRelease(v8);
          ExFreePoolWithTag(v8, 0);
          return;
        }
      }
      else
      {
        ExDereferenceCallBackBlock(v9, v4);
      }
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < 8 );
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
}
