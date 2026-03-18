/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x1401A98F4
 * Callers:
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x1400B1D78 (CcReferenceVacbArray.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1401A998C (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandomEx @ 0x1403CBDAC (RtlRandomEx.c)
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
