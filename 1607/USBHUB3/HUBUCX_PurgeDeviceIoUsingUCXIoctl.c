/*
 * XREFs of HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C001F03C
 * Callers:
 *     HUBDSM_PurgingDeviceIoOnDetachInConfigured @ 0x1C0017560 (HUBDSM_PurgingDeviceIoOnDetachInConfigured.c)
 *     HUBDSM_PurgingIoOnEnumAfterFailureInReEnumWithAddress0Ownership @ 0x1C001AA70 (HUBDSM_PurgingIoOnEnumAfterFailureInReEnumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001CDBC (HUBUCX_SubmitUcxIoctl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00355C0 (memset.c)
 */

__int64 __fastcall HUBUCX_PurgeDeviceIoUsingUCXIoctl(_QWORD *a1)
{
  _DWORD *v2; // rbx
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-10h]

  v2 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 1552))(
                   WdfDriverGlobals,
                   a1[52],
                   0LL);
  memset(v2, 0, 0x20uLL);
  *v2 = 32;
  *((_QWORD *)v2 + 1) = *(_QWORD *)(*a1 + 224LL);
  *((_QWORD *)v2 + 2) = a1[3];
  *((_BYTE *)v2 + 24) = 0;
  result = HUBUCX_SubmitUcxIoctl((__int64)a1, 0x49102Fu);
  if ( (int)result < 0 )
  {
    v4 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 1432LL),
             2u,
             5u,
             0x40u,
             (__int64)&WPP_b5a7d2259efb34a086b7c731ef7dab2f_Traceguids,
             v4);
  }
  return result;
}
