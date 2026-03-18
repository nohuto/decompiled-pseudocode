/*
 * XREFs of HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x1C001CE80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001EDA0 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rax
  int v3; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 960);
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   v1[52],
                   0LL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *(_DWORD *)v2 = 24;
  v2[1] = *(_QWORD *)(*v1 + 240LL);
  v2[2] = v1[3];
  v3 = HUBUCX_SubmitUcxIoctl(v1, 4788311LL);
  if ( v3 < 0 )
  {
    v5 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v1[1] + 1432LL),
      2u,
      5u,
      0x3Fu,
      (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids,
      v5);
  }
  return 1000LL;
}
