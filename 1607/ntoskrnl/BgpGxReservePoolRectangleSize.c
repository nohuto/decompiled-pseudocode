/*
 * XREFs of BgpGxReservePoolRectangleSize @ 0x140727904
 * Callers:
 *     BgpTxtRegionSize @ 0x140129BF0 (BgpTxtRegionSize.c)
 * Callees:
 *     BgpGxRectangleSize @ 0x1401297C4 (BgpGxRectangleSize.c)
 */

__int64 __fastcall BgpGxReservePoolRectangleSize(int a1, int a2, int a3)
{
  return (((unsigned int)BgpGxRectangleSize(a1, a2, a3) + 15) & 0xFFFFFFF0) + 32LL;
}
