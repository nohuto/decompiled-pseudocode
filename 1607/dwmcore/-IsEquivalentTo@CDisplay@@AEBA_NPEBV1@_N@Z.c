/*
 * XREFs of ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180034BA8
 * Callers:
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x1800363E8 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800ACBEC (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 */

bool __fastcall CDisplay::IsEquivalentTo(CDisplay *this, const struct CDisplay *a2)
{
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx

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
  v4 = (unsigned __int16 *)((char *)this + 144);
  do
  {
    v5 = *(unsigned __int16 *)((char *)v4 + a2 - this);
    v6 = *v4 - v5;
    if ( v6 )
      break;
    ++v4;
  }
  while ( v5 );
  return !v6
      && *((_DWORD *)this + 52) == *((_DWORD *)a2 + 52)
      && *((_DWORD *)this + 53) == *((_DWORD *)a2 + 53)
      && *((_DWORD *)this + 64) == *((_DWORD *)a2 + 64)
      && *((_DWORD *)this + 65) == *((_DWORD *)a2 + 65)
      && !memcmp_0((char *)this + 264, (char *)a2 + 264, 0x1CuLL)
      && *((_DWORD *)this + 73) == *((_DWORD *)a2 + 73)
      && *((_BYTE *)this + 303) == *((_BYTE *)a2 + 303);
}
