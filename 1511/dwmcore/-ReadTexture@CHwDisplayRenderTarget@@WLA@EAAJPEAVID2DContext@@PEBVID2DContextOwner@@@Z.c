/*
 * XREFs of ?ReadTexture@CHwDisplayRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800BE0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::ReadTexture(
        __int64 a1,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  return CHwTextureRenderTarget::ReadTexture((CHwTextureRenderTarget *)(a1 - 176), a2, a3);
}
