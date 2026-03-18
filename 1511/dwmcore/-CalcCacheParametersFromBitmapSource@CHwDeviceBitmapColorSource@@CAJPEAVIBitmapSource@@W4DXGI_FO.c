/*
 * XREFs of ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800B0984
 * Callers:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18002AE04 (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18014E6F4 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18002A9FC (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(
        __int64 a1,
        int a2,
        _OWORD *a3,
        int a4,
        __int64 a5)
{
  __int64 v6; // rsi
  _DWORD *v9; // r15
  _DWORD *v10; // r12
  int PixelFormatColorSpace; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-38h]

  v6 = a5;
  v9 = (_DWORD *)(a5 + 16);
  v10 = (_DWORD *)(a5 + 12);
  PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(
                            a1,
                            a5 + 12,
                            a5 + 16);
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v18 = 49;
LABEL_14:
    v17 = PixelFormatColorSpace;
LABEL_19:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v18);
    return v12;
  }
  if ( *v10 > 0x1000000u || *v9 > 0x1000000u )
  {
    v12 = -2003292287;
    v18 = 54;
    v17 = -2003292287;
    goto LABEL_19;
  }
  *(_DWORD *)v6 = a2;
  PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &a5);
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v18 = 67;
    goto LABEL_14;
  }
  if ( (_DWORD)a5 == a2 )
  {
    *(_DWORD *)(v6 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    goto LABEL_7;
  }
  PixelFormatColorSpace = GetPixelFormatColorSpace(a2, (enum ColorSpace *)(v6 + 8));
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v18 = 74;
    goto LABEL_14;
  }
LABEL_7:
  *(_BYTE *)(v6 + 4) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) == 3;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  *(_DWORD *)(v6 + 24) = 0;
  *(_BYTE *)(v6 + 5) = v13 == 1;
  *(_OWORD *)(v6 + 28) = *a3;
  v14 = *(_DWORD *)(v6 + 36) - *(_DWORD *)(v6 + 28);
  *(_QWORD *)(v6 + 44) = v14;
  *(_DWORD *)(v6 + 52) = 3;
  v15 = *(_DWORD *)(v6 + 40) - *(_DWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 56) = v15;
  *(_DWORD *)(v6 + 64) = 3;
  *(_BYTE *)(v6 + 20) = v14 != *v10 || v15 != *v9;
  *(_DWORD *)(v6 + 68) = a4;
  return v12;
}
