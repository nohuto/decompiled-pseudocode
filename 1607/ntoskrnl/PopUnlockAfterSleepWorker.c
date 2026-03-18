/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x1403C95C8
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140009D58 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1400AC6FC (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x140112944 (PopRunNormalIrpWorkers.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopClearShutdownMarker @ 0x1404F1634 (PopClearShutdownMarker.c)
 *     PopAdjustHiberFile @ 0x14052EA18 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     PopClearSleepMarker @ 0x14052EC58 (PopClearSleepMarker.c)
 *     ExSwapinWorkerThreads @ 0x14052ECF0 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x14052EE18 (CmSetLazyFlushState.c)
 */

__int64 __fastcall PopUnlockAfterSleepWorker(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  CmSetLazyFlushState(a1);
  LOBYTE(v1) = 1;
  ExSwapinWorkerThreads(v1);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  PopClearSleepMarker();
  PopClearShutdownMarker();
  PopFreeHiberContext();
  PopAcquirePolicyLock();
  if ( byte_140303F68 )
    PopAdjustHiberFile();
  PopReleasePolicyLock();
  return PopReleaseTransitionLock();
}
