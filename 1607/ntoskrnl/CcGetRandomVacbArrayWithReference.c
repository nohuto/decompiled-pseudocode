/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x1401B2638
 * Callers:
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 * Callees:
 *     CcReferenceVacbArray @ 0x1400181B8 (CcReferenceVacbArray.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1401B26D0 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandomEx @ 0x1404CB2E8 (RtlRandomEx.c)
 */

_DWORD *CcGetRandomVacbArrayWithReference()
{
  ULONG v0; // ebx
  KIRQL v1; // di
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  while ( 1 )
  {
    do
      v0 = RtlRandomEx(&CcRandomSeed) % (CcVacbArraysHighestUsedIndex + 1);
    while ( !*(_QWORD *)(CcVacbArrays + 8LL * v0) );
    v1 = KeAcquireQueuedSpinLock(4uLL);
    v2 = CcReferenceVacbArray(v0);
    v3 = v2;
    if ( v2 )
      break;
    KeReleaseQueuedSpinLock(4uLL, v1);
  }
  CcRecalculateVacbArrayHighwaterMark(v2);
  KeReleaseQueuedSpinLock(4uLL, v1);
  return v3;
}
