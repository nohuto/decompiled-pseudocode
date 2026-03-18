/*
 * XREFs of ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x1800C02C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CFlipChain::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 16));
}
