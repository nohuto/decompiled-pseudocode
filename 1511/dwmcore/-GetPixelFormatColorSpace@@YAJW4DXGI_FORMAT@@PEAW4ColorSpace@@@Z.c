/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18000D6F0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18000D8C0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180029E6C (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x18002AD4C (-CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x18002DC04 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180030560 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18005BB48 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x1800718E4 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180087F88 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800A4E98 (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800B0984 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B23F8 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x1800F4704 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180108A14 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x180109174 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180130280 (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x18013DACC (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z.c)
 *     ?SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x18014B65C (-SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTU.c)
 *     ?GetColorSpace@CFormatConverter@@UEAA?AW4ColorSpace@@XZ @ 0x180154700 (-GetColorSpace@CFormatConverter@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x18015C258 (-CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z @ 0x18015D4C0 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x18015F0EC (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z @ 0x180160594 (-EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPixelFormatColorSpace(int a1, enum ColorSpace *a2)
{
  unsigned int v2; // r8d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v2 = 0;
  if ( a1 <= 49 )
  {
    if ( a1 != 49 )
    {
      v4 = a1 - 2;
      if ( !v4 || (v5 = v4 - 8) == 0 )
      {
        *(_DWORD *)a2 = 2;
        return v2;
      }
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 13;
        if ( v7 )
        {
          if ( v7 != 4 )
            return (unsigned int)-2003292344;
        }
      }
    }
  }
  else if ( a1 != 65 && a1 != 61 && (a1 <= 86 || a1 > 88 && a1 != 103 && (unsigned int)(a1 - 106) > 1) )
  {
    return (unsigned int)-2003292344;
  }
  *(_DWORD *)a2 = 1;
  return v2;
}
