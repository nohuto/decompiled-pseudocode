/*
 * XREFs of ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18013F124
 * Callers:
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18013B6C8 (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 * Callees:
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x180013824 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x180014274 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x180014290 (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x18001CD30 (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x18013D648 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CreateShared(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        enum DXGI_FORMAT a4,
        int a5,
        char a6,
        _OWORD *a7,
        _QWORD *a8,
        CHwDeviceBitmapColorSource **a9)
{
  int v12; // eax
  unsigned int v13; // ebx
  UINT v14; // eax
  CHwDeviceBitmapColorSource *v15; // rax
  CHwDeviceBitmapColorSource *v16; // rdi
  bool v17; // dl
  int SharedTexture; // eax
  CHwBitmapColorSource *v19; // rcx
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v22[20]; // [rsp+60h] [rbp-61h] BYREF

  *a8 = 0LL;
  v12 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, a4, a7, a5, (__int64)v22);
  v13 = v12;
  if ( v12 >= 0 )
  {
    v21.Width = v22[11];
    v21.Height = v22[14];
    v21.Format = v22[0];
    v14 = 8;
    v21.MipLevels = 1;
    v21.ArraySize = 1;
    v21.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
    if ( a6 )
      v14 = 40;
    v21.Usage = D3D11_USAGE_DEFAULT;
    v21.BindFlags = v14;
    v21.CPUAccessFlags = 0;
    v21.MiscFlags = 2;
    v15 = (CHwDeviceBitmapColorSource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                          WPF::g_pProcessHeap,
                                          344LL);
    if ( v15 )
      v16 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v15, a1, v22[3], v22[4], &v21, a3);
    else
      v16 = 0LL;
    if ( v16 )
    {
      (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v16)(v16);
      SharedTexture = CHwBitmapColorSource::CreateSharedTexture(v16, v17);
      v13 = SharedTexture;
      if ( SharedTexture >= 0 )
      {
        *a8 = CHwDeviceBitmapColorSource::GetSharedHandle(v16);
        CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v19, a2, 0LL, (__int64)v22);
        *a9 = v16;
        v16 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SharedTexture, 0x1D7u);
      }
      if ( v16 )
        CMILRefCountBase::Release(v16);
    }
    else
    {
      v13 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1D4u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1C2u);
  }
  return v13;
}
