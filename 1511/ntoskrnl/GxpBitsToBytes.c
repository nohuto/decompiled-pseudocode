/*
 * XREFs of GxpBitsToBytes @ 0x14011E8A0
 * Callers:
 *     BgpGxRectangleCreate @ 0x1406DB7C0 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return ((a1 + 7) & 0xFFFFFFF8) >> 3;
}
