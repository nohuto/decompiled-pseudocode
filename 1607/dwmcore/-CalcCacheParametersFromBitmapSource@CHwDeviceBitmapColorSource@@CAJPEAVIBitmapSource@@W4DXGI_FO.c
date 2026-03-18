/*
 * XREFs of ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800A6E74
 * Callers:
 *     ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800A5AF4 (-CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSourc.c)
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18017F1A0 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(
        __int64 a1,
        int a2,
        _OWORD *a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  _DWORD *v9; // r14
  _DWORD *v10; // r15
  int PixelFormatColorSpace; // eax
  unsigned int v12; // ebx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned int v17; // [rsp+20h] [rbp-38h]

  v5 = a5;
  v9 = (_DWORD *)(a5 + 16);
  v10 = (_DWORD *)(a5 + 12);
  PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 56LL))(
                            a1,
                            a5 + 12,
                            a5 + 16);
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v17 = 49;
    goto LABEL_18;
  }
  if ( *v10 > 0x1000000u || *v9 > 0x1000000u )
  {
    v12 = -2003292287;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292287, 0x36u);
    return v12;
  }
  *(_DWORD *)v5 = a2;
  PixelFormatColorSpace = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &a5);
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v17 = 67;
    goto LABEL_18;
  }
  if ( (_DWORD)a5 == a2 )
  {
    *(_DWORD *)(v5 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
    goto LABEL_7;
  }
  PixelFormatColorSpace = GetPixelFormatColorSpace(a2, (enum ColorSpace *)(v5 + 8));
  v12 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v17 = 74;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v17);
    return v12;
  }
LABEL_7:
  *(_BYTE *)(v5 + 4) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) == 3;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  *(_DWORD *)(v5 + 24) = 0;
  *(_BYTE *)(v5 + 5) = v13 == 1;
  *(_OWORD *)(v5 + 28) = *a3;
  v14 = *(_DWORD *)(v5 + 36) - *(_DWORD *)(v5 + 28);
  *(_QWORD *)(v5 + 44) = v14;
  *(_DWORD *)(v5 + 52) = 3;
  v15 = *(_DWORD *)(v5 + 40) - *(_DWORD *)(v5 + 32);
  *(_QWORD *)(v5 + 56) = v15;
  *(_DWORD *)(v5 + 64) = 3;
  *(_BYTE *)(v5 + 20) = v14 != *v10 || v15 != *v9;
  *(_DWORD *)(v5 + 68) = a4;
  return v12;
}
