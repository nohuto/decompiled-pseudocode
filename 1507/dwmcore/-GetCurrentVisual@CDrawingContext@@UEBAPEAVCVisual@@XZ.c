/*
 * XREFs of ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18002E1C0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x180011604 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ @ 0x18002E190 (-GetCurrentLayoutSize@CDrawingContext@@AEBAPEBUD2D_SIZE_F@@XZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18002F420 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1D0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800DBE20 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800FC0A0 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180116FD0 (-Draw@CPrimitive@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CDrawingContext::GetCurrentVisual(CDrawingContext *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = 0LL;
  if ( *((_BYTE *)this + 5464) )
  {
    if ( *((_BYTE *)this + 5465) )
    {
      v2 = *(_QWORD *)(*((_QWORD *)this + 322) + 8LL);
      if ( v2 )
        return (struct CVisual *)(v2 - 64);
    }
    else
    {
      return *(struct CVisual **)(*((_QWORD *)this + 684) + 24LL);
    }
  }
  return (struct CVisual *)v1;
}
