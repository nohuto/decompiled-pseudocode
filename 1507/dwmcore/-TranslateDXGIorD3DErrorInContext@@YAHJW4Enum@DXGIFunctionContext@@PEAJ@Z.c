/*
 * XREFs of ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180042CF0
 * Callers:
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18001545C (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180018EDC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800427D0 (-GetFrameStatisticsInternal@CDWMSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800430B0 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180043200 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800449A0 (-GetD2DBitmap@CHwSurfaceRenderTarget@@UEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z @ 0x180044DD0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x180045330 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x1800543E8 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x180054BCC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x180062138 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800629F0 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800727F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800729A0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18007DE44 (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z @ 0x18007E670 (-NotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@K_K@Z.c)
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ @ 0x18007ED00 (-RegisterForSignaling@CGdiSpriteBitmap@@UEAAJXZ.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x180081870 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180084638 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180087270 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18008EB24 (-SetupDepthBuffer@CSwapChainBase@@IEAAJXZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x18008F470 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?CheckForBadDx10Drivers@CD3DDeviceTable@@CAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x180091BE0 (-CheckForBadDx10Drivers@CD3DDeviceTable@@CAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800962A4 (-InitDXGI@CDXGIEnumeration@@AEAAJXZ.c)
 *     ?PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIPEA_NPEAURenderTargetPresentParameters@@@Z @ 0x1800DD61C (-PresentSwapChainInternal@CD3DDeviceLevel1@@AEAAJPEAVCSwapChainBase@@PEAUHWND__@@PEAUHRGN__@@KIP.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1800EC408 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180124FDC (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18012520C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x18013A318 (-DrawMesh2D@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18013BB40 (-CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLAN.c)
 * Callees:
 *     ?CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ @ 0x180132AB0 (-CheckAllDevicesForRemovedReason@CD3DDeviceManager@@QEAAJXZ.c)
 */

__int64 __fastcall TranslateDXGIorD3DErrorInContext(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  int v7; // ecx
  __int64 result; // rax
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned int v11; // esi
  int v12; // ecx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // esi
  int v17; // eax
  unsigned int v18; // esi
  int v19; // ecx

  v3 = 0;
  if ( !CComposition::s_cHwProtectedEntities
    || a1 != -2147024882
    && (a1 != -2005270523
     || (unsigned int)CD3DDeviceManager::CheckAllDevicesForRemovedReason((CD3DDeviceManager *)&g_D3DDeviceManager) != -2005268345) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        switch ( a2 )
        {
          case 2:
            if ( a1 == -2005270526 || a1 == -2147024809 )
              goto LABEL_50;
            goto LABEL_29;
          case 3:
            v16 = a1 + 2005270523;
            if ( v16 <= 0x1B )
            {
              v17 = 134217733;
              if ( _bittest(&v17, v16) )
                goto LABEL_13;
            }
            return v3;
          case 4:
            if ( a1 == -2005270524 )
              goto LABEL_50;
            if ( a1 == -2147467259 )
              goto LABEL_13;
            v13 = (unsigned int)(a1 + 2005270526);
            if ( (unsigned int)v13 <= 0x20 )
            {
              v14 = 0x140000029LL;
              if ( _bittest64(&v14, v13) )
                goto LABEL_13;
            }
            if ( a1 == 142213127 || a1 == -2005270491 )
              goto LABEL_13;
            return v3;
          case 5:
            if ( a1 != -805306282 && a1 != -805306355 && a1 != -805306367 && a1 != -2147024809 )
            {
              v10 = (unsigned int)(a1 + 2147024891);
              if ( (unsigned int)v10 > 0x2D || (v15 = 0x200004000001LL, !_bittest64(&v15, v10)) )
              {
                if ( a1 != -805306246 )
                  goto LABEL_29;
              }
            }
            goto LABEL_50;
          case 6:
            if ( a1 != -805306246 && a1 != -805306355 && a1 != -805306282 && a1 != -805306367 && a1 != -2003304445 )
              return v3;
LABEL_50:
            *a3 = -2003304442;
            return 1;
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
LABEL_29:
            v11 = a1 + 2005270523;
            if ( v11 <= 0x1D )
            {
              v12 = 671088645;
              if ( _bittest(&v12, v11) )
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
  CComposition::s_bHwProtectionTempDisabled = 1;
  result = 1LL;
  *a3 = -2003304442;
  return result;
}
