/*
 * XREFs of BgpFmRoundDefault @ 0x14011D5B0
 * Callers:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14011CC40 (BgpRasGetGlyphTextCellDimensions.c)
 *     RaspScanConvert @ 0x14011CDB0 (RaspScanConvert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpFmRoundDefault(int a1)
{
  __int64 result; // rax

  result = (unsigned int)(a1 >> 6);
  if ( a1 < 0 )
    result = (unsigned int)result | 0xFC000000;
  if ( (a1 & 0x20) != 0 )
    return (unsigned int)(result + 1);
  return result;
}
