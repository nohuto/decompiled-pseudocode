/*
 * XREFs of ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x18001CD30
 * Callers:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18001404C (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x18005EA58 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18013F124 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ @ 0x18001C1EC (-UpdateTexturePixelFormatInfo@CHwBitmapColorSource@@IEAAXXZ.c)
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
