/*
 * XREFs of GxpBitsToBytes @ 0x140152B20
 * Callers:
 *     BgpGxRectangleCreate @ 0x14075E808 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return ((a1 + 7) & 0xFFFFFFF8) >> 3;
}
