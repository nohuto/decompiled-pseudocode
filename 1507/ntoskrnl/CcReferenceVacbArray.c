/*
 * XREFs of CcReferenceVacbArray @ 0x14011A9DC
 * Callers:
 *     CcGetVacbFromFreeList @ 0x14003D58C (CcGetVacbFromFreeList.c)
 *     CcUnmapInactiveViews @ 0x140167FCC (CcUnmapInactiveViews.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401DE088 (CcGetRandomVacbArrayWithReference.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

_DWORD *__fastcall CcReferenceVacbArray(unsigned int a1)
{
  _DWORD *v1; // r8
  _DWORD *v2; // r9

  v1 = 0LL;
  v2 = *(_DWORD **)(CcVacbArrays + 8LL * a1);
  if ( v2 )
  {
    ++v2[1];
    v1 = v2;
    if ( *v2 != a1 )
      KeBugCheckEx(0x34u, 0x11AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v1;
}
