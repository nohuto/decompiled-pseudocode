/*
 * XREFs of BgpFmRoundUp @ 0x14011D598
 * Callers:
 *     BgpRasPrintGlyph @ 0x14011C50C (BgpRasPrintGlyph.c)
 *     BgpRasGetGlyphTextCellDimensions @ 0x14011CC40 (BgpRasGetGlyphTextCellDimensions.c)
 *     RaspScanConvert @ 0x14011CDB0 (RaspScanConvert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmRoundUp(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 >> 6);
  if ( a1 < 0 )
    return (unsigned int)result | 0xFC000000;
  if ( (a1 & 0x3F) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
