/*
 * XREFs of CcPerfLogLoggedStreamsStats @ 0x1400AEA84
 * Callers:
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 * Callees:
 *     CcPerfLogVolumeLogHandleInfo @ 0x1400AEB34 (CcPerfLogVolumeLogHandleInfo.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall CcPerfLogLoggedStreamsStats(int a1)
{
  int v1; // ebp
  KIRQL v3; // al
  __int64 *v4; // rbx
  KIRQL v5; // di
  __int64 v6; // rcx

  v1 = CcPagesYetToWrite;
  v3 = KeAcquireQueuedSpinLock(5uLL);
  v4 = (__int64 *)CcVolumeCacheMapList;
  v5 = v3;
  while ( v4 != &CcVolumeCacheMapList )
  {
    if ( v4[3] )
    {
      v6 = v4[19];
      if ( v6 )
      {
        CcPerfLogVolumeLogHandleInfo(v6, a1, v1, v4[17], v4[6], v4[9]);
        v4[19] = 0LL;
      }
    }
    v4 = (__int64 *)*v4;
  }
  KeReleaseQueuedSpinLock(5uLL, v5);
}
