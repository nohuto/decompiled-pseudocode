/*
 * XREFs of ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x18000C090
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x18000C250 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::ProcessRawInputMessage(__int64 a1, int a2, _DWORD *a3)
{
  struct Win32kInterop *v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v10[2]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v11[24]; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v12[118]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7C8h] [rbp+6C8h]

  if ( !a2 )
  {
    v10[1] = -2LL;
    v4 = Win32kInterop::s_pInterop;
    memset(v12, 0, sizeof(v12));
    DWORD2(v12[2]) = 1888;
    LODWORD(v12[0]) = 4096;
    DWORD1(v12[0]) = **((_DWORD **)Win32kInterop::s_pInterop + 10);
    DWORD2(v12[0]) = a3[54];
    v10[0] = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)v4 + 5) + 72LL))(*((_QWORD *)v4 + 5), v10);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x38D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
    v9 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v10[0] + 40LL))(v10[0], &v9);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x38F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v12[41] = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 40LL))(v9, v11);
    HIDWORD(v12[44]) = a3[51];
    LODWORD(v12[45]) = a3[52];
    DWORD2(v12[44]) = a3[50];
    DWORD1(v12[45]) = a3[53];
    (*(void (__fastcall **)(_QWORD, _DWORD *, _OWORD *))(**((_QWORD **)v4 + 5) + 96LL))(*((_QWORD *)v4 + 5), a3, v12);
    v7 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v10[0];
    if ( v10[0] )
    {
      v10[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
}
