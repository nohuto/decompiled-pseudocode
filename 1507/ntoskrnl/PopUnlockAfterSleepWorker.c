/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x1403EC318
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140010480 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x1400EDED0 (ExNotifyCallback.c)
 *     PopRunNormalIrpWorkers @ 0x140147E08 (PopRunNormalIrpWorkers.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopAdjustHiberFile @ 0x140564A7C (PopAdjustHiberFile.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     PopClearSleepMarker @ 0x140564C8C (PopClearSleepMarker.c)
 *     ExSwapinWorkerThreads @ 0x140564D10 (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x140564EB0 (CmSetLazyFlushState.c)
 */

__int64 __fastcall PopUnlockAfterSleepWorker(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  LOBYTE(a1) = 1;
  CmSetLazyFlushState(a1);
  LOBYTE(v1) = 1;
  ExSwapinWorkerThreads(v1);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers(v3, v2, v4, v5);
  MmUnlockPagableImageSection(ExPageLockHandle);
  PopClearSleepMarker();
  PopFreeHiberContext();
  PopAcquirePolicyLock();
  if ( byte_14032E528 )
    PopAdjustHiberFile();
  PopReleasePolicyLock();
  return PopReleaseTransitionLock();
}
