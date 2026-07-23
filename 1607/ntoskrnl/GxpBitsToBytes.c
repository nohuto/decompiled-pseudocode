/*
 * XREFs of GxpBitsToBytes @ 0x140129FD8
 * Callers:
 *     BgpGxRectangleCreate @ 0x1407276DC (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return ((a1 + 7) & 0xFFFFFFF8) >> 3;
}
