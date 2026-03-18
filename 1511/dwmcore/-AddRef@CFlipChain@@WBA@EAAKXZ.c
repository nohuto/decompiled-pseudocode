/*
 * XREFs of ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x1800BD310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CFlipChain::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 16));
}
