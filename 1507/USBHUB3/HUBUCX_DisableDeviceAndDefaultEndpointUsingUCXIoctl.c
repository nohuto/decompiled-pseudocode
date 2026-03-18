/*
 * XREFs of HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001C834
 * Callers:
 *     HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership @ 0x1C00168F0 (HUBDSM_DisablingDeviceInControllerOnStopSuspendOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001C170 (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[52],
                   0LL);
  memset(v2, 0, 0x20uLL);
  *(_DWORD *)v2 = 32;
  v2[1] = *(_QWORD *)(*a1 + 208LL);
  v2[2] = a1[3];
  v2[3] = a1[11];
  result = HUBUCX_SubmitUcxIoctl((__int64)a1, 0x49102Bu);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x19u,
             (__int64)&WPP_72e76ab2a811890e773caa2aa06155f7_Traceguids,
             v4);
  }
  return result;
}
