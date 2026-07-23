/*
 * XREFs of IoUnregisterPriorityCallback @ 0x1401C91C8
 * Callers:
 *     IopDeleteDriver @ 0x1405461D4 (IopDeleteDriver.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 *     ExWaitForCallBacks @ 0x1406AFD38 (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1)
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

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = 0LL;
    do
    {
      v4 = ExReferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[v3]);
      v8 = v4;
      if ( v4 )
      {
        v9 = &IopUpdatePriorityCallbackRoutine[v3];
        if ( v4[4].Count == a1 )
        {
          if ( ExCompareExchangeCallBack(v9, 0LL, (__int64)v4) )
          {
            _InterlockedAdd(&IopUpdatePriorityCallbackRoutineCount, 0xFFFFFFFF);
            ExDereferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[v3], v8);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
            ExWaitForCallBacks(v8);
            PspQueueApcSpecialApc(v8);
            *(_DWORD *)(a1 + 16) &= ~0x200u;
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
}
