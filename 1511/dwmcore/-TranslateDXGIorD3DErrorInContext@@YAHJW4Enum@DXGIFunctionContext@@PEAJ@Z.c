/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880
 * Callers:
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x180021AE0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180021CB0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x180022270 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180022A70 (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEA_NPEAURenderTargetPresentParameters@@@Z @ 0x180022AD4 (-PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIP.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18002A2A8 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002C37C (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x18002DEF0 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?CheckForBadDx10Drivers@CD3DDeviceTable@@CAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18006A6E8 (-CheckForBadDx10Drivers@CD3DDeviceTable@@CAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x18006B890 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18006EE64 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x18006F828 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180070F30 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x180072E4C (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800733B0 (-GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180073E60 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180073FD0 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180080530 (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800809B0 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x180080F10 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180081370 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180086460 (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x180086E50 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ @ 0x1800875B0 (-RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008C6E0 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800A55F8 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800A60F8 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1800B6E30 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x180107DF8 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180139028 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18014BC50 (-CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLAN.c)
 * Callees:
 *     ?TempDisableHardwareProtection@CComposition@@SAXXZ @ 0x1801017A0 (-TempDisableHardwareProtection@CComposition@@SAXXZ.c)
 *     ?CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ @ 0x1801449F0 (-CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ.c)
 */

__int64 __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  int v7; // ecx
  __int64 result; // rax
  int v9; // ecx
  unsigned int v10; // esi
  int v11; // ecx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // esi
  int v19; // ecx

  v3 = 0;
  if ( !CComposition::s_cHwProtectedEntities
    || a1 != -2147024882
    && (a1 != -2005270523
     || (unsigned int)CD3DDeviceManager::CheckAllDevicesForRemovedReason((CD3DDeviceManager *)&g_D3DDeviceManager) != -2005270480) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        switch ( a2 )
        {
          case 2:
            if ( a1 == -2005270526 || a1 == -2147024809 )
              goto LABEL_43;
            goto LABEL_19;
          case 3:
            v14 = a1 + 2005270523;
            if ( v14 <= 0x1B )
            {
              v15 = 134217733;
              if ( _bittest(&v15, v14) )
                goto LABEL_13;
            }
            return v3;
          case 4:
            if ( a1 == -2005270524 )
              goto LABEL_43;
            if ( a1 == -2147467259 )
              goto LABEL_13;
            v16 = (unsigned int)(a1 + 2005270526);
            if ( (unsigned int)v16 <= 0x20 )
            {
              v17 = 0x140000029LL;
              if ( _bittest64(&v17, v16) )
                goto LABEL_13;
            }
            if ( a1 == 142213127 || a1 == -2005270491 )
              goto LABEL_13;
            return v3;
          case 5:
            if ( a1 != -2147024809 && a1 != -805306355 && a1 != -805306367 && a1 != -805306282 )
            {
              v12 = (unsigned int)(a1 + 2147024891);
              if ( (unsigned int)v12 > 0x2D || (v13 = 0x200004000001LL, !_bittest64(&v13, v12)) )
              {
                if ( a1 != -805306246 )
                  goto LABEL_19;
              }
            }
            goto LABEL_43;
          case 6:
            if ( a1 == -805306246 || a1 == -805306355 || a1 == -805306282 || a1 == -805306367 || a1 == -2003304445 )
            {
LABEL_43:
              *a3 = -2003304442;
              return 1;
            }
            return v3;
          case 7:
            if ( a1 == -2147467263 )
            {
              *a3 = -2003304291;
              return 1;
            }
            if ( a1 == -2147024865 )
              goto LABEL_13;
            return v3;
          case 8:
          case 9:
LABEL_19:
            v10 = a1 + 2005270523;
            if ( v10 <= 0x1D )
            {
              v11 = 671088645;
              if ( _bittest(&v11, v10) )
                goto LABEL_13;
            }
            return v3;
          case 10:
            if ( a1 == -2005530509 || a1 == -2147024809 || a1 == -2005270523 || a1 == -2005270521 || a1 == -2003304442 )
              goto LABEL_60;
            if ( a1 != -2003304307 )
              return v3;
            *a3 = 0;
            return 1;
          case 11:
            if ( a1 == -2005530509 || a1 == -2147024809 || a1 == -2005532292 || a1 == -2005270526 )
              goto LABEL_60;
            if ( a1 != -2003304290 )
              return v3;
            *a3 = -2003304290;
            return 1;
          case 12:
            if ( a1 == -2005530509 || a1 == -2147024809 || a1 == -2005270523 || a1 == -2005270521 || a1 == -2005532292 )
              goto LABEL_60;
            return v3;
          case 13:
            if ( a1 != -2003292287 )
              return v3;
            *a3 = -2147024882;
            return 1;
          case 14:
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
              goto LABEL_60;
            }
            if ( a1 != -2003304290 )
              return v3;
            *a3 = 0;
            return 1;
          case 15:
            if ( a1 == -2005530509
              || a1 == -2147024809
              || (v18 = a1 + 2005270523, v18 <= 0x1D) && (v19 = 671088645, _bittest(&v19, v18)) )
            {
              *a3 = -2003304442;
            }
            return v3;
          case 16:
            if ( a1 == -2147024890 || a1 == -2147024809 || a1 == -2147023728 || a1 == -2147024895 )
              goto LABEL_60;
            if ( a1 != -1071243253 )
              return v3;
            *a3 = 0;
            return 1;
          case 17:
            if ( a1 == -1071243253 || a1 == -2147023728 )
              goto LABEL_60;
            if ( a1 != -2147024890 )
              return v3;
            *a3 = 0;
            return 1;
          case 18:
            if ( a1 == -1071243253 || a1 == -2147023728 || a1 == -2147024890 )
            {
LABEL_60:
              *a3 = 0;
            }
            else
            {
              if ( a1 != -2147024809 )
                return v3;
              *a3 = 0;
            }
            break;
          case 19:
            if ( a1 == -2005270523 )
              goto LABEL_13;
            return v3;
          case 20:
            if ( a1 == -2003292412 )
              goto LABEL_13;
            return v3;
          default:
            return v3;
        }
        return 1;
      }
      if ( a1 == 142213167 )
      {
        *a3 = 142213130;
        return 1;
      }
      if ( (unsigned int)(a1 + 2005270523) > 0x1D || (v9 = 671088647, !_bittest(&v9, a1 + 2005270523)) )
      {
        if ( a1 != -2005532292 && a1 != 142213127 )
          return v3;
      }
    }
    else if ( (unsigned int)(a1 + 2005270523) > 0x1D || (v7 = 671088645, !_bittest(&v7, a1 + 2005270523)) )
    {
      if ( a1 != -2003238900 )
        return v3;
    }
LABEL_13:
    *a3 = -2003304307;
    return 1;
  }
  CComposition::TempDisableHardwareProtection();
  result = 1LL;
  *a3 = -2003304442;
  return result;
}
