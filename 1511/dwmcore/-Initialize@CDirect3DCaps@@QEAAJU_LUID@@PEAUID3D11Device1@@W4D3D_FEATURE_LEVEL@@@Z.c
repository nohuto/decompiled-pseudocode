/*
 * XREFs of ?Initialize@CDirect3DCaps@@QEAAJU_LUID@@PEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@@Z @ 0x1800B13A4
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVCDXGIAdapterLimited@@@Z @ 0x180023CE8 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIEnumeration@@PEAVC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDirect3DCaps::Initialize(CDirect3DCaps *this, struct _LUID a2, struct ID3D11Device1 *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // rdi
  struct ID3D11Device1Vtbl *lpVtbl; // rax
  HRESULT (__stdcall *CreateTexture2D)(ID3D11Device1 *, const D3D11_TEXTURE2D_DESC *, const D3D11_SUBRESOURCE_DATA *, ID3D11Texture2D **); // rbx
  __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v14[12]; // [rsp+38h] [rbp-38h] BYREF

  *(struct _LUID *)this = a2;
  if ( a4 >= 37120 )
  {
    *((_DWORD *)this + 8) = 2048;
    *((_DWORD *)this + 2) = 2;
    *((_DWORD *)this + 3) = 2;
    *((_DWORD *)this + 9) = 2048;
    *((_QWORD *)this + 5) = 0xFFFFLL;
    *((_DWORD *)this + 6) = 8;
    *((_DWORD *)this + 7) = 8;
  }
  if ( a4 >= 37632 )
  {
    *((_DWORD *)this + 8) = 4096;
    *((_DWORD *)this + 9) = 4096;
    *((_QWORD *)this + 5) = 0xFFFFFLL;
  }
  if ( a4 >= 40960 )
  {
    *((_QWORD *)this + 5) = 1431655765LL;
    *((_DWORD *)this + 2) = 4;
    *((_DWORD *)this + 3) = 4;
    *((_DWORD *)this + 8) = 0x2000;
    *((_DWORD *)this + 9) = 0x2000;
  }
  if ( a4 >= 45056 )
  {
    *((_DWORD *)this + 8) = 0x4000;
    *((_DWORD *)this + 9) = 0x4000;
  }
  if ( *((_DWORD *)this + 8) < 0x1000u )
  {
    lpVtbl = a3->lpVtbl;
    v12 = 0LL;
    v14[6] = 0;
    v14[7] = 0;
    CreateTexture2D = lpVtbl->CreateTexture2D;
    v14[10] = 0;
    v14[9] = 0;
    v14[8] = 8;
    v14[0] = 2100;
    v14[1] = 1;
    v14[2] = 1;
    v14[3] = 1;
    v14[4] = 61;
    v14[5] = 1;
    if ( ((int (__fastcall *)(struct ID3D11Device1 *, _DWORD *, _QWORD, __int64 *))CreateTexture2D)(a3, v14, 0LL, &v12) >= 0 )
    {
      *((_DWORD *)this + 8) = 4096;
      *((_DWORD *)this + 9) = 4096;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71,
         &v13) >= 0 )
  {
    v8 = v13;
    *((_DWORD *)this + 8) = 0x800000;
    *((_DWORD *)this + 9) = 0x800000;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
         &v11) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *))(*(_QWORD *)v11 + 128LL))(v11, 0LL, 0LL, v14) >= 0
      && (v14[0] & 0x800) != 0 )
    {
      *((_BYTE *)this + 59) = 1;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *((_DWORD *)this + 4) = 1;
  result = 0LL;
  *((_DWORD *)this + 5) = a4;
  *((_QWORD *)this + 6) = 65793LL;
  return result;
}
