/*
 * XREFs of ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x1801098FC
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180107530 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@@Z @ 0x1801319A0 (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct _LIST_ENTRY *__fastcall CVisual::GetOcclusionInfo(CVisual *this, const struct CVisualTree *a2)
{
  __int64 v2; // rbx
  struct _LIST_ENTRY *TreeData; // rax
  struct _LIST_ENTRY *v4; // rdi

  v2 = 0LL;
  TreeData = CVisual::FindTreeData(this, a2);
  v4 = TreeData;
  if ( TreeData )
  {
    if ( !TreeData[2].Flink )
      TreeData[2].Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))TreeData[1].Blink->Flink[16].Blink)(TreeData[1].Blink);
    return v4[2].Flink;
  }
  return (struct _LIST_ENTRY *)v2;
}
