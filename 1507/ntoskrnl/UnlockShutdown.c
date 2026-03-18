/*
 * XREFs of UnlockShutdown @ 0x1404EA6C8
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmpLazyCommitWorker @ 0x14065A808 (CmpLazyCommitWorker.c)
 *     CmpSyncNextBackupHive @ 0x14065C7C4 (CmpSyncNextBackupHive.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall UnlockShutdown(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx
  ULONG_PTR v3; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  _m_prefetchw(&CmpShutdownLock);
  v2 = CmpShutdownLock - 16;
  if ( (CmpShutdownLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (CmpShutdownLock & 2) != 0
    || (v3 = CmpShutdownLock,
        v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownLock, v2, CmpShutdownLock)) )
  {
    ExfReleasePushLock(&CmpShutdownLock, a2);
  }
  KeAbPostRelease((ULONG_PTR)&CmpShutdownLock);
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
