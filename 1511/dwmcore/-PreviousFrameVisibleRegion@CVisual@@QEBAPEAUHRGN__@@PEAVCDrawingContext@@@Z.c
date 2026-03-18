/*
 * XREFs of ?PreviousFrameVisibleRegion@CVisual@@QEBAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18010DC40
 * Callers:
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18010E170 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18010E44C (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x18004D854 (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180116090 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

CMoveRenderPassInfo *__fastcall CVisual::PreviousFrameVisibleRegion(CVisual *this, struct CDrawingContext *a2)
{
  CMoveRenderPassInfo *result; // rax
  CMoveRenderPassInfo *v3; // rbx

  result = CVisual::GetMoveRenderPassInfoRef(this, a2);
  v3 = result;
  if ( result )
  {
    CMoveRenderPassInfo::ResetVisibleRegion(result);
    return (CMoveRenderPassInfo *)*((_QWORD *)v3 + 2);
  }
  return result;
}
