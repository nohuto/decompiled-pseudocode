/*
 * XREFs of ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180070BB4
 * Callers:
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x180070238 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x1800B5F38 (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008C5F0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 */

bool __fastcall CDisplay::IsEquivalentTo(CDisplay *this, const struct CDisplay *a2, char a3)
{
  unsigned __int16 *v6; // rax
  int v7; // r8d
  int v8; // ecx

  if ( *((_DWORD *)this + 58) != *((_DWORD *)a2 + 58)
    || *((_DWORD *)this + 59) != *((_DWORD *)a2 + 59)
    || *((_QWORD *)this + 3) != *((_QWORD *)a2 + 3)
    || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                           (char *)this + 104,
                           (char *)a2 + 104)
    || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                           (char *)this + 88,
                           (char *)a2 + 88) )
  {
    return 0;
  }
  v6 = (unsigned __int16 *)((char *)this + 144);
  do
  {
    v7 = *(unsigned __int16 *)((char *)v6 + a2 - this);
    v8 = *v6 - v7;
    if ( v8 )
      break;
    ++v6;
  }
  while ( v7 );
  return !v8
      && *((_DWORD *)this + 52) == *((_DWORD *)a2 + 52)
      && *((_DWORD *)this + 53) == *((_DWORD *)a2 + 53)
      && *((_DWORD *)this + 64) == *((_DWORD *)a2 + 64)
      && *((_DWORD *)this + 65) == *((_DWORD *)a2 + 65)
      && !memcmp_0((char *)this + 264, (char *)a2 + 264, 0x1CuLL)
      && *((_DWORD *)this + 73) == *((_DWORD *)a2 + 73)
      && (!a3 || *((_BYTE *)this + 303) == *((_BYTE *)a2 + 303));
}
