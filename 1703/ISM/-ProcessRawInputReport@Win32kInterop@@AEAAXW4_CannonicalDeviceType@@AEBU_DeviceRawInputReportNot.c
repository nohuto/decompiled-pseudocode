/*
 * XREFs of ?ProcessRawInputReport@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_DeviceRawInputReportNotification@@@Z @ 0x18000B79C
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x18000C250 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessRawInputReport(__int64 a1, int a2, __int64 a3)
{
  struct Win32kInterop *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v10[236]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = Win32kInterop::s_pInterop;
  if ( a2 == 1 )
  {
    memset(v10, 0, sizeof(v10));
    HIDWORD(v10[0]) = *(_DWORD *)a3;
    LODWORD(v10[5]) = 1888;
    LODWORD(v10[0]) = 4;
    LODWORD(v10[1]) = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    v5 = *((_QWORD *)v3 + 6);
    v10[2] = PerformanceCount.QuadPart;
    v6 = *(_QWORD *)(a3 + 16);
    v10[88] = *(_QWORD *)v6;
    LODWORD(v10[89]) = *(_DWORD *)(v6 + 8);
    BYTE3(v10[87]) = 1;
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 24LL))(v5, v10);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 447, v7);
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
}
