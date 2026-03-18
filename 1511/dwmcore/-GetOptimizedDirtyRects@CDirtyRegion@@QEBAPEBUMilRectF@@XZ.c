/*
 * XREFs of ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x180079820
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18013C614 (-RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x18013CC30 (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
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
