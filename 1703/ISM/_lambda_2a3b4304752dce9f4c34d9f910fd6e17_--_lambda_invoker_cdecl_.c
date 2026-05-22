/*
 * XREFs of _lambda_2a3b4304752dce9f4c34d9f910fd6e17_::_lambda_invoker_cdecl_ @ 0x18004D750
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@ViewHeirarchy@@SA?AV?$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ @ 0x18006D108 (-Create@ViewHeirarchy@@SA-AV-$ComPtr@UIViewHeirarchy@@@WRL@Microsoft@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_2a3b4304752dce9f4c34d9f910fd6e17_::_lambda_invoker_cdecl_(HWND a1, _DWORD *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  int v11; // esi
  _QWORD v13[7]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp-31h]
  __int64 v15; // [rsp+70h] [rbp-29h]
  _QWORD *v16; // [rsp+78h] [rbp-21h]
  _BYTE *v17; // [rsp+80h] [rbp-19h]
  _BYTE v18[56]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+27h]
  int v20; // [rsp+100h] [rbp+67h] BYREF
  __int64 v21; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+110h] [rbp+77h] BYREF
  __int64 v23; // [rsp+118h] [rbp+7Fh]

  v15 = -2LL;
  v3 = 0;
  v20 = 0;
  v13[0] = off_1800A57E8;
  v13[1] = a1;
  v14 = v13;
  v16 = v13;
  v4 = 0LL;
  v23 = 0LL;
  v17 = v18;
  v5 = *(_QWORD *)ViewHeirarchy::Create(&v22);
  v19 = 0LL;
  if ( v14 )
    v19 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v14)(v14, v18);
  (*(void (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)v5 + 56LL))(v5, &v21, v18);
  v6 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    v4 = v21;
    v23 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    if ( v14 )
    {
      v7 = v13;
      LOBYTE(v7) = v14 != v13;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v14 + 32LL))(v14, v7);
      v14 = 0LL;
    }
    if ( v4 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 120LL))(v4, &v20);
      if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v9, &MinInput_Warning_CheckResult, 0, 83, v8);
    }
  }
  else if ( v14 )
  {
    v10 = v13;
    LOBYTE(v10) = v14 != v13;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v14 + 32LL))(v14, v10);
    v14 = 0LL;
  }
  v11 = v20;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a2 = v11;
  LOBYTE(v3) = v11 == 0;
  return v3;
}
