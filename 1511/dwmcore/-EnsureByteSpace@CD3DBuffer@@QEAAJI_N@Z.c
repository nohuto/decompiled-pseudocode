/*
 * XREFs of ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800A98D0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180034BF0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800A95D0 (-Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 *     ?Create@?$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x1800A96B0 (-Create@-$CD3DVertexBuffer@VCVertexXYWColorDUV2@@@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A9AAC (--4-$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DBuffer::EnsureByteSpace(CD3DBuffer *this, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  unsigned int v5; // ecx
  unsigned int v6; // r15d
  unsigned int v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v17[6]; // [rsp+38h] [rbp-28h] BYREF

  v3 = 0LL;
  v5 = *((_DWORD *)this + 11);
  v6 = 0;
  v16 = 0LL;
  v7 = a2;
  if ( a2 > v5 )
  {
    if ( !a3 )
    {
      v14 = v5;
      if ( !v5 )
        v14 = a2;
      v15 = v5 + a2;
      while ( v14 < v15 )
        v14 *= 2;
      v7 = v14;
      if ( v14 > *((_DWORD *)this + 12) )
        v7 = *((_DWORD *)this + 12);
    }
    v8 = *((_DWORD *)this + 13);
    v9 = (*(__int64 (__fastcall **)(CD3DBuffer *))(*(_QWORD *)this + 24LL))(this);
    v17[4] = 0;
    v17[5] = 0;
    v17[2] = v9;
    v10 = 0;
    v11 = *((_DWORD *)this + 13) == 2;
    v17[0] = v7;
    if ( v11 )
      v10 = 0x10000;
    v17[1] = v8;
    v17[3] = v10;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 3) + 552LL)
                                                                         + 24LL))(
            *(_QWORD *)(*((_QWORD *)this + 3) + 552LL),
            v17,
            0LL,
            &v16);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x78u);
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3D11Buffer>::operator=((char *)this + 16, &v16);
      *((_DWORD *)this + 10) = 0;
      *((_DWORD *)this + 11) = v7;
    }
    v3 = v16;
  }
  if ( v3 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v6;
}
