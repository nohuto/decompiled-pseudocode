/*
 * XREFs of HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001D480
 * Callers:
 *     HUBDSM_EnablingDeviceInUCXFor30 @ 0x1C00185A0 (HUBDSM_EnablingDeviceInUCXFor30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001CD0C (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[52],
                   0LL);
  memset(v2, 0, 0x28uLL);
  *(_DWORD *)v2 = 40;
  v2[1] = *(_QWORD *)(*a1 + 224LL);
  v2[2] = a1[3];
  v2[3] = a1[11];
  result = HUBUCX_SubmitUcxIoctl((__int64)a1, 0x491017u);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x1Au,
             (__int64)&WPP_57a0096b32d7c853b2434a6bcfb35827_Traceguids,
             v4);
  }
  return result;
}
