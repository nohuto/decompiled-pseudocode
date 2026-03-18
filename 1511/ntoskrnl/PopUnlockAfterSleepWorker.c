/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x14039DEDC
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140092004 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1400EBD44 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x140118348 (PopRunNormalIrpWorkers.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopAdjustHiberFile @ 0x1404F5998 (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 *     PopClearSleepMarker @ 0x1404F5BA8 (PopClearSleepMarker.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1404F5D54 (CmSetLazyFlushState.c)
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
  PopFreeHiberContext();
  PopAcquirePolicyLock();
  if ( byte_1402DDF68 )
    PopAdjustHiberFile();
  PopReleasePolicyLock();
  return PopReleaseTransitionLock();
}
