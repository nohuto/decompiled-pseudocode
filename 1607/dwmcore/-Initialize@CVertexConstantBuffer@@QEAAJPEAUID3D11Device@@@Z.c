/*
 * XREFs of ?Initialize@CVertexConstantBuffer@@QEAAJPEAUID3D11Device@@@Z @ 0x1800B5E24
 * Callers:
 *     ?Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DVertexBuffer@@PEAVCD3DIndexBuffer@@PEAPEAV1@@Z @ 0x1800B5310 (-Create@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAVCD3DVertexBuffer@@PEAVCD3DIndexBuffer@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CVertexConstantBuffer::Initialize(CVertexConstantBuffer *this, struct ID3D11Device *a2)
{
  unsigned int v2; // ebx
  struct ID3D11DeviceVtbl *lpVtbl; // rax
  int v4; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v7[6]; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 4) )
  {
    v7[1] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v6[1] = 0LL;
    lpVtbl = a2->lpVtbl;
    v6[0] = this;
    v7[0] = 32;
    v7[2] = 4;
    v4 = ((__int64 (__fastcall *)(struct ID3D11Device *, _DWORD *, _QWORD *))lpVtbl->CreateBuffer)(a2, v7, v6);
    v2 = v4;
    if ( v4 < 0 )
    {
      if ( IsOOM(v4) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1Bu);
    }
  }
  return v2;
}
