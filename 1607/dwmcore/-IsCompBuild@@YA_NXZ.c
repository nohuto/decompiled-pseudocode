/*
 * XREFs of ?IsCompBuild@@YA_NXZ @ 0x1801693A8
 * Callers:
 *     ?CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@@Z @ 0x180016250 (-CopyTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@IAEBV-$TMilRect@IUMilRectU@@UNotNeeded@.c)
 *     ?QueryResourceResidency@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEAW4DXGI_RESIDENCY@@@Z @ 0x1800166A4 (-QueryResourceResidency@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEAW4DXGI_RESIDENCY@@@Z.c)
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180021598 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILP.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180056190 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007EEC4 (-TestLevel1Device@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18007EF9C (-CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18007F0F4 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007F2F4 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?EnsureHDRConversionResources@CD3DDeviceLevel1@@AEAAJXZ @ 0x18007F5B8 (-EnsureHDRConversionResources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x18007F914 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800806B8 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800807F4 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800808BC (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18009FB10 (-GetShaderResourceViewNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800ACEA4 (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 *     ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800B2C1C (-CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FE.c)
 *     ?Initialize@CVertexConstantBuffer@@QEAAJPEAUID3D11Device@@@Z @ 0x1800B5E24 (-Initialize@CVertexConstantBuffer@@QEAAJPEAUID3D11Device@@@Z.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18010F0A8 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVISlicerBitmap@@HH@Z @ 0x180173434 (-CopyPixelsToSlicerBitmap@CD3DDeviceLevel1@@QEAAJPEAVCD3DSurface@@AEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x18017361C (-CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18017378C (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 *     ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x180173888 (-CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?CreateSysMemSurface@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIW4DXGI_FORMAT@@PEAXPEAPEAVCD3DSurface@@@Z @ 0x180173A24 (-CreateSysMemSurface@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIW4DXGI_FORMAT@@PEAXPEAPEAVCD3DSu.c)
 *     ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x180173B08 (-EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x180173D50 (-EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z.c)
 *     ?GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z @ 0x1801740E4 (-GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@@Z.c)
 *     ?GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureSource@@@Z @ 0x1801741CC (-GetStockBlackSolidColorTextureSourceNoRef@CD3DDeviceLevel1@@QEAAJ_NPEAPEAVCHwSolidColorTextureS.c)
 *     ?GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801742F0 (-GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801743D0 (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 *     ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@PEAI2PEAW4DXGI_FORMAT@@@Z @ 0x180174E3C (-OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@PEAI2PEAW4DX.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 *     ?UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18017550C (-UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z.c)
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@0II2@Z @ 0x180175630 (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUta.c)
 *     ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x180178B54 (-CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180178F74 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18017A1B4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?RegGetString@@YA_NQEAUHKEY__@@QEBGPEAGK@Z @ 0x180169734 (-RegGetString@@YA_NQEAUHKEY__@@QEBGPEAGK@Z.c)
 */

char IsCompBuild(void)
{
  char v0; // di
  const unsigned __int16 *v1; // rdx
  unsigned int v2; // r9d
  bool String; // bl
  HKEY hKey; // [rsp+30h] [rbp-68h] BYREF
  wchar_t Str[32]; // [rsp+40h] [rbp-58h] BYREF

  memset_0(Str, 0, sizeof(Str));
  v0 = 0;
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows NT\\CurrentVersion", 0, 0x20019u, &hKey) )
  {
    String = RegGetString(hKey, v1, Str, v2);
    RegCloseKey(hKey);
    if ( String )
      return wcsstr(Str, L"rs1_onecore_dep_comp") != 0LL;
  }
  return v0;
}
