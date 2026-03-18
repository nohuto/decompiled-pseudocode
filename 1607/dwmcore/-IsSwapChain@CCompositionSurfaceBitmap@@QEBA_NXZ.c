/*
 * XREFs of ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1800101C0
 * Callers:
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x18000FCC0 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000FF20 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x18010C020 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801396E0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013A0F0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013A3E0 (-GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::IsSwapChain(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 65);
  if ( !v1 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(v1 + 104) <= 1u )
    return 0LL;
  return result;
}
