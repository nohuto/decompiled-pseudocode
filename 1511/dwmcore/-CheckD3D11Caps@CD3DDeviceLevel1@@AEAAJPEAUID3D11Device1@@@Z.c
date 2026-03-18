/*
 * XREFs of ?CheckD3D11Caps@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x180023410
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CheckD3D11Caps(CD3DDeviceLevel1 *this, struct ID3D11Device1 *a2)
{
  struct ID3D11Device1Vtbl *lpVtbl; // rax
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  int v8; // eax
  __int64 v10; // rdi
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  int v12; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+50h] [rbp-48h]

  lpVtbl = a2->lpVtbl;
  v11 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_07f857e7_077f_4119_86b9_e7ae7104cf33,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x372u);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, _BYTE *))a2->lpVtbl->CheckFeatureSupport)(
           a2,
           5LL,
           v13);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x375u);
    }
    else
    {
      if ( v14 )
        *((_BYTE *)this + 648) = 1;
      v8 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, __int64, int *))a2->lpVtbl->CheckFeatureSupport)(
             a2,
             6LL,
             &v12);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x37Cu);
      }
      else if ( v12 )
      {
        v10 = v11;
        *((_BYTE *)this + 649) = 1;
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 88LL))(v10) & 1) == 0 )
          *((_BYTE *)this + 650) = 1;
      }
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v6;
}
