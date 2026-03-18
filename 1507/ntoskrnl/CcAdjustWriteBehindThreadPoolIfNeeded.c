/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400304C4
 * Callers:
 *     CcSetDirtyPinnedData @ 0x14002F920 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14002FE40 (CcSetDirtyInMask.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     CcCanIWrite @ 0x1400E4880 (CcCanIWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x140165CEC (CcQueueLazyWriteScanThread.c)
 *     CcAddDirtyPagesToExternalCache @ 0x1401DC698 (CcAddDirtyPagesToExternalCache.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPool @ 0x140030688 (CcAdjustWriteBehindThreadPool.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14012E1F4 (CcBoostLowPriorityWorkerThread.c)
 */

void __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(char a1)
{
  char v1; // bl
  __int64 v3; // rcx
  KIRQL v4; // si

  v1 = 0;
  if ( (_BYTE)dword_1403D0108 )
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
