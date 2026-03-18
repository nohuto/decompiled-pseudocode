/*
 * XREFs of ttfdGlyphBitmap @ 0x1C0243854
 * Callers:
 *     ttfdQueryFontData @ 0x1C00C2348 (ttfdQueryFontData.c)
 * Callees:
 *     IsFullWidthCharacter @ 0x1C014BC60 (IsFullWidthCharacter.c)
 *     lGGOBitmap @ 0x1C02430B4 (lGGOBitmap.c)
 *     bChangeXform @ 0x1C0243D98 (bChangeXform.c)
 */

__int64 __fastcall ttfdGlyphBitmap(__int64 a1, unsigned int a2, _QWORD *a3, _BYTE *a4, int a5)
{
  unsigned int v9; // edi
  int v10; // eax

  if ( a2 == -1 )
  {
    EngSetLastError(0x57u);
    return (unsigned int)-1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 308) && (unsigned int)IsFullWidthCharacter(*(_QWORD *)(a1 + 8), a2) )
    {
      v9 = -1;
      if ( !(unsigned int)bChangeXform(a1, 1LL) )
        return v9;
      *(_DWORD *)(a1 + 304) |= 2u;
      *(_DWORD *)(a1 + 312) = a2;
    }
    v9 = lGGOBitmap(a1, a2, a3, a4, a5);
    v10 = *(_DWORD *)(a1 + 304);
    if ( (v10 & 2) != 0 )
    {
      *(_DWORD *)(a1 + 304) = v10 & 0xFFFFFFFD;
      if ( !(unsigned int)bChangeXform(a1, 0LL) )
        return (unsigned int)-1;
    }
  }
  return v9;
}
