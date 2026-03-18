/*
 * XREFs of CcGetRandomVacbArrayWithReference @ 0x1401DE088
 * Callers:
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     CcReferenceVacbArray @ 0x14011A9DC (CcReferenceVacbArray.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1401DE120 (CcRecalculateVacbArrayHighwaterMark.c)
 *     RtlRandomEx @ 0x1404A2FFC (RtlRandomEx.c)
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
