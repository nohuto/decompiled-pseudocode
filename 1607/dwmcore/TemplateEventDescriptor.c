/*
 * XREFs of TemplateEventDescriptor @ 0x1800BCF6C
 * Callers:
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180005880 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180009B4C (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180009C48 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180012FE0 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013A80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800374D0 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z @ 0x1800375E0 (-ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?CheckDeviceState@CComposition@@QEAAJXZ @ 0x18003B324 (-CheckDeviceState@CComposition@@QEAAJXZ.c)
 *     ?UpdateAnimateResources@CComposition@@IEAAIXZ @ 0x18003B5CC (-UpdateAnimateResources@CComposition@@IEAAIXZ.c)
 *     ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x18003B674 (-UpdateExpressions@CComposition@@QEAAXXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180043C7C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800441D0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x180044A60 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800459A0 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180046B90 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006CC40 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18006D12C (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180074BBC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18007A6E0 (-PresentInternal@CDWMSwapChain@@MEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007B468 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007E130 (-Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800808BC (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180093490 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A77AC (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 *     ?AdvanceFrame@CDWMOffScreenSwapChain@@UEAAJ_K@Z @ 0x1800B9010 (-AdvanceFrame@CDWMOffScreenSwapChain@@UEAAJ_K@Z.c)
 *     ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800B9058 (-PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x180108D64 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180111AC0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z @ 0x180113F8C (-FilterCompositionThreadErrors@CPartitionVerticalBlankScheduler@@AEAAJJ@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012F648 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z @ 0x18012FD40 (-RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18017A7A4 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 0, 0LL);
}
