/*
 * XREFs of ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180082C1C
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180082AC0 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800A5AF4 (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1800B3B48 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18017F1A0 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180080D9C (-UpdatePixelFormatInfo@CD3DTexture@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?IsOpaque@CHwBitmapColorSource@@UEBA_NXZ @ 0x180082070 (-IsOpaque@CHwBitmapColorSource@@UEBA_NXZ.c)
 */

void __fastcall CHwBitmapColorSource::SetBitmapAndContextCacheParameters(
        CHwBitmapColorSource *this,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  CD3DTexture *v5; // rdi
  int v6; // ebx
  int v7; // ecx
  _DWORD v8[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+34h] [rbp-14h]

  if ( a2 )
    *((_QWORD *)this + 14) = a2;
  if ( a3 )
    *((_DWORD *)this + 23) = *a3;
  v5 = (CD3DTexture *)*((_QWORD *)this + 20);
  *((_DWORD *)this + 24) = *(_BYTE *)(a4 + 5) != 0 ? 1 : 3;
  v6 = *(_DWORD *)(a4 + 8);
  *((_DWORD *)this + 25) = v6;
  *((_DWORD *)this + 36) = *(_DWORD *)(a4 + 12);
  *((_DWORD *)this + 37) = *(_DWORD *)(a4 + 16);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)(a4 + 28);
  *((_DWORD *)this + 80) = *(_DWORD *)(a4 + 48);
  *((_DWORD *)this + 81) = *(_DWORD *)(a4 + 60);
  v7 = *(_DWORD *)(a4 + 64);
  *((_DWORD *)this + 7) = *(_DWORD *)(a4 + 52);
  *((_DWORD *)this + 8) = v7;
  *((_DWORD *)this + 38) = *(_DWORD *)(a4 + 68);
  if ( v5 )
  {
    v8[0] = *((_DWORD *)this + 58);
    v9 = 0LL;
    v10 = 0;
    v8[2] = v6;
    v8[1] = CHwBitmapColorSource::IsOpaque(this) != 0 ? 3 : 1;
    CD3DTexture::UpdatePixelFormatInfo(v5, (const struct PixelFormatInfo *)v8);
  }
}
