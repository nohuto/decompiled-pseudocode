/*
 * XREFs of ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x18000BB34
 * Callers:
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x18000C250 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::ProcessCursorPosMessage(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)Win32kInterop::s_pInterop + 5) + 72LL))(
                      *((_QWORD *)Win32kInterop::s_pInterop + 5),
                      &v9);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_11;
    v6 = 575;
    goto LABEL_10;
  }
  LODWORD(result) = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 40LL))(v9, &v10);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_11;
    v6 = 576;
    goto LABEL_10;
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, *a3, a3[1]);
  if ( (int)result < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_11;
    v6 = 577;
LABEL_10:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v6, result);
LABEL_11:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v7 = v9;
  v9 = 0LL;
  if ( v7 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = v10;
  v10 = 0LL;
  if ( v8 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return result;
}
