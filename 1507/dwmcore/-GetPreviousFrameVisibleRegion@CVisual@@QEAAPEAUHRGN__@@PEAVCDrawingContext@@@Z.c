/*
 * XREFs of ?GetPreviousFrameVisibleRegion@CVisual@@QEAAPEAUHRGN__@@PEAVCDrawingContext@@@Z @ 0x18010417C
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180027DB0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x1800FCC20 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z @ 0x180103C8C (-GetMoveRenderPassInfoRef@CVisual@@QEBAPEAVCMoveRenderPassInfo@@PEBVCDrawingContext@@@Z.c)
 */

HRGN __fastcall CVisual::GetPreviousFrameVisibleRegion(CVisual *this, struct CDrawingContext *a2)
{
  struct CMoveRenderPassInfo *MoveRenderPassInfoRef; // rbx
  HRGN result; // rax

  MoveRenderPassInfoRef = CVisual::GetMoveRenderPassInfoRef(this, a2);
  CMoveRenderPassInfo::ResetVisibleRegion(MoveRenderPassInfoRef);
  result = (HRGN)*((_QWORD *)MoveRenderPassInfoRef + 2);
  *((_QWORD *)MoveRenderPassInfoRef + 2) = 0LL;
  return result;
}
