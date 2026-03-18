/*
 * XREFs of ?GetBitmapSource@CFlipChain@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180109190
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTimingInfo@CFlipChain@@AEAAXXZ @ 0x18010A174 (-UpdateTimingInfo@CFlipChain@@AEAAXXZ.c)
 */

__int64 __fastcall CFlipChain::GetBitmapSource(
        CFlipChain *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  CFlipChain::UpdateTimingInfo((CFlipChain *)((char *)this - 8));
  return CBitmapResource::GetBitmapSource(this, a2, a3);
}
