/*
 * XREFs of ?GetCurrentStereoContext@CDrawingContext@@EEBA?AW4StereoContext@@XZ @ 0x180064100
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800101E0 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18007DE20 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawingContext::GetCurrentStereoContext(__int64 a1)
{
  return *(unsigned int *)(a1 + 6360);
}
