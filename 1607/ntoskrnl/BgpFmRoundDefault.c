/*
 * XREFs of BgpFmRoundDefault @ 0x140128780
 * Callers:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140127E28 (BgpRasGetGlyphTextCellDimensions.c)
 *     RaspScanConvert @ 0x140127F90 (RaspScanConvert.c)
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
