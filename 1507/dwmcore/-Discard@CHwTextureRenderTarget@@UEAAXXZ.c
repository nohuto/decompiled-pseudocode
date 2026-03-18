/*
 * XREFs of ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18013B000
 * Callers:
 *     ?Discard@CHwDisplayRenderTarget@@WLA@EAAXXZ @ 0x18009B280 (-Discard@CHwDisplayRenderTarget@@WLA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::Discard(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::Discard(this);
}
