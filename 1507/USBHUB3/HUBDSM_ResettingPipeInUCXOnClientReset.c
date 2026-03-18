/*
 * XREFs of HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0016E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001C170 (HUBUCX_SubmitUcxIoctl.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBDSM_ResettingPipeInUCXOnClientReset(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  _DWORD *v3; // rdi
  __int64 *v4; // rdx
  __int64 v5; // rax
  int v6; // eax
  int v8; // [rsp+28h] [rbp-40h]
  _WORD v9[20]; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  memset(v9, 0, sizeof(v9));
  v2 = *(_QWORD *)(v1 + 440);
  v9[0] = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _WORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v9);
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v1 + 416),
                   0LL);
  memset(v3, 0, 0x28uLL);
  v4 = *(__int64 **)(v1 + 1640);
  if ( v4 )
  {
    *v3 = 40;
    *((_QWORD *)v3 + 1) = *(_QWORD *)(*(_QWORD *)v1 + 208LL);
    *((_QWORD *)v3 + 2) = *(_QWORD *)(v1 + 24);
    v5 = *v4;
    v3[8] = 0;
    *((_QWORD *)v3 + 3) = v5;
    v6 = HUBUCX_SubmitUcxIoctl(v1, 4788287LL);
    if ( v6 < 0 )
    {
      v8 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x39u,
        (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
        v8);
    }
  }
  else
  {
    *(_DWORD *)(v1 + 1548) = -2147482112;
    *(_DWORD *)(v1 + 1544) = -1073741811;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x38u,
      (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids);
    HUBSM_AddEvent(v1 + 488, 0xFB4u);
  }
  return 1000LL;
}
