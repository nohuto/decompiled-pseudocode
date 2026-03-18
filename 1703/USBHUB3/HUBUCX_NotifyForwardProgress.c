/*
 * XREFs of HUBUCX_NotifyForwardProgress @ 0x1C002155C
 * Callers:
 *     HUBFDO_EvtDeviceUsageNotification @ 0x1C000AFD0 (HUBFDO_EvtDeviceUsageNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBUCX_NotifyForwardProgress(__int64 a1)
{
  __int64 v1; // rdi
  bool v3; // zf
  __int64 v4; // rax
  int v5; // eax
  __int64 (__fastcall *v6)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+28h] [rbp-21h]
  _QWORD v11[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v12; // [rsp+60h] [rbp+17h]
  _QWORD v13[5]; // [rsp+68h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  memset(v13, 0, sizeof(v13));
  v3 = *(_BYTE *)(a1 + 232) == 0;
  v4 = *(_QWORD *)(a1 + 240);
  v13[0] = 0x2800000001LL;
  v13[1] = v4;
  v13[2] = 0x100001000LL;
  if ( v3 )
    v5 = *(unsigned __int16 *)(a1 + 1096);
  else
    v5 = *(unsigned __int16 *)(a1 + 88);
  LODWORD(v13[4]) = v5;
  v13[3] = *(_QWORD *)(a1 + 1072);
  v12 = 0LL;
  v11[1] = v13;
  v11[0] = 1LL;
  v6 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1520);
  LODWORD(v12) = 40;
  v7 = v6(WdfDriverGlobals, v1, 0LL, 4789263LL, v11, 0LL, 0LL, 0LL, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2488),
      2u,
      3u,
      0x44u,
      (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids,
      v10);
  }
  return v8;
}
