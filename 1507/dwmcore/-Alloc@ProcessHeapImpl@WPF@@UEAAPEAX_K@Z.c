/*
 * XREFs of ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180031390
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000C9BC (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18000D5F4 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18000DDCC (-CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18001554C (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ?GetShapeDataCoreNoRef@CRectangleGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x180017430 (-GetShapeDataCoreNoRef@CRectangleGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x1800281B8 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180031500 (--$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawin.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180031E90 (--$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPre.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ?AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ @ 0x180035C50 (-AllocateOcclusionInfo@CVisual@@MEAAPEAVCOcclusionInfo@@XZ.c)
 *     ?VisitNode@CVisual@@UEAAJPEBVCVisualTree@@@Z @ 0x180035CB0 (-VisitNode@CVisual@@UEAAJPEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800372B0 (-GetWorldTransform@CVisual@@MEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CD40 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?PrepMegaRectData@CMegaRectCollection@@AEAAJXZ @ 0x18003E010 (-PrepMegaRectData@CMegaRectCollection@@AEAAJXZ.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180041D10 (-Create@CDrawListPrimitive@@SAJ_NPEBVCVertexXYAAColorDUV2@@IPEBGIAEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x180042840 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18004F5CC (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18004FDFC (-PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180050650 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x180058D0C (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180059D20 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18005B580 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x18005CB2C (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 *     ?HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z @ 0x18005D0E0 (-HrMalloc@WPF@@YAJ_J_K1PEAPEAX@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@IPEAPEAV1@@Z @ 0x18005E264 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005E378 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18006E850 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18007307C (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompositionSurfaceBitmap@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180073154 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVCCompos.c)
 *     ?Create@CHWDrawListCache@@SAJPEAPEAV1@@Z @ 0x180073378 (-Create@CHWDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I@Z @ 0x180073C38 (-SetNewPrimitives@CHWDrawListCache@@QEAAJ_KW4D2D1_ANTIALIAS_MODE@@_N2PEAUHWDrawListCacheEntry@@I.c)
 *     ?Create@CHWDrawListEntry@@SAJPEAVCDrawListPrimitive@@PEAPEAV1@@Z @ 0x180073E0C (-Create@CHWDrawListEntry@@SAJPEAVCDrawListPrimitive@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800788C0 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180080174 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180087A10 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?EnsureDataBufferSize@CRegion@FastRegion@@IEAAJH@Z @ 0x180088418 (-EnsureDataBufferSize@CRegion@FastRegion@@IEAAJH@Z.c)
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089FB0 (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z @ 0x1800E8288 (-AddTokenForRenderContent@FRAME_TIME_INFO@@QEAAJPEBUConfirmPresentHistoryToken@@@Z.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall WPF::ProcessHeapImpl::Alloc(WPF::ProcessHeapImpl *this, SIZE_T a2)
{
  if ( !a2 )
    a2 = 1LL;
  return HeapAlloc(g_hProcessHeap, 0, a2);
}
