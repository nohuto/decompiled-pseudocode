/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x1401DC698
 * Callers:
 *     <none>
 * Callees:
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400304C4 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rsi
  KIRQL v5; // bp
  unsigned __int64 v6; // rcx

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v4 = (unsigned int)v2;
      if ( v2 > 0xFFFFFFFF )
        v4 = 0xFFFFFFFFLL;
      v2 -= v4;
      v5 = KeAcquireQueuedSpinLock(5uLL);
      if ( !*(_QWORD *)(a1 + 8) )
        CcScheduleLazyWriteScan(0, 0);
      *(_QWORD *)(a1 + 8) += v4;
      v6 = v4 + CcGlobalDirtyPageStatistics;
      CcGlobalDirtyPageStatistics += v4;
      if ( CcCoalescingState && v6 >= 0x2000 )
        CcScheduleLazyWriteScan(1, 0);
      if ( CcForcedDisableLazywriteScan )
      {
        CcScheduleLazyWriteScan(0, 0);
        CcForcedDisableLazywriteScan = 0;
      }
      CcAdjustWriteBehindThreadPoolIfNeeded(0);
      KeReleaseQueuedSpinLock(5uLL, v5);
    }
    while ( v2 );
  }
}
