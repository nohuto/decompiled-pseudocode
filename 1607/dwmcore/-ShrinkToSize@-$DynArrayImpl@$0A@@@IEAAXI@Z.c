/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900
 * Callers:
 *     ?EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x180002A00 (-EndFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ?BeginFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x180002C20 (-BeginFigure@GeometrySink@CDrawListPrimitiveBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x180003900 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18000866C (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IEAAXXZ @ 0x1800151A8 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@IE.c)
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x18001BC40 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 *     ?CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z @ 0x1800268E4 (-CleanUpPendingUpdates@CWindowNode@@AEAAX_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800291D4 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180029EE0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ @ 0x1800371B8 (-ReleaseAdapterInfo@CSurfaceManager@@AEAAXXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180039310 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180039BB8 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x18003A788 (--1CAnimation@@UEAA@XZ.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18003C134 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004402C (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Clear@CArrayBasedCoverageSet@@UEAAXXZ @ 0x18004B740 (-Clear@CArrayBasedCoverageSet@@UEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C614 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C688 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180050A40 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18005BCA8 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18005BE84 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18005C2F0 (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18005F8DC (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E9A0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x180073ED4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800744E0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075EC0 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?ResetOverlayPlanesList@COverlayContext@@AEAAXXZ @ 0x180078A74 (-ResetOverlayPlanesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180078AB4 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180078AF4 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?Initialize@COverlayContext@@IEAAJXZ @ 0x1800790EC (-Initialize@COverlayContext@@IEAAJXZ.c)
 *     ?Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A2E8 (-Present@CSwapChainBase@@QEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18007E1B8 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18007E968 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180080190 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800872CC (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x18008B7C0 (--1CExpression@@UEAA@XZ.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180095374 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180095DF0 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180097E80 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?Reset@CRectanglesShape@@IEAAXXZ @ 0x180097F5C (-Reset@CRectanglesShape@@IEAAXXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18009845C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180099BD0 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x18009BCE4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18009F84C (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x1800A58E0 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8B18 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ @ 0x1800B0DC0 (-ReleaseAllCommandListRepresentations@CCommandListBitmapRepresentation@@IEAAXXZ.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800B3708 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x1800B3814 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3854 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800B5068 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B7ED0 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800B8C20 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B9058 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 *     ?TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ @ 0x1800B9B18 (-TryToOrderMetaData@CSwapChainBase@@IEAA_NXZ.c)
 *     ?PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ @ 0x1800BA440 (-PushWindowMetaDataToRenderTarget@CDrawingContext@@AEAAJXZ.c)
 *     ?ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107E94 (-ResetFrameInformation@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180107EE4 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801087B4 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ @ 0x18010DFE8 (-ReleaseD2DCommandList@CAtlasedRects@@AEAAXXZ.c)
 *     ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x18010F754 (-UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ.c)
 *     ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x180111888 (--1FRAME_TIME_INFO@@QEAA@XZ.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801130A8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x180113C40 (--1CFrameInfo@@QEAA@XZ.c)
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x180113D18 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180116584 (--1CComposition@@MEAA@XZ.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x180116D28 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x18011B598 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18011C270 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180129E40 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18012C014 (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?Clear@CoordMap@@QEAAXXZ @ 0x180135B60 (-Clear@CoordMap@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180138A38 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18013C60C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevice.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x180141154 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ??1CScalar@@MEAA@XZ @ 0x18014168C (--1CScalar@@MEAA@XZ.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x180141D98 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?ReleaseDeviceResources@CFlipChain@@QEAAXXZ @ 0x180142264 (-ReleaseDeviceResources@CFlipChain@@QEAAXXZ.c)
 *     ?Reset@CFlipChain@@IEAAXXZ @ 0x1801422A8 (-Reset@CFlipChain@@IEAAXXZ.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x1801422F4 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18014E8F4 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompile.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x1801502A8 (-RemoveAllTargets@CCompositionLight@@AEAAXXZ.c)
 *     ??1CPolygon@@UEAA@XZ @ 0x1801535BC (--1CPolygon@@UEAA@XZ.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMatrix@@MW4Enum@MilBitmapBorderMode@@W46MilCompositingMode@@W46MilBitmapInterpolationMode@@_N7PEAUD2D_VECTOR_4F@@PEAPEAV1@@Z @ 0x180154604 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAVCVisual@@PEAVCContent@@PEAVCMILMa.c)
 *     ?CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x18015D910 (-CalculateValueWorker@CScrollAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ResetPipeline@CScanPipeline@@MEAAXXZ @ 0x180185140 (-ResetPipeline@CScanPipeline@@MEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DynArrayImpl<0>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  const void *v4; // rdx
  void *v5; // rcx
  unsigned __int64 v6; // r8
  void *v7; // rdx
  void (__fastcall *v8)(WPF::ProcessHeapImpl *, void *); // rax
  const void *v9; // [rsp+30h] [rbp+8h] BYREF

  result = a2;
  v4 = *(const void **)a1;
  v5 = *(void **)(a1 + 8);
  if ( v4 != v5 )
  {
    v6 = result * *(unsigned int *)(a1 + 24);
    result = 0xFFFFFFFFLL;
    if ( v6 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v5, v4, (unsigned int)v6);
        v7 = *(void **)a1;
        v8 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v8 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v7);
        else
          v8(WPF::g_pProcessHeap, v7);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        result = *(unsigned int *)(a1 + 16);
        goto LABEL_8;
      }
      v9 = v4;
      result = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, const void **, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 24LL))(
                 WPF::g_pProcessHeap,
                 &v9,
                 (unsigned int)v6);
      if ( (int)result >= 0 )
      {
        *(_QWORD *)a1 = v9;
        result = *(unsigned int *)(a1 + 24);
LABEL_8:
        *(_DWORD *)(a1 + 20) = result;
      }
    }
  }
  return result;
}
