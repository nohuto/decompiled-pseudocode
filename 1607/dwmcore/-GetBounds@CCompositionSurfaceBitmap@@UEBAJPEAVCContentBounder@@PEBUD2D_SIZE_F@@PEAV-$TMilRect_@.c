/*
 * XREFs of ?GetBounds@CCompositionSurfaceBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FAE0
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@WHI@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BFC50 (-GetBounds@CCompositionSurfaceBitmap@@WHI@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRec.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@WJA@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BFC60 (-GetBounds@CCompositionSurfaceBitmap@@WJA@EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRec.c)
 *     ?GetBounds@CYCbCrSurface@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180145140 (-GetBounds@CYCbCrSurface@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180093158 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBounds(
        CCompositionSurfaceBitmap *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CCompositionSurfaceBitmap::EnsureBitmapRealization(a1, 0);
  return CCompositionSurfaceBitmap::GetBoundsInternal((__int64)a1, a3, a4);
}
