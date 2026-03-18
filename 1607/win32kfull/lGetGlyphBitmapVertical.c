/*
 * XREFs of lGetGlyphBitmapVertical @ 0x1C024340C
 * Callers:
 *     ttfdQueryFontData @ 0x1C00C2348 (ttfdQueryFontData.c)
 * Callees:
 *     lGetGlyphBitmap @ 0x1C00C267C (lGetGlyphBitmap.c)
 *     IsFullWidthCharacter @ 0x1C014BC60 (IsFullWidthCharacter.c)
 *     bChangeXform @ 0x1C0243D98 (bChangeXform.c)
 */

__int64 __fastcall lGetGlyphBitmapVertical(
        __int64 a1,
        unsigned int a2,
        char *a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v10; // r9
  unsigned int GlyphBitmap; // ebx

  if ( !(unsigned int)IsFullWidthCharacter(*(_QWORD *)(a1 + 8), a2) )
    return lGetGlyphBitmap(a1, a2, a3, v10, a5, a6);
  if ( !(unsigned int)bChangeXform(a1, 1LL) )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 304) |= 2u;
  *(_DWORD *)(a1 + 312) = a2;
  GlyphBitmap = lGetGlyphBitmap(a1, a2, a3, a4, a5, a6);
  bChangeXform(a1, 0LL);
  *(_DWORD *)(a1 + 304) &= ~2u;
  return GlyphBitmap;
}
