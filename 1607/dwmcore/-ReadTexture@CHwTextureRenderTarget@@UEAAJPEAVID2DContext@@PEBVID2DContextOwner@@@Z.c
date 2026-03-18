/*
 * XREFs of ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18017A6E0
 * Callers:
 *     ?ReadTexture@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800C1930 (-ReadTexture@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::ReadTexture(
        CHwTextureRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  return CHwSurfaceRenderTarget::ReadTexture(this, a2, a3);
}
