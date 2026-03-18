/*
 * XREFs of ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x18003C95C
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?RenderDirtyRegion@CAnalogRenderTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180127054 (-RenderDirtyRegion@CAnalogRenderTarget@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     <none>
 */

const struct MilRectF *__fastcall CDirtyRegion::GetOptimizedDirtyRects(CDirtyRegion *this)
{
  const struct MilRectF *result; // rax

  result = (CDirtyRegion *)((char *)this + 996);
  if ( !*((_BYTE *)this + 1012) )
    return (CDirtyRegion *)((char *)this + 280);
  return result;
}
