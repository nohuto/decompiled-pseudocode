/*
 * XREFs of ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004FA24
 * Callers:
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18000B400 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B500 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z @ 0x18000B8F0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z @ 0x18004EED0 (-AddVisualTreeDataToList@CVisual@@IEAAXPEAVCVisualTreeData@@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x180051050 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180051090 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180055530 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CVisual::GetTreeDataListHead(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 34);
  if ( (*(_DWORD *)(v1 + 4) & 0x80000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0xD000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(struct _LIST_ENTRY **)(i + 4);
}
