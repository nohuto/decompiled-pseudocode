/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14006FC80
 * Callers:
 *     CcCanIWrite @ 0x1400209F0 (CcCanIWrite.c)
 *     CcChargeDirtyPages @ 0x14006FBF4 (CcChargeDirtyPages.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcQueueLazyWriteScanThread @ 0x14013FDAC (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcBoostLowPriorityWorkerThread @ 0x14006B550 (CcBoostLowPriorityWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x14006FE70 (CcAdjustWriteBehindThreadPool.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(char a1)
{
  char v1; // bl
  __int64 v3; // rcx
  KIRQL v4; // si

  v1 = 0;
  if ( (_BYTE)dword_1403A9160 )
    return;
  v4 = KeAcquireQueuedSpinLock(8uLL);
  if ( CcPostTickWorkItemCount )
  {
    if ( CcMaxNumberOfWriteBehindThreads < (unsigned int)CcNumberWorkerThreads )
    {
      v1 = 1;
      v3 = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    if ( (unsigned __int64)CcGlobalDirtyPageStatistics > 0x2000 || a1 )
    {
      if ( CcMaxNumberOfWriteBehindThreads < (unsigned int)CcNumberWorkerThreads )
      {
        CcAdjustWriteBehindThreadPool(0LL);
        v1 = 1;
      }
      goto LABEL_9;
    }
    if ( !CcExecutingWriteBehindWorkItems && (__int64 *)CcRegularWorkQueue == &CcRegularWorkQueue )
    {
      LOBYTE(v3) = 1;
LABEL_8:
      CcAdjustWriteBehindThreadPool(v3);
    }
  }
LABEL_9:
  KeReleaseQueuedSpinLock(8uLL, v4);
  if ( v1 )
  {
    if ( KeGetCurrentIrql() < 2u )
      CcBoostLowPriorityWorkerThread(0LL);
  }
}
