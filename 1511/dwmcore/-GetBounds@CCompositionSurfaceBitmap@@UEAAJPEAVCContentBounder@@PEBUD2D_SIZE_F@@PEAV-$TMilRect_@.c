/*
 * XREFs of ?GetBounds@CCompositionSurfaceBitmap@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000BE00
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@WDA@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCDF0 (-GetBounds@CCompositionSurfaceBitmap@@WDA@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRec.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@WEI@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BCE00 (-GetBounds@CCompositionSurfaceBitmap@@WEI@EAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRec.c)
 *     ?GetBounds@CYCbCrSurface@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180127B10 (-GetBounds@CYCbCrSurface@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002E6E4 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBounds(
        CCompositionSurfaceBitmap *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CCompositionSurfaceBitmap::EnsureBitmapRealization(a1, 0);
  return CCompositionSurfaceBitmap::GetBoundsInternal(a1, a3, a4);
}
