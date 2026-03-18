/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0
 * Callers:
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180016CAC (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18002A18C (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18002A770 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ @ 0x18002AE70 (-RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002E82C (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800367F8 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180038134 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18007A1C8 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007A650 (-GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18007AE90 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18007B130 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18007B2D0 (-GetD2DBitmap@CHwFullScreenRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18007DC00 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18007DE20 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18007E428 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007E9EC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18008F2C0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18008F500 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180093490 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800AB484 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800B1558 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800B1754 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800B2F38 (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800B6DA4 (-CreateD3DObjects@CD3DModuleLoader@@CAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800BAC7C (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18011E9A0 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1801275E4 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180162844 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164480 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18017C8D0 (-CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLAN.c)
 *     ?GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x180190D80 (-GetDXGIResource@CDxHandleYUVBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 * Callees:
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180034308 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 *     ?CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ @ 0x1801727F8 (-CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ.c)
 */

__int64 __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, int *a3)
{
  unsigned int v3; // edi
  int v7; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int8 v11; // cf
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // ecx
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  char IsHardwareProtectionDisabled; // al
  __int64 v22; // rcx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-C8h] BYREF

  v3 = 0;
  if ( CD3DDeviceManager::s_cHwProtectedEntities
    && (a1 == -2005532292
     || a1 == -2147024882
     || a1 == -2005270523
     && (unsigned int)CD3DDeviceManager::CheckAllDevicesForRemovedReason((CD3DDeviceManager *)&g_D3DDeviceManager) == -2005270480) )
  {
    CD3DDeviceManager::IsHardwareProtectionDisabled();
    CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
    IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
    v3 = 1;
    if ( (_BYTE)v22 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_q(v22, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, 1LL);
    v14 = -2003304442;
    if ( a2 == 16 )
      v14 = -2005532292;
    goto LABEL_48;
  }
  if ( !a2 )
  {
    if ( (unsigned int)(a1 + 2005270523) > 0x1B || (v7 = 134217733, !_bittest(&v7, a1 + 2005270523)) )
    {
      if ( a1 != -2005270494 && a1 != -2003238900 )
        return v3;
LABEL_47:
      v14 = -2003304442;
      v3 = 1;
LABEL_48:
      *a3 = v14;
      return v3;
    }
    goto LABEL_74;
  }
  if ( a2 != 1 )
  {
    switch ( a2 )
    {
      case 2:
        v15 = a1 + 2005270523;
        if ( v15 <= 0x1B )
        {
          v16 = 134217733;
          v11 = _bittest(&v16, v15);
          goto LABEL_24;
        }
        return v3;
      case 3:
        v17 = (unsigned int)(a1 + 2005270524);
        if ( (unsigned int)v17 <= 0x21 )
        {
          v20 = 0x240000001LL;
          if ( _bittest64(&v20, v17) )
            goto LABEL_47;
        }
        if ( a1 == 142213127 )
          goto LABEL_47;
        if ( a1 == -2147467259 )
          goto LABEL_74;
        v18 = a1 + 2005270526;
        if ( v18 <= 0x1E )
        {
          v19 = 1073741865;
          v11 = _bittest(&v19, v18);
          goto LABEL_24;
        }
        return v3;
      case 4:
        switch ( a1 )
        {
          case -805306282:
            goto LABEL_47;
          case -805306355:
            goto LABEL_47;
          case -805306367:
            goto LABEL_47;
          case -2147024809:
            goto LABEL_47;
        }
        v12 = (unsigned int)(a1 + 2147024891);
        if ( (unsigned int)v12 <= 0x2D )
        {
          v13 = 0x200004000001LL;
          if ( _bittest64(&v13, v12) )
            goto LABEL_47;
        }
        if ( a1 == -805306246 )
          goto LABEL_47;
        goto LABEL_22;
      case 5:
        if ( a1 == -805306246 || a1 == -805306355 || a1 == -805306282 || a1 == -805306367 || a1 == -2003304445 )
          goto LABEL_47;
        return v3;
      case 6:
        if ( a1 == -2147467263 )
        {
          *a3 = -2003304291;
          return 1;
        }
        if ( a1 == -2147024865 )
        {
          *a3 = -2003304307;
          return 1;
        }
        return v3;
      case 7:
      case 8:
LABEL_22:
        v9 = a1 + 2005270523;
        if ( v9 <= 0x1D )
        {
          v10 = 671088645;
          v11 = _bittest(&v10, v9);
LABEL_24:
          if ( v11 )
            goto LABEL_74;
        }
        return v3;
      case 9:
        if ( a1 == -2005530509
          || a1 == -2147024809
          || a1 == -2005270523
          || a1 == -2005270521
          || a1 == -2003304442
          || a1 == -2003304307 )
        {
          goto LABEL_87;
        }
        return v3;
      case 10:
        if ( a1 == -2003292404
          || a1 == -2003304307
          || a1 == -2003304442
          || a1 == -2005530509
          || a1 == -2147024809
          || a1 == -2005270523
          || a1 == -2005270521
          || a1 == -2005532292
          || a1 == -2005530512
          || a1 == -1071243253 )
        {
          goto LABEL_87;
        }
        if ( a1 != -2003304290 )
          return v3;
        *a3 = 0;
        return 1;
      case 11:
        if ( a1 == -2147024890 || a1 == -2147024809 || a1 == -2147023728 || a1 == -2147024895 )
          goto LABEL_87;
        if ( a1 != -1071243253 )
          return v3;
        *a3 = 0;
        return 1;
      case 12:
        if ( a1 == -1071243253 || a1 == -2147023728 )
          goto LABEL_87;
        if ( a1 != -2147024890 )
          return v3;
        *a3 = 0;
        return 1;
      case 13:
        if ( a1 == -1071243253 || a1 == -2147023728 || a1 == -2147024890 )
        {
LABEL_87:
          *a3 = 0;
        }
        else
        {
          if ( a1 != -2147024809 )
            return v3;
          *a3 = 0;
        }
        break;
      case 14:
      case 15:
        if ( a1 == -2003292412 )
          goto LABEL_74;
        return v3;
      case 16:
        if ( a1 != -2147024882 )
          return v3;
        *a3 = -2005532292;
        return 1;
      default:
        return v3;
    }
    return 1;
  }
  switch ( a1 )
  {
    case -2005270527:
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2005270527;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      return v3;
    case 142213167:
      *a3 = 142213130;
      return 1;
    case -2005270494:
    case 142213127:
    case -2005270491:
      goto LABEL_47;
  }
  if ( (unsigned int)(a1 + 2005270523) <= 2 || a1 == -2005532292 || a1 == -2005270496 )
  {
LABEL_74:
    *a3 = -2003304307;
    return 1;
  }
  return v3;
}
