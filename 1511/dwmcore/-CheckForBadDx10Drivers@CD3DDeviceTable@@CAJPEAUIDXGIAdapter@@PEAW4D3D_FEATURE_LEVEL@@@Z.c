/*
 * XREFs of ?CheckForBadDx10Drivers@CD3DDeviceTable@@CAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18006A6E8
 * Callers:
 *     ?CreateD3DDevice@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAUIDXGIAdapter@@PEAPEAUID3D11Device1@@PEAW4D3D_FEATURE_LEVEL@@@Z @ 0x18006A9C8 (-CreateD3DDevice@CD3DDeviceTable@@AEAAJPEAVCDXGIAdapterLimited@@PEAUIDXGIAdapter@@PEAPEAUID3D11D.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceTable::CheckForBadDx10Drivers(struct IDXGIAdapter *a1, enum D3D_FEATURE_LEVEL *a2)
{
  enum D3D_FEATURE_LEVEL v4; // edi
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // eax
  int v9; // [rsp+30h] [rbp-168h] BYREF
  __int64 v10; // [rsp+38h] [rbp-160h] BYREF
  _BYTE v11[256]; // [rsp+40h] [rbp-158h] BYREF
  int v12; // [rsp+140h] [rbp-58h]

  v4 = D3D_FEATURE_LEVEL_11_1;
  v5 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))a1->lpVtbl->GetDesc)(a1, v11);
  v9 = v5;
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1ACu);
  }
  else
  {
    v9 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))a1->lpVtbl->CheckInterfaceSupport)(
           a1,
           &GUID_9b7e4c8f_342c_4106_a19f_4f2704f689f0,
           &v10);
    v6 = v9;
    if ( v9 < 0 )
    {
      v8 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, GUID *, __int64 *))a1->lpVtbl->CheckInterfaceSupport)(
             a1,
             &GUID_9b7e4c0f_342c_4106_a19f_4f2704f689f0,
             &v10);
      v9 = v8;
      v6 = v8;
      if ( v8 < 0 )
      {
        if ( v8 != -2005270524 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1F1u);
          goto LABEL_4;
        }
        v6 = 0;
        v4 = D3D_FEATURE_LEVEL_9_3;
        v9 = 0;
      }
      else if ( v12 == 4318 )
      {
        if ( v10 <= 0x7000F000B18E1LL )
          v4 = D3D_FEATURE_LEVEL_9_3;
      }
      else
      {
        v4 = D3D_FEATURE_LEVEL_10_0;
      }
    }
    *a2 = v4;
  }
LABEL_4:
  TranslateDXGIorD3DErrorInContext(v6, 0LL, &v9);
  return (unsigned int)v9;
}
