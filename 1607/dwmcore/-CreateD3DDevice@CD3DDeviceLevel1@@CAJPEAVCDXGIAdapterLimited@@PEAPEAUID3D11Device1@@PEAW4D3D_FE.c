/*
 * XREFs of ?CreateD3DDevice@CD3DDeviceLevel1@@CAJPEAVCDXGIAdapterLimited@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800B2C1C
 * Callers:
 *     ?Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILPoolManager@@PEAPEAV1@@Z @ 0x180021598 (-Create@CD3DDeviceLevel1@@SAJAEBU_GUID@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@PEAVIMILP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z @ 0x1800B2F38 (-GetMaxFeatureLevel@CDXGIAdapterLimited@@IEAAJPEAW4D3D_FEATURE_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateD3DDevice(
        IDXGIAdapter **a1,
        struct ID3D11Device1 **a2,
        enum D3D_FEATURE_LEVEL *a3)
{
  int MaxFeatureLevel; // eax
  unsigned int v7; // ebx
  __m128i *p_si128; // rcx
  __int64 v9; // rax
  HRESULT v10; // eax
  int v11; // ebx
  int v12; // eax
  D3D_FEATURE_LEVEL pFeatureLevel; // [rsp+50h] [rbp-9h] BYREF
  ID3D11Device *ppDevice; // [rsp+58h] [rbp-1h] BYREF
  __m128i si128; // [rsp+60h] [rbp+7h] BYREF
  int v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+74h] [rbp+1Bh]
  int v19; // [rsp+78h] [rbp+1Fh]

  ppDevice = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v17 = 37632;
  v18 = 37376;
  v19 = 37120;
  MaxFeatureLevel = CDXGIAdapterLimited::GetMaxFeatureLevel((CDXGIAdapterLimited *)a1, &pFeatureLevel);
  v7 = MaxFeatureLevel;
  if ( MaxFeatureLevel < 0 )
  {
    if ( IsOOM(MaxFeatureLevel) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xCAu);
  }
  else
  {
    p_si128 = &si128;
    v9 = 0LL;
    do
    {
      if ( p_si128->m128i_i32[0] == pFeatureLevel )
        break;
      v9 = (unsigned int)(v9 + 1);
      p_si128 = (__m128i *)((char *)p_si128 + 4);
    }
    while ( (unsigned int)v9 < 7 );
    v10 = D3D11CreateDevice(
            a1[3],
            D3D_DRIVER_TYPE_UNKNOWN,
            0LL,
            0xA9u,
            (const D3D_FEATURE_LEVEL *)&si128 + v9,
            7 - v9,
            7u,
            &ppDevice,
            &pFeatureLevel,
            0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      if ( v10 != -2147467262 && v10 != -2005270524 )
      {
        if ( IsOOM(v10) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x120u);
      }
      v7 = -2003304307;
      if ( IsOOM(-2003304307) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x123u);
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(ID3D11Device *, GUID *, struct ID3D11Device1 **))ppDevice->lpVtbl->QueryInterface)(
              ppDevice,
              &GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686,
              a2);
      v7 = v12;
      if ( v12 < 0 )
      {
        if ( IsOOM(v12) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x110u);
      }
      else
      {
        *a3 = pFeatureLevel;
      }
    }
  }
  if ( ppDevice )
    ((void (__fastcall *)(ID3D11Device *))ppDevice->lpVtbl->Release)(ppDevice);
  return v7;
}
