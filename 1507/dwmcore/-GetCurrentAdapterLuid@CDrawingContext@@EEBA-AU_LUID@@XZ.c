/*
 * XREFs of ?GetCurrentAdapterLuid@CDrawingContext@@EEBA?AU_LUID@@XZ @ 0x180022E30
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180008840 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800729A0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDrawingContext::GetCurrentAdapterLuid(CDrawingContext *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 41);
  return (struct _LUID)a2;
}
