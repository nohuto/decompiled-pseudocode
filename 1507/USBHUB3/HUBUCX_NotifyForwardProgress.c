/*
 * XREFs of HUBUCX_NotifyForwardProgress @ 0x1C001E770
 * Callers:
 *     HUBFDO_EvtDeviceUsageNotification @ 0x1C000A550 (HUBFDO_EvtDeviceUsageNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBUCX_NotifyForwardProgress(__int64 a1)
{
  __int64 v1; // rdi
  bool v3; // zf
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // [rsp+28h] [rbp-21h]
  _QWORD v10[3]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v11[5]; // [rsp+68h] [rbp+1Fh] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  memset(v11, 0, sizeof(v11));
  v3 = *(_BYTE *)(a1 + 200) == 0;
  v4 = *(_QWORD *)(a1 + 208);
  v11[0] = 0x2800000001LL;
  v11[1] = v4;
  v11[2] = 0x100001000LL;
  if ( v3 )
    v5 = *(unsigned __int16 *)(a1 + 1048);
  else
    v5 = *(unsigned __int16 *)(a1 + 80);
  LODWORD(v11[4]) = v5;
  v11[3] = *(_QWORD *)(a1 + 1024);
  v10[0] = 1LL;
  v10[1] = v11;
  v10[2] = 40LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1520))(
         WdfDriverGlobals,
         v1,
         0LL,
         4789263LL,
         v10,
         0LL,
         0LL,
         0LL,
         0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2440),
      2u,
      3u,
      0x43u,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
      v9);
  }
  return v7;
}
