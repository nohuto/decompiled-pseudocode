/*
 * XREFs of ?Discard@CHwTextureRenderTarget@@UEAAXXZ @ 0x18014B190
 * Callers:
 *     ?Discard@CHwDisplayRenderTarget@@WLA@EAAXXZ @ 0x1800BD840 (-Discard@CHwDisplayRenderTarget@@WLA@EAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CHwTextureRenderTarget::Discard(CHwTextureRenderTarget *this)
{
  CHwSurfaceRenderTarget::Discard(this);
}
