/*
 * XREFs of ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC
 * Callers:
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x18001503C (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800180C4 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x180019298 (-GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z.c)
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1800196D8 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x18001C000 (-IsOpaque@CHwBitmapColorSource@@UEBA_NXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180053A64 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 *     ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x180057470 (-IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18007F6E8 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180084C64 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1800EDC24 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z @ 0x1800EF178 (-GetPixelInfo@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAUPixelFormatInfo@@@Z.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x180109590 (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ?SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x18013B4BC (-SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTU.c)
 *     ?GetAlphaMode@CBitmapColorKey@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180141550 (-GetAlphaMode@CBitmapColorKey@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18014DE50 (-UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HasAlphaChannel(int a1)
{
  if ( a1 <= 61 )
    return a1 != 61 && a1 && (a1 == 2 || a1 > 9 && (a1 <= 11 || a1 == 24 || a1 == 28));
  return a1 == 87 || a1 == 65;
}
