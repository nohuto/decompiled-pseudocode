/*
 * XREFs of ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBUMilRectF@@XZ @ 0x18000CB04
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x18000C768 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x180166674 (-RenderDirtyRegion@CAnalogTextureTarget@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x180166CBC (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

const struct MilRectF *__fastcall CDirtyRegion::GetOptimizedDirtyRects(CDirtyRegion *this)
{
  const struct MilRectF *result; // rax

  result = (CDirtyRegion *)((char *)this + 2708);
  if ( !*((_BYTE *)this + 2724) )
    return (CDirtyRegion *)((char *)this + 416);
  return result;
}
