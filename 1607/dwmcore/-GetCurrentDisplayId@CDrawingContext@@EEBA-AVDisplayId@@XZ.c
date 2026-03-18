/*
 * XREFs of ?GetCurrentDisplayId@CDrawingContext@@EEBA?AVDisplayId@@XZ @ 0x18006F260
 * Callers:
 *     ?GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800101E0 (-GetD2DBitmapRealizationForContextOwner@CCompositionSurfaceBitmap@@UEAAJPEAVID2DContextOwner@@PE.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18007DE20 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDrawingContext::GetCurrentDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 344);
  return a2;
}
