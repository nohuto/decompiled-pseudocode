/*
 * XREFs of ?Release@CFlipChain@@W7EAAKXZ @ 0x18009A800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CFlipChain::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 8));
}
