/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x140727904
 * Callers:
 *     BgpTxtRegionSize @ 0x14012A160 (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x140129D34 (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32LL;
}
