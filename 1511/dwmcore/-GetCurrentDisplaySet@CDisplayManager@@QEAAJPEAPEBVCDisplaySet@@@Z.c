/*
 * XREFs of ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18006EE14
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18001BC5C (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x18005AFB4 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800724C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?GetPixelFormat@CDesktopRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800752C0 (-GetPixelFormat@CDesktopRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180075A2C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x18008322C (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008D918 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1800B62F8 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z @ 0x1800B8944 (-CacheSharedHandle@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NI@Z.c)
 *     ?CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z @ 0x1800F4924 (-CreateSurfaceIndexForDisplayIds@CFlipChain@@AEAAJU_LUID@@PEAUHMONITOR__@@_NPEAI@Z.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1800FEC50 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180100D98 (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?NotifyScreenRotation@CComposition@@AEAAJXZ @ 0x18010104C (-NotifyScreenRotation@CComposition@@AEAAJXZ.c)
 *     ?AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z @ 0x1801079F0 (-AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180107B80 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18010838C (-OpenSharedSurfaceRenderTarget@CMagnifierRenderTarget@@AEAAJPEAXU_LUID@@PEAUHMONITOR__@@PEAPEAVI.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18010A258 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x180111410 (-IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ.c)
 *     ?CacheSharedHandlesForRect@CFlipChain@@AEAAXU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@PEBUtagRECT@@@Z @ 0x1801256A0 (-CacheSharedHandlesForRect@CFlipChain@@AEAAXU-$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@.c)
 *     ?RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x18013A9D4 (-RealizeBitmapSource@@YAJQEAUHMONITOR__@@AEBU_GUID@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z.c)
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x18013BFE4 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x18013CF58 (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18006F600 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplayManager::GetCurrentDisplaySet(CDisplayManager *this, const struct CDisplaySet **a2)
{
  int CurrentDisplaySetInternal; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  struct CDisplaySet *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  CurrentDisplaySetInternal = CDisplayManager::GetCurrentDisplaySetInternal((CDisplayManager *)&g_DisplayManager, &v6);
  v4 = CurrentDisplaySetInternal;
  if ( CurrentDisplaySetInternal < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySetInternal, 0xC4u);
  result = v4;
  *a2 = v6;
  return result;
}
