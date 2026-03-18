/*
 * XREFs of ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18017F1A0
 * Callers:
 *     ?CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18017C114 (-CreateSharedColorSource@CHwBitmapCache@@QEAAJW4DXGI_FORMAT@@IVDisplayId@@_NAEBV-$TMilRect@IUMil.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@AEBUCacheParameters@1@@Z @ 0x180082C1C (-SetBitmapAndContextCacheParameters@CHwBitmapColorSource@@IEAAXPEAVIBitmapSource@@PEAU-$TMILFlag.c)
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800A5A30 (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ?GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ @ 0x1800A5A84 (-GetSharedHandle@CHwDeviceBitmapColorSource@@QEBAPEAXXZ.c)
 *     ?CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FORMAT@@AEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@VDisplayId@@PEAUCacheParameters@CHwBitmapColorSource@@@Z @ 0x1800A6E74 (-CalcCacheParametersFromBitmapSource@CHwDeviceBitmapColorSource@@CAJPEAVIBitmapSource@@W4DXGI_FO.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x18017E5C8 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CreateShared(
        struct CD3DDeviceLevel1 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6,
        _OWORD *a7,
        _QWORD *a8,
        CHwDeviceBitmapColorSource **a9)
{
  CHwDeviceBitmapColorSource *v12; // rbx
  int v13; // eax
  unsigned int v14; // edi
  UINT v15; // eax
  CHwDeviceBitmapColorSource *v16; // rax
  bool v17; // dl
  int SharedTexture; // eax
  CHwBitmapColorSource *v19; // rcx
  struct D3D11_TEXTURE2D_DESC v21; // [rsp+30h] [rbp-91h] BYREF
  _DWORD v22[20]; // [rsp+60h] [rbp-61h] BYREF

  v12 = 0LL;
  *a8 = 0LL;
  v22[17] = 0;
  v13 = CHwDeviceBitmapColorSource::CalcCacheParametersFromBitmapSource(a2, a4, a7, a5, (__int64)v22);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1C2u);
  }
  else
  {
    v21.Width = v22[11];
    v21.Height = v22[14];
    v21.Format = v22[0];
    v15 = 8;
    v21.MipLevels = 1;
    v21.ArraySize = 1;
    v21.SampleDesc = (DXGI_SAMPLE_DESC)1LL;
    if ( a6 )
      v15 = 40;
    v21.Usage = D3D11_USAGE_DEFAULT;
    v21.BindFlags = v15;
    v21.CPUAccessFlags = 0;
    v21.MiscFlags = 2;
    v16 = (CHwDeviceBitmapColorSource *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                          WPF::g_pProcessHeap,
                                          344LL);
    if ( v16 )
      v12 = CHwDeviceBitmapColorSource::CHwDeviceBitmapColorSource(v16, a1, v22[3], v22[4], &v21, a3);
    if ( !v12 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1D4u);
      return v14;
    }
    (**(void (__fastcall ***)(CHwDeviceBitmapColorSource *))v12)(v12);
    SharedTexture = CHwBitmapColorSource::CreateSharedTexture(v12, v17);
    v14 = SharedTexture;
    if ( SharedTexture >= 0 )
    {
      *a8 = CHwDeviceBitmapColorSource::GetSharedHandle(v12);
      CHwBitmapColorSource::SetBitmapAndContextCacheParameters(v19, a2, 0LL, (__int64)v22);
      *a9 = v12;
      return v14;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SharedTexture, 0x1D7u);
  }
  if ( v12 )
    CMILRefCountBase::Release(v12);
  return v14;
}
