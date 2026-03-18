/*
 * XREFs of ControllerPreInterruptsDisableAcpiCallout @ 0x1C00045C0
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C0004430 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerPreInterruptsDisableAcpiCallout(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  int v7; // edx
  int v8; // r9d
  __int64 v9; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v10[3]; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v11[3]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v12[8]; // [rsp+90h] [rbp+2Fh] BYREF
  _QWORD v13[2]; // [rsp+98h] [rbp+37h] BYREF
  int v14; // [rsp+A8h] [rbp+47h]

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C0045318);
  v4 = *(_QWORD *)(result + 8);
  if ( (*(_QWORD *)(v4 + 232) & 0x40000000000000LL) != 0 )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v4 + 64), v3, 3, 80, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, a1);
    v9 = 0x494D525042696541LL;
    v11[0] = 1LL;
    v11[1] = &v9;
    v13[1] = 0LL;
    v14 = 0;
    v10[1] = v13;
    v10[0] = 1LL;
    v11[2] = 8LL;
    v13[0] = 1114596673LL;
    v10[2] = 20LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, _BYTE *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v5,
           0LL,
           3325956LL,
           v11,
           v10,
           0LL,
           v12);
    if ( v6 >= 0 )
    {
      v8 = 82;
      if ( LODWORD(v13[0]) == 1114596673 )
        v8 = 83;
      LOBYTE(v7) = 4;
      return WPP_RECORDER_SF_q(
               *(_QWORD *)(v4 + 64),
               v7,
               3,
               v8,
               (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
               a1);
    }
    else
    {
      LOBYTE(v7) = 4;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v4 + 64),
               v7,
               3,
               81,
               (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids,
               a1,
               v6);
    }
  }
  return result;
}
