/*
 * XREFs of Controller_ExecuteDSM @ 0x1C0053000
 * Callers:
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004C008 (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004EB04 (Controller_ConfigureS0IdleSettings.c)
 *     Controller_WdfEvtDeviceAdd @ 0x1C004FFB0 (Controller_WdfEvtDeviceAdd.c)
 *     Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C005325C (Controller_ExecuteKBLPowerTransitionWorkaround.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00056E0 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0009BA0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 */

void __fastcall Controller_ExecuteDSM(__int64 *a1, const void *a2, int a3, int a4)
{
  __int64 v4; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  unsigned __int16 v14; // r9
  __int64 v15; // [rsp+30h] [rbp-59h]
  _QWORD v16[3]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v17[3]; // [rsp+68h] [rbp-21h] BYREF
  char v18[8]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v19[2]; // [rsp+88h] [rbp-1h] BYREF
  int v20; // [rsp+98h] [rbp+Fh]

  v4 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x3CuLL, 0x49434858u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3CuLL);
    v10[2] = 60;
    *v10 = 1130980673;
    v10[1] = 1297302623;
    v10[3] = 4;
    v10[4] = 1048578;
    memcpy_s(v10 + 5, 0x10uLL, a2, 0x10uLL);
    LOWORD(v11) = *((_WORD *)v10 + 9);
    if ( (unsigned __int16)v11 >= 4u )
      v11 = (unsigned __int16)v11;
    else
      v11 = 4LL;
    *(_DWORD *)((char *)v10 + v11 + 20) = 0x40000;
    *(_DWORD *)((char *)v10 + v11 + 24) = a3;
    *(_DWORD *)((char *)v10 + v11 + 32) = a4;
    *(_DWORD *)((char *)v10 + v11 + 28) = 0x40000;
    *(_QWORD *)((char *)v10 + v11 + 36) = 0x40000LL;
    v19[1] = 0LL;
    v20 = 0;
    v16[1] = v19;
    v17[0] = 1LL;
    v16[0] = 1LL;
    v17[1] = v10;
    v17[2] = 60LL;
    v19[0] = 1114596673LL;
    v16[2] = 20LL;
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v4);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, char *))(WdfFunctions_01015 + 1488))(
            WdfDriverGlobals,
            v12,
            0LL,
            3325956LL,
            v17,
            v16,
            0LL,
            v18);
    if ( v13 >= 0 )
    {
      v14 = 236;
      if ( LODWORD(v19[0]) == 1114596673 )
        v14 = 237;
      WPP_RECORDER_SF_q(a1[8], 4u, 3u, v14, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v4);
    }
    else
    {
      LODWORD(v15) = v13;
      WPP_RECORDER_SF_qd(a1[8], 4u, 3u, 0xEBu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v4, v15);
    }
    ExFreePoolWithTag(v10, 0x49434858u);
  }
  else
  {
    WPP_RECORDER_SF_d(a1[8], 2u, 3u, 0xEAu, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, -1073741670);
  }
}
