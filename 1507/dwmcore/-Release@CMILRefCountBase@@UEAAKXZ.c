/*
 * XREFs of ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430
 * Callers:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x180011E04 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x18001211C (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x180012AE0 (--1COverlayContext@@MEAA@XZ.c)
 *     ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x1800141F0 (--_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800180C4 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x180018600 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180018670 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ??_GCHwBitmapCache@@EEAAPEAXI@Z @ 0x180018850 (--_GCHwBitmapCache@@EEAAPEAXI@Z.c)
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x180018BE4 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x18001BE60 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x18001CA7C (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x18001D198 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001D530 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800299D8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAVCResource@@@Z @ 0x18002D8C0 (-FillOrStrokeShape@CDrawingContext@@AEAAJHPEAVCShape@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x18003E3A0 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?Release@CVisualTree@@UEAAKXZ @ 0x180045710 (-Release@CVisualTree@@UEAAKXZ.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180047FB0 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x180048B64 (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?DetachInUseDisplays@CDesktopRenderTarget@@AEAAXXZ @ 0x1800497D0 (-DetachInUseDisplays@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18004D4A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x180051F84 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180052E90 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180053470 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180053790 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180054F84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180055400 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800561A0 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800585D0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?Invalidate@CDrawListCacheSet@@QEAAXXZ @ 0x180059C80 (-Invalidate@CDrawListCacheSet@@QEAAXXZ.c)
 *     ?Release@CWARPCallbackRenderer@@UEAAKXZ @ 0x18005AA70 (-Release@CWARPCallbackRenderer@@UEAAKXZ.c)
 *     ?AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z @ 0x18006091C (-AddMonitorTree@CMonitorTreeAssociation@@QEAAJPEAUHMONITOR__@@PEAVCVisualTree@@@Z.c)
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180060A08 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x180060FA0 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAV-$CD3DVertexBuffer@VCVertexXYWColorDUV.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x180061990 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180061B94 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180066480 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x180067390 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180068664 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJI@Z @ 0x180068794 (-OpenChannel@CComposition@@IEAAJI@Z.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x18006885C (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180068A4C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x180068AD0 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C468 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18006E6A8 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180071660 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x180071AB0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ??_ECHWDrawListEntry@@UEAAPEAXI@Z @ 0x180073F10 (--_ECHWDrawListEntry@@UEAAPEAXI@Z.c)
 *     ?ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEAUHWDrawListCacheEntry@@MMW4Enum@CommonRenderingPixelShaders@@PEAVCCompositionSurfaceBitmap@@3PEAV?$DynArrayIA@UHWDrawListCacheEntry@@$03$0A@@@PEA_N@Z @ 0x18007685C (-ExtractBuiltPrimitive@CPrimitiveGroupDrawListGenerator@@AEAAJPEAVCDrawListPrimitiveBuilder@@PEA.c)
 *     ?ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z @ 0x180077D1C (-ExtractBuiltPrimitiveEntry@CDrawListPrimitiveBuilder@@QEAAJMMPEA_NPEAPEAVCHWDrawListEntry@@@Z.c)
 *     ?Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ @ 0x18007FEA0 (-Destruct@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAXXZ.c)
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x18008A83C (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18008AB50 (--1CHwSurfaceRenderTargetSharedData@@IEAA@XZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x18008B754 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18008DC28 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 *     ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x180091DD8 (-Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x1800927AC (-SetRoot@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180092890 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x180093268 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180093B18 (-Create@CEffectCompilationService@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@PEAUIMilNotificationTransport@@PEAVCDebugFrameCounter@@PEAVCoRenderHost@@PEAPEAV1@@Z @ 0x180094E24 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVCPartitionVerticalBlankScheduler@@.c)
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800956CC (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x180095A38 (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ @ 0x1800DDA8C (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJXZ.c)
 *     ?AppendMegaRectEntry@CMegaRectCollection@@QEAAJPEAVCHWDrawListEntry@@@Z @ 0x1800DEE40 (-AppendMegaRectEntry@CMegaRectCollection@@QEAAJPEAVCHWDrawListEntry@@@Z.c)
 *     ?MilConnection_DestroyChannel@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x1800E0D20 (-MilConnection_DestroyChannel@@YAJPEAUMIL_CHANNEL__@@@Z.c)
 *     ?DestroyChannel@CConnection@@QEAAJI@Z @ 0x1800E0FA8 (-DestroyChannel@CConnection@@QEAAJI@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1800E243C (--1CComposition@@MEAA@XZ.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1800E2778 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x1800E2B0C (-MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800E323C (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1800E3A54 (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z @ 0x1800E3B2C (-ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z.c)
 *     ?ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1800E3BF8 (-ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1800EC190 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x1800EF214 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x1800FA2D4 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1800FA7C4 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z @ 0x1800FECE8 (-EnsureWARPCacheNoRef@CDrawListCacheSet@@QEAAJPEBVIRenderTarget@@PEAPEAVCWARPDrawListCache@@@Z.c)
 *     ?Invalidate@CWARPDrawListCache@@QEAAXXZ @ 0x1800FEE4C (-Invalidate@CWARPDrawListCache@@QEAAXXZ.c)
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z @ 0x1800FF108 (-Create@CWARPDrawListEntry@@SAJAEBUWARPAlphaBltParameters@@PEAPEAV1@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18010BA6C (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180111840 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRES.c)
 *     ?SetDisplay@CDisplaySet@@IEAAXIPEAVCDisplay@@@Z @ 0x18012346C (-SetDisplay@CDisplaySet@@IEAAXIPEAVCDisplay@@@Z.c)
 *     ??1CAnalogRenderTarget@@EEAA@XZ @ 0x180126088 (--1CAnalogRenderTarget@@EEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CAnalogRenderTarget@@UEAAXXZ @ 0x180126ED0 (-ReleaseResourcesForDisplayChange@CAnalogRenderTarget@@UEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ @ 0x18012A2F4 (-InternalRelease@-$ComPtr@VCVisualTree@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x18012AB28 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180132EE0 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180134F78 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 *     ?KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ @ 0x18013B8B0 (-KeepOnlyFullValidRealizations@CacheEntryList@CHwBitmapCache@@QEAA_NXZ.c)
 *     ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x18013D23C (-AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z.c)
 *     ?ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z @ 0x18013D7EC (-ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18013F124 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 *     ?AddTexture@CHwSolidColorTextureSourcePool@@AEAAJXZ @ 0x180140B70 (-AddTexture@CHwSolidColorTextureSourcePool@@AEAAJXZ.c)
 *     ??_GCWARPCallbackRenderer@@EEAAPEAXI@Z @ 0x180158810 (--_GCWARPCallbackRenderer@@EEAAPEAXI@Z.c)
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x180158A40 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMesh2DEffect@@UEAAKXZ @ 0x18015B740 (-Release@CMesh2DEffect@@UEAAKXZ.c)
 * Callees:
 *     ??_GCDrawListPrimitive@@MEAAPEAXI@Z @ 0x18001BC90 (--_GCDrawListPrimitive@@MEAAPEAXI@Z.c)
 *     ??_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z @ 0x180058E80 (--_GCSharedSectionAnimationPrimitiveBuffer@@UEAAPEAXI@Z.c)
 *     ??_ECHWDrawListCache@@MEAAPEAXI@Z @ 0x180073AF0 (--_ECHWDrawListCache@@MEAAPEAXI@Z.c)
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x1800761D0 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMILRefCountBase::Release(CMILRefCountBase *this)
{
  unsigned __int32 v1; // esi
  CDrawListPrimitive *(__fastcall *v3)(CDrawListPrimitive *, char); // rdi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
  {
    v3 = *(CDrawListPrimitive *(__fastcall **)(CDrawListPrimitive *, char))(*(_QWORD *)this + 16LL);
    if ( v3 == CDrawListPrimitive::`scalar deleting destructor' )
    {
      CDrawListPrimitive::`scalar deleting destructor'(this, 1);
    }
    else if ( (char *)v3 == (char *)CSharedSectionAnimationPrimitiveBuffer::`scalar deleting destructor' )
    {
      CSharedSectionAnimationPrimitiveBuffer::`scalar deleting destructor'(this, 1u);
    }
    else if ( (char *)v3 == (char *)CHWDrawListCache::`vector deleting destructor' )
    {
      CHWDrawListCache::`vector deleting destructor'(this, 1u);
    }
    else if ( (char *)v3 == (char *)CPrimitiveGroupDrawListGenerator::`scalar deleting destructor' )
    {
      CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(this, 1u);
    }
    else
    {
      v3(this, 1);
    }
  }
  return v1;
}
