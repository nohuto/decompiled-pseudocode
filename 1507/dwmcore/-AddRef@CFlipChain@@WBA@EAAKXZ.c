/*
 * XREFs of ?AddRef@CFlipChain@@WBA@EAAKXZ @ 0x18009A9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::AddRef(__int64 a1)
{
  return CGdiSpriteBitmap::AddRef((CGdiSpriteBitmap *)(a1 - 16));
}
