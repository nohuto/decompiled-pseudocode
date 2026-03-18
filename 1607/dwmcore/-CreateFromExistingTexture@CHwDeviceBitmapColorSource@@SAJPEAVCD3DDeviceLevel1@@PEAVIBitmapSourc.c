/*
 * XREFs of ?CreateFromExistingTexture@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAV1@@Z @ 0x1800A5AF4
 * Callers:
 *     ?CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCD3DVidMemOnlyTexture@@PEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180081D20 (-CreateColorSourceFromExistingTexture@CHwBitmapCache@@QEAAJIVDisplayId@@AEBV-$TMilRect@IUMilRect.c)
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x1800A6494 (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180082C1C (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800A5A30 (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ?CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@W4DXGI_ALPHA_MODE@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800A63D8 (-CalcCacheParametersFromVidMemTexture@CHwDeviceBitmapColorSource@@CAJPEAVCD3DVidMemOnlyTexture@@.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800A6E74 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CreateFromExistingTexture(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        CHwDeviceBitmapColorSource **a7)
{
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  CHwDeviceBitmapColorSource *v15; // rax
  CHwDeviceBitmapColorSource *v16; // rdi
  unsigned int v18; // [rsp+20h] [rbp-91h]
  struct D3D11_TEXTURE2D_DESC v19; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v20[12]; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+6Ch] [rbp-45h]
  unsigned int v22; // [rsp+70h] [rbp-41h]
  int v23; // [rsp+A4h] [rbp-Dh]

  v23 = 0;
  if ( !*(_QWORD *)(a6 + 256) )
  {
    v11 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, *(unsigned int *)(a6 + 152), a5);
    v12 = v11;
    if ( v11 >= 0 )
      goto LABEL_3;
    v18 = 245;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v18);
    return v12;
  }
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v11 = CHwDeviceBitmapColorSource::CalcCacheParametersFromVidMemTexture(a6, v10, a4, v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    v18 = 237;
    goto LABEL_13;
  }
LABEL_3:
  v13 = *(_OWORD *)(a6 + 136);
  v14 = *(_OWORD *)(a6 + 152);
  v19.MiscFlags = *(_DWORD *)(a6 + 176);
  *(_OWORD *)&v19.Width = v13;
  *(_QWORD *)&v19.BindFlags = *(_QWORD *)(a6 + 168);
  *(_OWORD *)&v19.Format = v14;
  v15 = (CHwDeviceBitmapColorSource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                 + 8LL))(
                                        WPF::g_pProcessHeap,
                                        344LL);
  if ( v15 )
    v16 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v15, a1, v21, v22, &v19, a3);
  else
    v16 = 0LL;
  if ( v16 )
  {
    (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v16)(v16);
    *((_QWORD *)v16 + 20) = a6;
    _InterlockedIncrement((volatile signed __int32 *)(a6 + 8));
    CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v16, a2, 0LL, (__int64)v20);
    *a7 = v16;
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x105u);
  }
  return v12;
}
