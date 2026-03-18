/*
 * XREFs of ?IsCloseRealZero@@YAHMM@Z @ 0x180035D90
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18000EB90 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x180015FF0 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 *     ?BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180017ACC (-BuildPolygon@Mesh@@AEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180018310 (-CreatePolygonMesh@Mesh@@QEAAJPEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z @ 0x18001861C (-ComparePoints@MeshGraph@Mesh@@QEAAHAEBUD2D_VECTOR_2F@@0AEBVLine2d@2@@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x180035C30 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x1800951F8 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800ADE8C (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800FDF30 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180120E48 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18013272C (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCloseRealZero(float a1, float a2)
{
  return a2 > (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
}
