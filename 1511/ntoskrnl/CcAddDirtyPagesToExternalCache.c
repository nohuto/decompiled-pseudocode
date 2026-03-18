/*
 * XREFs of CcAddDirtyPagesToExternalCache @ 0x14012DA30
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcChargeDirtyPages @ 0x1400B2C7C (CcChargeDirtyPages.c)
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
