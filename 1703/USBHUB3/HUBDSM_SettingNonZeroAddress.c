/*
 * XREFs of HUBDSM_SettingNonZeroAddress @ 0x1C001B2E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001EDA0 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBDSM_SettingNonZeroAddress(__int64 a1)
{
  _QWORD *v1; // rdi
  _DWORD *v2; // rbx
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 960);
  v2 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v1[52],
                   0LL);
  memset(v2, 0, 0x20uLL);
  *v2 = 32;
  *((_QWORD *)v2 + 1) = *(_QWORD *)(*v1 + 240LL);
  v3 = v1[3];
  v2[7] = 0;
  *((_QWORD *)v2 + 2) = v3;
  v4 = HUBUCX_SubmitUcxIoctl(v1, 4788255LL);
  if ( v4 < 0 )
  {
    v6 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1[1] + 1432LL),
      2u,
      5u,
      0x1Bu,
      (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids,
      v6);
  }
  return 1000LL;
}
