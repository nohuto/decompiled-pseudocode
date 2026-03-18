/*
 * XREFs of CmpUnlockContextList @ 0x14065DA74
 * Callers:
 *     CmSetCallbackObjectContext @ 0x14065265C (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x1406527EC (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x140652BC8 (CmpFreeCallbackObjectContexts.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall CmpUnlockContextList(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx
  ULONG_PTR v3; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  _m_prefetchw(&CmpContextListLock);
  v2 = CmpContextListLock - 16;
  if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (CmpContextListLock & 2) != 0
    || (v3 = CmpContextListLock,
        v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v2, CmpContextListLock)) )
  {
    ExfReleasePushLock(&CmpContextListLock, a2);
  }
  KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
