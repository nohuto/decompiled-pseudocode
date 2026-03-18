/*
 * XREFs of ?GetD2DBitmap@CHwDisplayRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002D550
 * Callers:
 *     ?GetD2DBitmap@CHwDisplayRenderTarget@@WLA@EAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800C1030 (-GetD2DBitmap@CHwDisplayRenderTarget@@WLA@EAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwDisplayRenderTarget::GetD2DBitmap(CHwDisplayRenderTarget *this, struct ID2D1Bitmap1 **a2)
{
  return CHwSurfaceRenderTarget::GetD2DBitmap(this, a2);
}
