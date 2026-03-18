/*
 * XREFs of ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E148
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBUMilPoint2F@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@11PEAV3@2@Z @ 0x180002AF0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBUMilPo.c)
 *     ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18002AF38 (-ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18004D720 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DE38 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE608 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x1800F1810 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@000PEAHPEAUMilRectF@@2@Z @ 0x1801225E4 (-CalculateIdealSurfaceSpaceBaseTile@CViewportAlignedIntermediateRealizer@@AEAAXPEBVCMILMatrix@@0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(float *a1)
{
  return *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= *a1
      && a1[2] >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
      || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= a1[1]
      && a1[3] >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
}
