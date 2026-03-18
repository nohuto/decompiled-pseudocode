/*
 * XREFs of ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180013CB4 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013FD4 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800140F8 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x1800142A8 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x180017220 (-GetBits@CHwDisplayRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?Release@CHwCacheablePoolBrush@@UEAAKXZ @ 0x180018DC0 (-Release@CHwCacheablePoolBrush@@UEAAKXZ.c)
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x18002D854 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ??1CHwSurfaceRenderTarget@@MEAA@XZ @ 0x18002E740 (--1CHwSurfaceRenderTarget@@MEAA@XZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@444PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034F70 (-CreateRenderTargetBitmap@CD3DDeviceManager@@UEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U-$T.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x1800352B0 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180035440 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@M.c)
 *     ?UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z @ 0x18003667C (-UpdateFeatureLevels@CDXGIEnumeration@@QEBAJAEBU_GUID@@@Z.c)
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18005752C (--1CHWCallbackRenderer@@EEAA@XZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180079680 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180079D20 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ??1CSwapChainBase@@MEAA@XZ @ 0x180079F9C (--1CSwapChainBase@@MEAA@XZ.c)
 *     ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x18007A030 (-ReleaseD3DResources@CSwapChainBase@@EEAAXXZ.c)
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007B468 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?ReleaseD3DResources@CD3DTexture@@EEAAXXZ @ 0x1800812B0 (-ReleaseD3DResources@CD3DTexture@@EEAAXXZ.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x180081578 (--1CD3DTexture@@MEAA@XZ.c)
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180081F30 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapLock@@_N@Z @ 0x1800820B0 (-PushTheSourceBitsToVideoMemory@CHwBitmapColorSource@@AEAAJIPEAV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800830B8 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x18008E8B4 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ @ 0x18008E94C (-ReleaseResourcesForDisplayChange@CHwDisplayRenderTarget@@UEAAXXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800942EC (-AddExistingTextureAsColorSource@CBitmapOfDeviceBitmaps@@QEAAJPEAVCD3DDeviceLevel1@@IVDisplayId@.c)
 *     ?GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@5@PEAV1@AEAPEAV5@5@Z @ 0x1800A44E4 (-GetBitmapColorSource@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEAUCacheParam.c)
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x1800A5DE0 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1800A6494 (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A66D8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x1800B27C8 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800B34D8 (-Construct@AdapterInfo@CSurfaceManager@@QEAAJAEBU_GUID@@PEAVCDXGIAdapterLimited@@PEAVCD3DDeviceM.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B6074 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180107FF0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAUID3D11Texture2D@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180112BF0 (-CreateRenderTargetBitmapFromTexture@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlagsE.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x180112D90 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x18011A150 (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 *     ?AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z @ 0x18011E5C0 (-AdvanceFrame@COffScreenRenderTarget@@UEAAX_K_N@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18013B9DC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevic.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18013C60C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevice.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E180 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompil.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18015D20C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180162844 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164480 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180164A18 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 *     ??1CAnalogCompositorTarget@@EEAA@XZ @ 0x180166E60 (--1CAnalogCompositorTarget@@EEAA@XZ.c)
 *     ?Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z @ 0x180167280 (-Render@CAnalogCompositorTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x1801679C4 (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z.c)
 *     ?UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z @ 0x180167E50 (-UpdateFlippingChain@CAnalogDisplayRenderTarget@@AEAAJII@Z.c)
 *     ?OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAXPEAPEAVIRenderTargetBitmap@@@Z @ 0x180172BB0 (-OpenSharedHandleAsRenderTargetBitmap@CD3DDeviceManager@@UEAAJUIntermediateRTUsage@@U-$TMILFlags.c)
 *     ?PinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180172D4C (-PinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 *     ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180172F3C (-UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x180173434 (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z @ 0x1801740E4 (-GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z.c)
 *     ?CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConstantBuffer@@@Z @ 0x180177FCC (-CreateConstantBuffer@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@PEA_KPEAPEAVCD3DConst.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18017898C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180178F74 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ??_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18017A3C0 (--_GCHwStereoFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18017B9A8 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18017BAC0 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z.c)
 *     ??_GCHwSolidColorTextureSource@@EEAAPEAXI@Z @ 0x18017C480 (--_GCHwSolidColorTextureSource@@EEAAPEAXI@Z.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18017D9EC (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 *     ?ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z @ 0x18017E76C (-ReleaseReferencesToBits@CHwBitmapColorSource@@QEAAX_N@Z.c)
 *     ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18017E81C (-UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV-$TMilRect@IU.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18017EC00 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 *     ?GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18017F820 (-GetFrontBufferSurface@CHwStereoFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurfa.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x18017FA50 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801801C0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 *     ?Destroy@CHwVidMemTextureManager@@AEAAXXZ @ 0x180181E6C (-Destroy@CHwVidMemTextureManager@@AEAAXXZ.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x180181EA0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 *     ?ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z @ 0x180181FD4 (-ReCreateAndLockSysMemSurface@CHwVidMemTextureManager@@QEAAJPEAULOCKED_RECT@@@Z.c)
 *     ?SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z @ 0x18018F8F0 (-SaveRestoreWorker@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJAEBVCRegion@@_N@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x180190A44 (-EnsureVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z @ 0x1801911C4 (-Initialize@CDxHandleYUVBitmapRealization@@IEAAJPEAV1@@Z.c)
 *     ?ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x180191394 (-ReleaseVidMemOnlyTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 * Callees:
 *     ?UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x18009F190 (-UnusedNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILPoolResource::Release(CMILPoolResource *this)
{
  unsigned __int32 v2; // ebx
  CD3DResourceManager *v4; // rcx
  void (__fastcall *v5)(CD3DResourceManager *__hidden, struct CMILPoolResource *); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    v4 = (CD3DResourceManager *)*((_QWORD *)this + 2);
    if ( v4 )
    {
      v5 = **(void (__fastcall ***)(CD3DResourceManager *__hidden, struct CMILPoolResource *))v4;
      if ( v5 == CD3DResourceManager::UnusedNotification )
        CD3DResourceManager::UnusedNotification(v4, this);
      else
        v5(v4, this);
    }
    else
    {
      (*(void (__fastcall **)(CMILPoolResource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
    }
  }
  return v2;
}
