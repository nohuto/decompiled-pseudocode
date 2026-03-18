/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x1406DB844
 * Callers:
 *     BgpTxtRegionSize @ 0x14011EA00 (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x14011E5FC (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32LL;
}
