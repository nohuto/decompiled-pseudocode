/*
 * XREFs of ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x18005817C
 * Callers:
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x180055628 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x18008CECC (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008320C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memcmp_0 @ 0x180099BAE (memcmp_0.c)
 */

bool __fastcall CDisplay::IsEquivalentTo(CDisplay *this, const struct CDisplay *a2, char a3)
{
  unsigned __int16 *v6; // rax
  int v7; // r8d
  int v8; // ecx

  if ( *((_DWORD *)this + 6) != *((_DWORD *)a2 + 6)
    || *((_DWORD *)this + 208) != *((_DWORD *)a2 + 208)
    || *((_DWORD *)this + 209) != *((_DWORD *)a2 + 209)
    || *((_QWORD *)this + 4) != *((_QWORD *)a2 + 4)
    || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                           (char *)this + 112,
                           (char *)a2 + 112)
    || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                           (char *)this + 96,
                           (char *)a2 + 96) )
  {
    return 0;
  }
  v6 = (unsigned __int16 *)((char *)this + 160);
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
      && *((_DWORD *)this + 56) == *((_DWORD *)a2 + 56)
      && *((_DWORD *)this + 70) == *((_DWORD *)a2 + 70)
      && *((_DWORD *)this + 215) == *((_DWORD *)a2 + 215)
      && *((_DWORD *)this + 216) == *((_DWORD *)a2 + 216)
      && !memcmp_0((char *)this + 868, (char *)a2 + 868, 0x1CuLL)
      && *((_DWORD *)this + 224) == *((_DWORD *)a2 + 224)
      && (!a3 || *((_BYTE *)this + 148) == *((_BYTE *)a2 + 148))
      && *((_DWORD *)this + 207) == *((_DWORD *)a2 + 207);
}
