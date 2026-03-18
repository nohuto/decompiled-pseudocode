/*
 * XREFs of ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18017B800
 * Callers:
 *     ?Discard@CHwDisplayRenderTarget@@WLA@EAAXXZ @ 0x1800C0F50 (-Discard@CHwDisplayRenderTarget@@WLA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::Discard(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::Discard(this);
}
