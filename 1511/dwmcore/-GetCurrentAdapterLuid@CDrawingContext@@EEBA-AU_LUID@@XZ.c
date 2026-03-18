/*
 * XREFs of ?GetCurrentAdapterLuid@CDrawingContext@@EEBA?AU_LUID@@XZ @ 0x180037150
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CA50 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDrawingContext::GetCurrentAdapterLuid(CDrawingContext *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 41);
  return (struct _LUID)a2;
}
