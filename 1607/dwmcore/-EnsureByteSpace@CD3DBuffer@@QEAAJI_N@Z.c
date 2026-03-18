/*
 * XREFs of ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800ACEA4
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x1800565C0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Create@CD3DVertexBuffer@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z @ 0x1800ACC38 (-Create@CD3DVertexBuffer@@SAJPEAVCD3DDeviceLevel1@@IIPEAPEAV1@@Z.c)
 *     ?Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z @ 0x1800ACD0C (-Create@CD3DIndexBuffer@@SAJPEAVCD3DDeviceLevel1@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DBuffer::EnsureByteSpace(CD3DBuffer *this, unsigned int a2, char a3)
{
  unsigned int v3; // r14d
  unsigned int v5; // esi
  unsigned int v6; // ecx
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v18[6]; // [rsp+40h] [rbp-20h] BYREF

  v3 = 0;
  v16 = 0LL;
  v5 = a2;
  v6 = *((_DWORD *)this + 11);
  if ( a2 > v6 )
  {
    if ( !a3 )
    {
      v14 = v6;
      if ( !v6 )
        v14 = a2;
      v15 = v6 + a2;
      while ( v14 < v15 )
        v14 *= 2;
      v5 = v14;
      if ( v14 > *((_DWORD *)this + 12) )
        v5 = *((_DWORD *)this + 12);
    }
    v7 = *((_DWORD *)this + 13);
    v8 = (*(__int64 (__fastcall **)(CD3DBuffer *))(*(_QWORD *)this + 24LL))(this);
    v18[4] = 0;
    v18[5] = 0;
    v18[2] = v8;
    v9 = 0;
    v18[0] = v5;
    v10 = *((_DWORD *)this + 13) == 2;
    v18[1] = v7;
    if ( v10 )
      v9 = 0x10000;
    v18[3] = v9;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 3) + 568LL)
                                                                         + 24LL))(
            *(_QWORD *)(*((_QWORD *)this + 3) + 568LL),
            v18,
            0LL,
            &v16);
    v3 = v11;
    if ( v11 < 0 )
    {
      if ( IsOOM(v11) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x7Fu);
    }
    else
    {
      v12 = v16;
      if ( *((_QWORD *)this + 2) != v16 )
      {
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        v17 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 2) = v12;
        Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v17);
      }
      *((_DWORD *)this + 10) = 0;
      *((_DWORD *)this + 11) = v5;
    }
  }
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v16);
  return v3;
}
