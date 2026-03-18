/*
 * XREFs of ?GetD2DBitmap@CHwTextureRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180082BE0
 * Callers:
 *     ?GetD2DBitmap@CHwTextureRenderTarget@@WLA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18009B310 (-GetD2DBitmap@CHwTextureRenderTarget@@WLA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwTextureRenderTarget::GetD2DBitmap(CD3DSurface **this, struct ID2D1Bitmap1 **a2)
{
  return CHwSurfaceRenderTarget::GetD2DBitmap(this, a2);
}
