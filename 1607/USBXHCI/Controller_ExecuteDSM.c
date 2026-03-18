/*
 * XREFs of Controller_ExecuteDSM @ 0x1C00513D4
 * Callers:
 *     Controller_ExecuteDSMForHSICDisconnectInU3 @ 0x1C004A01C (Controller_ExecuteDSMForHSICDisconnectInU3.c)
 *     Controller_ConfigureS0IdleSettings @ 0x1C004C8CC (Controller_ConfigureS0IdleSettings.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0007070 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_q @ 0x1C0008630 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 */

void __fastcall Controller_ExecuteDSM(__int64 *a1, int a2)
{
  __int64 v2; // rsi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  unsigned __int16 v10; // r9
  __int64 v11; // [rsp+30h] [rbp-49h]
  _QWORD v12[3]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-11h] BYREF
  char v14[8]; // [rsp+80h] [rbp+7h] BYREF
  _QWORD v15[2]; // [rsp+88h] [rbp+Fh] BYREF
  int v16; // [rsp+98h] [rbp+1Fh]

  v2 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x3CuLL, 0x49434858u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3CuLL);
    *v6 = 1130980673;
    v6[1] = 1297302623;
    v6[2] = 60;
    v6[3] = 4;
    v6[4] = 1048578;
    memcpy_s(v6 + 5, 0x10uLL, &GUID_DSM_ENABLE_RTD3, 0x10uLL);
    LOWORD(v7) = *((_WORD *)v6 + 9);
    if ( (unsigned __int16)v7 >= 4u )
      v7 = (unsigned __int16)v7;
    else
      v7 = 4LL;
    *(_DWORD *)((char *)v6 + v7 + 24) = a2;
    *(_DWORD *)((char *)v6 + v7 + 20) = 0x40000;
    *(_QWORD *)((char *)v6 + v7 + 28) = 0x40000LL;
    *(_QWORD *)((char *)v6 + v7 + 36) = 0x40000LL;
    v15[1] = 0LL;
    v16 = 0;
    v12[1] = v15;
    v13[2] = 60LL;
    v13[0] = 1LL;
    v12[0] = 1LL;
    v13[1] = v6;
    v15[0] = 1114596673LL;
    v12[2] = 20LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v2);
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, char *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v8,
           0LL,
           3325956LL,
           v13,
           v12,
           0LL,
           v14);
    if ( v9 >= 0 )
    {
      v10 = 237;
      if ( LODWORD(v15[0]) == 1114596673 )
        v10 = 238;
      WPP_RECORDER_SF_q(a1[8], 4u, 3u, v10, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v2);
    }
    else
    {
      LODWORD(v11) = v9;
      WPP_RECORDER_SF_qd(a1[8], 4u, 3u, 0xECu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v2, v11);
    }
    ExFreePoolWithTag(v6, 0x49434858u);
  }
  else
  {
    WPP_RECORDER_SF_d(a1[8], 2u, 3u, 0xEBu, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, -1073741670);
  }
}
