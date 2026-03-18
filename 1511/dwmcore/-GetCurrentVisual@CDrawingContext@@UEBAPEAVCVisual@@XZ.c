/*
 * XREFs of ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180043690
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18000F0A0 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180010810 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x180043664 (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180044C40 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091920 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800F36D0 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Draw@CColorBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121010 (-Draw@CColorBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121CF0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122930 (-Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CDrawingContext::GetCurrentVisual(CDrawingContext *this)
{
  struct CVisual *result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 5496) )
  {
    if ( *((_BYTE *)this + 5497) )
      return *(struct CVisual **)(*((_QWORD *)this + 322) + 8LL);
    else
      return *(struct CVisual **)(*((_QWORD *)this + 688) + 24LL);
  }
  return result;
}
