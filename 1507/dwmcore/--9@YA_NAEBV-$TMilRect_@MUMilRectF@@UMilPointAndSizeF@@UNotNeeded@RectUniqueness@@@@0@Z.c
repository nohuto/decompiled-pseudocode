/*
 * XREFs of ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180087AD8
 * Callers:
 *     ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x18006F2AC (-ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOU.c)
 *     ?HasRealizationContextChanged@CImageBrush@@UEBAHPEBUBrushContext@@@Z @ 0x1800859F0 (-HasRealizationContextChanged@CImageBrush@@UEBAHPEBUBrushContext@@@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?HasRealizationContextChanged@CLinearGradientBrush@@UEBAHPEBUBrushContext@@@Z @ 0x1800F9820 (-HasRealizationContextChanged@CLinearGradientBrush@@UEBAHPEBUBrushContext@@@Z.c)
 *     ?SetBounds@CCoRenderContent@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011C150 (-SetBounds@CCoRenderContent@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2] || a1[3] != a2[3];
}
