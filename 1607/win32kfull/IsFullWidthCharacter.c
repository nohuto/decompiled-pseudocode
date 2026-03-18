/*
 * XREFs of IsFullWidthCharacter @ 0x1C014BC60
 * Callers:
 *     bQueryAdvanceWidths @ 0x1C00285C4 (bQueryAdvanceWidths.c)
 *     bGetFastAdvanceWidth @ 0x1C00C2D98 (bGetFastAdvanceWidth.c)
 *     lQueryTrueTypeOutlineVertical @ 0x1C0242658 (lQueryTrueTypeOutlineVertical.c)
 *     lGetGlyphBitmapVertical @ 0x1C024340C (lGetGlyphBitmapVertical.c)
 *     ttfdGlyphBitmap @ 0x1C0243854 (ttfdGlyphBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFullWidthCharacter(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( a2 >= *(_DWORD *)(v2 + 4) )
    return 0LL;
  else
    return (unsigned __int8)(glyphBits[a2 & 7] & *(_BYTE *)(((unsigned __int64)a2 >> 3) + v2 + 12));
}
