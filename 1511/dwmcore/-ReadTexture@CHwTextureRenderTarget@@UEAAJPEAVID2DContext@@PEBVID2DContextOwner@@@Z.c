/*
 * XREFs of ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18014B5B0
 * Callers:
 *     ?ReadTexture@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800BE0A0 (-ReadTexture@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::ReadTexture(
        CD3DDeviceLevel1 **this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  return CHwSurfaceRenderTarget::ReadTexture(this, a2, a3);
}
