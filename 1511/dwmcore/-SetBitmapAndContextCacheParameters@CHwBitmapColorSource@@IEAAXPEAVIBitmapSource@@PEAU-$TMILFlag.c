/*
 * XREFs of ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180031E28
 * Callers:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18002AE04 (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180031CC8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1800B0760 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18014E6F4 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x180031344 (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
 */

void __fastcall CHwBitmapColorSource::SetBitmapAndContextCacheParameters(
        CHwBitmapColorSource *this,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  bool v5; // zf
  int v6; // ecx

  if ( a2 )
    *((_QWORD *)this + 14) = a2;
  if ( a3 )
    *((_DWORD *)this + 23) = *a3;
  v5 = *((_QWORD *)this + 20) == 0LL;
  *((_DWORD *)this + 24) = *(_BYTE *)(a4 + 5) != 0 ? 1 : 3;
  *((_DWORD *)this + 25) = *(_DWORD *)(a4 + 8);
  *((_DWORD *)this + 36) = *(_DWORD *)(a4 + 12);
  *((_DWORD *)this + 37) = *(_DWORD *)(a4 + 16);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)(a4 + 28);
  *((_DWORD *)this + 80) = *(_DWORD *)(a4 + 48);
  *((_DWORD *)this + 81) = *(_DWORD *)(a4 + 60);
  v6 = *(_DWORD *)(a4 + 64);
  *((_DWORD *)this + 7) = *(_DWORD *)(a4 + 52);
  *((_DWORD *)this + 8) = v6;
  *((_DWORD *)this + 38) = *(_DWORD *)(a4 + 68);
  if ( !v5 )
    CHwBitmapColorSource::UpdateTexturePixelFormatInfo(this);
}
