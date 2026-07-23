/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x1401347DC
 * Callers:
 *     <none>
 * Callees:
 *     CcChargeDirtyPages @ 0x14006F774 (CcChargeDirtyPages.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall CcAddDirtyPagesToExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v4; // esi
  KIRQL v5; // r14

  if ( a2 )
  {
    v2 = a2;
    do
    {
      v4 = v2;
      if ( v2 > 0xFFFFFFFF )
        v4 = -1;
      v2 -= v4;
      v5 = KeAcquireQueuedSpinLock(5uLL);
      if ( !*(_QWORD *)(a1 + 8) )
        CcScheduleLazyWriteScan(0, 0);
      *(_QWORD *)(a1 + 8) += v4;
      CcChargeDirtyPages(0LL, 0LL, 0LL, v4);
      KeReleaseQueuedSpinLock(5uLL, v5);
    }
    while ( v2 );
  }
}
