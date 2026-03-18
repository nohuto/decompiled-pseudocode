/*
 * XREFs of ?GetD2DBitmap@CHwTextureRenderTarget@@WLA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18009B310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetD2DBitmap(__int64 a1, struct ID2D1Bitmap1 **a2)
{
  return CHwTextureRenderTarget::GetD2DBitmap((CD3DSurface **)(a1 - 176), a2);
}
