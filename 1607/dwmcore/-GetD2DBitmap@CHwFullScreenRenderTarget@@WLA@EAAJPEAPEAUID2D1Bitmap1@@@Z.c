/*
 * XREFs of ?GetD2DBitmap@CHwFullScreenRenderTarget@@WLA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800C15E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetD2DBitmap(__int64 a1, struct ID2D1Bitmap1 **a2)
{
  return CHwFullScreenRenderTarget::GetD2DBitmap((CD3DSurface **)(a1 - 176), a2);
}
