/*
 * XREFs of HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C001E44C
 * Callers:
 *     HUBDSM_PurgingDeviceIoOnDetachInConfigured @ 0x1C0016AC0 (HUBDSM_PurgingDeviceIoOnDetachInConfigured.c)
 *     HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake @ 0x1C0016AF0 (HUBDSM_PurgingDeviceIoOnHubSuspendWhileWaitingForD0EntryOnHwWake.c)
 *     HUBDSM_PurgingDeviceIoOnPrepareForHibernate @ 0x1C0016B10 (HUBDSM_PurgingDeviceIoOnPrepareForHibernate.c)
 *     HUBDSM_PurgingIoOnEnumAfterFailureInReEnumWithAddress0Ownership @ 0x1C001A030 (HUBDSM_PurgingIoOnEnumAfterFailureInReEnumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001C170 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_PurgeDeviceIoUsingUCXIoctl(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[52],
                   0LL);
  *v2 = 0LL;
  v2[1] = 0LL;
  v2[2] = 0LL;
  *(_DWORD *)v2 = 24;
  v2[1] = *(_QWORD *)(*a1 + 208LL);
  v2[2] = a1[3];
  result = HUBUCX_SubmitUcxIoctl((__int64)a1, 0x49102Fu);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x40u,
             (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
             v4);
  }
  return result;
}
