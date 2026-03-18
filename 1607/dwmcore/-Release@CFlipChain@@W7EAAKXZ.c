/*
 * XREFs of ?Release@CFlipChain@@W7EAAKXZ @ 0x1800C0690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::Release(__int64 a1)
{
  return CHwndBitmap::Release((CHwndBitmap *)(a1 - 8));
}
