/*
 * XREFs of ?CreateD3DDevice@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAUIDXGIAdapter@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18009172C
 * Callers:
 *     ?CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z @ 0x1800918B4 (-CreateAdapterDevicePair@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckForBadDx10Drivers@CD3DDeviceTable@@CAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x180091BE0 (-CheckForBadDx10Drivers@CD3DDeviceTable@@CAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceTable::CreateD3DDevice(
        CD3DDeviceTable *this,
        struct CDXGIAdapterLimited *a2,
        struct IDXGIAdapter *a3,
        struct ID3D11Device1 **a4,
        enum D3D_FEATURE_LEVEL *a5)
{
  int v8; // eax
  unsigned int v9; // edi
  D3D_FEATURE_LEVEL v10; // eax
  __int64 v11; // rcx
  __m128i *p_si128; // rdx
  HRESULT v13; // eax
  ID3D11Device *v14; // rdi
  unsigned int pFeatureLevels; // [rsp+20h] [rbp-41h]
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-11h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-9h] BYREF
  __m128i si128; // [rsp+60h] [rbp-1h] BYREF
  int v20; // [rsp+70h] [rbp+Fh]
  int v21; // [rsp+74h] [rbp+13h]
  int v22; // [rsp+78h] [rbp+17h]

  ppDevice = 0LL;
  v20 = 37632;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = 37376;
  v22 = 37120;
  v8 = CD3DDeviceTable::CheckForBadDx10Drivers(a3, &pFeatureLevel);
  v9 = v8;
  if ( v8 < 0 )
  {
    pFeatureLevels = 265;
LABEL_24:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, pFeatureLevels);
    goto LABEL_9;
  }
  v10 = pFeatureLevel;
  if ( pFeatureLevel >= D3D_FEATURE_LEVEL_10_0 )
  {
    if ( CCommonRegistryData::m_fForce10Level9 )
    {
      v10 = D3D_FEATURE_LEVEL_9_3;
    }
    else
    {
      if ( *((int *)a2 + 86) >= 1105 )
        goto LABEL_5;
      if ( !CCommonRegistryData::m_fForce10OnWDDM1_0 )
        v10 = D3D_FEATURE_LEVEL_9_3;
    }
    pFeatureLevel = v10;
  }
LABEL_5:
  v11 = 0LL;
  p_si128 = &si128;
  do
  {
    if ( p_si128->m128i_i32[0] == v10 )
      break;
    v11 = (unsigned int)(v11 + 1);
    p_si128 = (__m128i *)((char *)p_si128 + 4);
  }
  while ( (unsigned int)v11 < 7 );
  v13 = D3D11CreateDevice(
          a3,
          D3D_DRIVER_TYPE_UNKNOWN,
          0LL,
          0xA9u,
          (const D3D_FEATURE_LEVEL *)&si128 + v11,
          (27 - (4 * v11 - 1)) >> 2,
          7u,
          &ppDevice,
          &pFeatureLevel,
          0LL);
  if ( v13 >= 0 )
  {
    v14 = ppDevice;
    *a5 = pFeatureLevel;
    v8 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, struct ID3D11Device1 **))v14->lpVtbl->QueryInterface)(
           v14,
           &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
           a4);
    v9 = v8;
    if ( v8 >= 0 )
      goto LABEL_9;
    pFeatureLevels = 391;
    goto LABEL_24;
  }
  if ( v13 != -2147467262 && v13 != -2005270524 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x17Eu);
  v9 = -2003304307;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x181u);
LABEL_9:
  if ( ppDevice )
    ((void (__fastcall *)(ID3D11Device *))ppDevice->lpVtbl->Release)(ppDevice);
  return v9;
}
