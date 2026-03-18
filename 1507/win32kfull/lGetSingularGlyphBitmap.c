/*
 * XREFs of lGetSingularGlyphBitmap @ 0x1C02471D4
 * Callers:
 *     ttfdQueryFontData @ 0x1C00B1D84 (ttfdQueryFontData.c)
 * Callees:
 *     fs_NewGlyph @ 0x1C00B4858 (fs_NewGlyph.c)
 *     vFillSingularGLYPHDATA @ 0x1C0247838 (vFillSingularGLYPHDATA.c)
 */

__int64 __fastcall lGetSingularGlyphBitmap(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  int v11; // eax

  v5 = *(_QWORD *)(a1 + 176);
  *(_DWORD *)(v5 + 108) = 0;
  *(_DWORD *)(v5 + 112) = 0;
  *(_WORD *)(v5 + 104) = -1;
  *(_WORD *)(v5 + 106) = a2;
  if ( (unsigned int)fs_NewGlyph(*(_QWORD *)(a1 + 176), *(_WORD **)(a1 + 184), (__int64)a3, (__int64)a4) )
    return 0xFFFFFFFFLL;
  if ( a3 )
    vFillSingularGLYPHDATA(a2, *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 36LL), a1, a3);
  if ( a4 )
  {
    if ( a5 < 0x14 )
      return 0xFFFFFFFFLL;
    *a4 = *(_DWORD *)(a1 + 200);
    v11 = *(_DWORD *)(a1 + 204);
    a4[4] = 0;
    a4[1] = v11;
    a4[2] = 1;
    a4[3] = 1;
  }
  if ( a3 )
    *a3 = a4;
  return 20LL;
}
