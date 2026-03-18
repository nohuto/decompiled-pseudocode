/*
 * XREFs of ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x18001404C
 * Callers:
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x180013F60 (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800183E0 (-CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV-$TMilRect@IUMilRect.c)
 * Callees:
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x180013824 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x180014290 (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x18001439C (-CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x18001CD30 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CreateFromExistingTexture(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5,
        __int64 a6,
        CHwDeviceBitmapColorSource **a7)
{
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  CHwDeviceBitmapColorSource *v14; // rax
  CHwDeviceBitmapColorSource *v15; // rdi
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-B1h]
  struct D3D11_TEXTURE2D_DESC v19; // [rsp+38h] [rbp-99h] BYREF
  _BYTE v20[12]; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v21; // [rsp+7Ch] [rbp-55h]
  unsigned int v22; // [rsp+80h] [rbp-51h]

  if ( *(_QWORD *)(a6 + 248) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a2 + 32LL))(a2, a2, a5);
    v10 = CHwDeviceBitmapColorSource::CalcCacheParametersFromVidMemTexture(a6, v9, a4, v20);
    v11 = v10;
    if ( v10 >= 0 )
      goto LABEL_3;
    v18 = 237;
LABEL_11:
    v17 = v10;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v18);
    return v11;
  }
  v10 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(
          a2,
          (enum DXGI_FORMAT)*(_DWORD *)(a6 + 152),
          a5,
          a4,
          (__int64)v20);
  v11 = v10;
  if ( v10 < 0 )
  {
    v18 = 245;
    goto LABEL_11;
  }
LABEL_3:
  v12 = *(_OWORD *)(a6 + 136);
  v13 = *(_OWORD *)(a6 + 152);
  v19.MiscFlags = *(_DWORD *)(a6 + 176);
  *(_OWORD *)&v19.Width = v12;
  *(_QWORD *)&v19.BindFlags = *(_QWORD *)(a6 + 168);
  *(_OWORD *)&v19.Format = v13;
  v14 = (CHwDeviceBitmapColorSource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        344LL);
  if ( v14 )
    v15 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v14, a1, v21, v22, &v19, a3);
  else
    v15 = 0LL;
  if ( !v15 )
  {
    v11 = -2147024882;
    v18 = 261;
    v17 = -2147024882;
    goto LABEL_13;
  }
  (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v15)(v15);
  *((_QWORD *)v15 + 20) = a6;
  _InterlockedIncrement((volatile signed __int32 *)(a6 + 8));
  CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v15);
  *a7 = v15;
  return v11;
}
