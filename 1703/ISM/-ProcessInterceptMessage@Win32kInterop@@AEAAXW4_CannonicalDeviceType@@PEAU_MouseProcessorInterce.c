/*
 * XREFs of ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x18000B8B4
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x18000C250 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::ProcessInterceptMessage(__int64 a1, int a2, __int64 a3)
{
  struct Win32kInterop *v3; // rsi
  __int64 result; // rax
  _DWORD *v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  const char *v15; // r9
  bool v16; // zf
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[236]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7C8h] [rbp+6C8h]

  v3 = Win32kInterop::s_pInterop;
  result = (__int64)memset(v18, 0, sizeof(v18));
  if ( !a2 )
  {
    if ( !*((_BYTE *)Win32kInterop::s_pInterop + 88) )
    {
      v7 = operator new(0x38uLL);
      memset(v7, 0, 0x38uLL);
      if ( !v7 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 479, 3);
        goto LABEL_6;
      }
      v7[1] = 2;
      *v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 6) + 32LL))(*((_QWORD *)v3 + 6));
      v9 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, struct Win32kInterop *))(**((_QWORD **)v3 + 6) + 40LL))(
             *((_QWORD *)v3 + 6),
             v7,
             v3);
      if ( v9 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v10, &MinInput_Warning_CheckResult, 0, 484, v9);
        goto LABEL_6;
      }
      ++*((_BYTE *)v3 + 88);
      *((_QWORD *)v3 + 10) = v7;
    }
    v11 = (_DWORD *)*((_QWORD *)v3 + 10);
    LODWORD(v18[5]) = 1888;
    LODWORD(v18[0]) = 2;
    HIDWORD(v18[0]) = *v11;
    LODWORD(v18[1]) = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    v12 = *((_QWORD *)v3 + 6);
    v18[2] = PerformanceCount.QuadPart;
    *(_DWORD *)((char *)&v18[88] + 2) = *(_DWORD *)(a3 + 24);
    HIWORD(v18[88]) = *(_WORD *)(a3 + 28);
    HIDWORD(v18[89]) = *(_DWORD *)(a3 + 32);
    LODWORD(v18[90]) = *(_DWORD *)(a3 + 36);
    v13 = *(_BYTE *)(a3 + 40) & 1;
    BYTE3(v18[87]) = 1;
    LOBYTE(v18[234]) = v13;
    HIDWORD(v18[234]) = 4;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 24LL))(v12, v18);
    if ( (int)result < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v14, &MinInput_Warning_CheckResult, 0, 513, result);
LABEL_6:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    switch ( HIDWORD(v18[234]) )
    {
      case 1:
        *(_DWORD *)(a3 + 48) = 0;
        break;
      case 2:
        v16 = BYTE3(v18[235]) == 0;
        *(_DWORD *)(a3 + 48) = 2;
        if ( !v16 )
          *(_DWORD *)(a3 + 68) = 16;
        v16 = LOBYTE(v18[235]) == 0;
        *(_WORD *)(a3 + 60) = WORD1(v18[88]);
        *(_DWORD *)(a3 + 52) = HIDWORD(v18[89]);
        *(_DWORD *)(a3 + 56) = v18[90];
        result = LODWORD(v18[85]);
        *(_DWORD *)(a3 + 64) = v18[85];
        if ( !v16 )
          *(_DWORD *)(a3 + 68) |= 0x20u;
        if ( BYTE2(v18[235]) )
          *(_DWORD *)(a3 + 68) |= 0x40u;
        break;
      case 4:
        *(_DWORD *)(a3 + 48) = 1;
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x228,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          v15);
        JUMPOUT(0x18000BB31LL);
    }
  }
  return result;
}
