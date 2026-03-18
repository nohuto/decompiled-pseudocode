/*
 * XREFs of ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1800DCDD8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800DC290 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800E0510 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18003553C (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetOcclusionInfo@CTreeData@@IEAAPEAVCOcclusionInfo@@XZ @ 0x1800DF5D0 (-GetOcclusionInfo@CTreeData@@IEAAPEAVCOcclusionInfo@@XZ.c)
 */

struct COcclusionInfo *__fastcall CVisual::GetOcclusionInfo(CVisual *this, const struct CVisualTree *a2)
{
  __int64 **TreeData; // rax
  __int64 v3; // r9

  TreeData = CVisual::FindTreeData(this, a2);
  if ( TreeData )
    return CTreeData::GetOcclusionInfo((CTreeData *)TreeData);
  return (struct COcclusionInfo *)v3;
}
