/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400B2D14
 * Callers:
 *     CcCanIWrite @ 0x14002F540 (CcCanIWrite.c)
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     CcChargeDirtyPages @ 0x1400B2C7C (CcChargeDirtyPages.c)
 *     CcQueueLazyWriteScanThread @ 0x1401379A0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1400E7D3C (CcBoostLowPriorityWorkerThread.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1400E84D8 (CcAdjustWriteBehindThreadPool.c)
 */

void __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(char a1)
{
  char v1; // bl
  __int64 v3; // rcx
  KIRQL v4; // si

  v1 = 0;
  if ( (_BYTE)dword_140381118 )
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
