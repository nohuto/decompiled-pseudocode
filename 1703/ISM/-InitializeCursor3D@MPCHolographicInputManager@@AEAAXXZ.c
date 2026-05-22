/*
 * XREFs of ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x18004CE24
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x18004B610 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPCHolographicInputManager::InitializeCursor3D(MPCHolographicInputManager *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, char *); // rcx
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, char *); // rsi
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // rcx
  __int64 v13; // [rsp+38h] [rbp-9h] BYREF
  int v14[2]; // [rsp+40h] [rbp-1h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp+7h] BYREF
  _DWORD v16[14]; // [rsp+58h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v15[1] = -2LL;
  *(_QWORD *)v14 = 0LL;
  v13 = 0LL;
  v15[0] = 0LL;
  memset(v16, 0, sizeof(v16));
  v16[1] = 512;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 262) + 88LL))(*((_QWORD *)this + 262), v15);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x351,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 262) + 72LL))(*((_QWORD *)this + 262), &v13);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x353,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = v13;
  v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v14;
  if ( *(_QWORD *)v14 )
  {
    *(_QWORD *)v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v5)[2])(v5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD, int *))(*(_QWORD *)v4 + 24LL))(
         v4,
         v16,
         v15[0],
         0LL,
         v14);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x354,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v14;
  v8 = *((_QWORD *)this + 267);
  if ( v8 )
  {
    *((_QWORD *)this + 267) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (**v7)(v7, &GUID_a906d320_9167_4955_a961_8a982929b899, (char *)this + 2136);
  if ( v9 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x355,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v9);
  v10 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v14;
  if ( *(_QWORD *)v14 )
  {
    *(_QWORD *)v14 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, char *)))(*v12)[2])(v12);
  }
}
