/*
 * XREFs of HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0019440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     WPP_RECORDER_SF_Ld @ 0x1C001E578 (WPP_RECORDER_SF_Ld.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001EDA0 (HUBUCX_SubmitUcxIoctl.c)
 *     __security_check_cookie @ 0x1C0037C60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  _DWORD *v3; // rdi
  _QWORD *v4; // rdx
  int v5; // edx
  int v6; // r8d
  _WORD v8[20]; // [rsp+40h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(v1 + 440);
  v8[0] = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _WORD *))(WdfFunctions_01015 + 2128))(WdfDriverGlobals, v2, v8);
  v3 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v1 + 416),
                   0LL);
  memset(v3, 0, 0x28uLL);
  v4 = *(_QWORD **)(v1 + 1640);
  if ( v4 )
  {
    *v3 = 40;
    *((_QWORD *)v3 + 1) = *(_QWORD *)(*(_QWORD *)v1 + 240LL);
    *((_QWORD *)v3 + 2) = *(_QWORD *)(v1 + 24);
    *((_QWORD *)v3 + 3) = *v4;
    v3[8] = 1;
    if ( (int)HUBUCX_SubmitUcxIoctl(v1, 4788287LL) < 0 )
      WPP_RECORDER_SF_Ld(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL), v5, v6, 55);
  }
  else
  {
    *(_DWORD *)(v1 + 1548) = -2147482112;
    *(_DWORD *)(v1 + 1544) = -1073741811;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x36u,
      (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids);
    HUBSM_AddEvent(v1 + 488, 4020);
  }
  return 1000LL;
}
