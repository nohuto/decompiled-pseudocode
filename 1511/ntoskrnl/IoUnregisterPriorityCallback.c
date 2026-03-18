/*
 * XREFs of IoUnregisterPriorityCallback @ 0x1401BB52C
 * Callers:
 *     IopDeleteDriver @ 0x1404C5944 (IopDeleteDriver.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     PspQueueApcSpecialApc @ 0x1404B8A08 (PspQueueApcSpecialApc.c)
 *     ExWaitForCallBacks @ 0x14066C12C (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rdi
  signed __int64 *v6; // rcx

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = 0LL;
    do
    {
      v4 = ExReferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[v3]);
      v5 = v4;
      if ( v4 )
      {
        v6 = &IopUpdatePriorityCallbackRoutine[v3];
        if ( v4[4].Count == a1 )
        {
          if ( ExCompareExchangeCallBack(v6, 0LL, (__int64)v4) )
          {
            _InterlockedAdd(&IopUpdatePriorityCallbackRoutineCount, 0xFFFFFFFF);
            ExDereferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[v3], v5);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
            ExWaitForCallBacks(v5);
            PspQueueApcSpecialApc(v5);
            *(_DWORD *)(a1 + 16) &= ~0x200u;
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
}
