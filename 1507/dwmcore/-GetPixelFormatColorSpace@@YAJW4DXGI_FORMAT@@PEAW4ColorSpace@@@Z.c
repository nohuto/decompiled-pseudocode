/*
 * XREFs of ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754
 * Callers:
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x180013824 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x18001439C (-CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18001503C (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18001B430 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180053A64 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@@Z @ 0x180055D64 (-ValidateRenderTargetBitmapParams@CD3DDeviceManager@@AEAAJPEAI0UIntermediateRTUsage@@U-$TMILFlag.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x180061E8C (--0CaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCChannelContext@@PEAVIRenderTargetResource.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18007F6E8 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180084C64 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x18008E50C (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1800EDC24 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x1800EF178 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x180109590 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ?EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z @ 0x180119360 (-EnsureRestoreBuffer@CBindInfo@CCompositionSurfaceInfo@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180127AA8 (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z.c)
 *     ?SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x18013B4BC (-SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTU.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18013DEC0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18013E380 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?GetColorSpace@CFormatConverter@@UEAA?AW4ColorSpace@@XZ @ 0x180146520 (-GetColorSpace@CFormatConverter@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ @ 0x18014D898 (-CalcPixelFormatInfo@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ?EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z @ 0x18014EA00 (-EnsureRestoreBufferState@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJ_N@Z.c)
 *     ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x180150BC0 (-FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z.c)
 *     ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIVDisplayId@@_N@Z @ 0x1801536C8 (-EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIVDisplayId@@_N@Z.c)
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
