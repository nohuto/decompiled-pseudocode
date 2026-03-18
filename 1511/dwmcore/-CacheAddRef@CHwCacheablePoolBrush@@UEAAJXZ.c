/*
 * XREFs of ?CacheAddRef@CHwCacheablePoolBrush@@UEAAJXZ @ 0x180014F40
 * Callers:
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18008A880 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwCacheablePoolBrush::CacheAddRef(CHwCacheablePoolBrush *this)
{
  (**(void (__fastcall ***)(CHwCacheablePoolBrush *))this)(this);
  return 0LL;
}
