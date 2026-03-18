/*
 * XREFs of PoUnregisterCoalescingCallback @ 0x140635A78
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PoUnregisterCoalescingCallback(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  signed __int64 *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  do
  {
    v4 = ExReferenceCallBackBlock(&PopCoalescingCallbackRoutine[v3]);
    v5 = v4;
    if ( v4 )
    {
      v6 = &PopCoalescingCallbackRoutine[v3];
      if ( v4 == a1 )
      {
        if ( ExCompareExchangeCallBack(v6, 0LL, (__int64)v4) )
        {
          _InterlockedAdd(&PopCoalescingCallbackRoutineCount, 0xFFFFFFFF);
          ExDereferenceCallBackBlock(&PopCoalescingCallbackRoutine[v3], v5);
          KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          ExWaitForRundownProtectionRelease(v5);
          ExFreePoolWithTag(v5, 0);
          return;
        }
      }
      else
      {
        ExDereferenceCallBackBlock(v6, v4);
      }
    }
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < 8 );
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
}
