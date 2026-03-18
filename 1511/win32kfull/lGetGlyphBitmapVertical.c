/*
 * XREFs of lGetGlyphBitmapVertical @ 0x1C0147338
 * Callers:
 *     ttfdQueryFontData @ 0x1C00AA5BC (ttfdQueryFontData.c)
 * Callees:
 *     lGetGlyphBitmap @ 0x1C00AA914 (lGetGlyphBitmap.c)
 *     IsFullWidthCharacter @ 0x1C014739C (IsFullWidthCharacter.c)
 *     bChangeXform @ 0x1C0247B58 (bChangeXform.c)
 */

__int64 __fastcall lGetGlyphBitmapVertical(__int64 a1, __int64 a2, char *a3, __int64 a4, unsigned int a5, _DWORD *a6)
{
  int v9; // ebx
  __int64 v10; // r9
  unsigned int GlyphBitmap; // ebx

  v9 = a2;
  if ( !(unsigned int)IsFullWidthCharacter(*(_QWORD *)(a1 + 8), a2, a3, a4) )
    return lGetGlyphBitmap(a1, v9, a3, v10, a5, a6);
  if ( !(unsigned int)bChangeXform(a1, 1LL) )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 304) |= 2u;
  *(_DWORD *)(a1 + 312) = v9;
  GlyphBitmap = lGetGlyphBitmap(a1, v9, a3, a4, a5, a6);
  bChangeXform(a1, 0LL);
  *(_DWORD *)(a1 + 304) &= ~2u;
  return GlyphBitmap;
}
