/*
 * XREFs of HUBUCX_CancelUCXIoctl @ 0x1C001CEF0
 * Callers:
 *     HUBDSM_CancellingAcquiringAddress0OnDetachInEnum @ 0x1C00181B0 (HUBDSM_CancellingAcquiringAddress0OnDetachInEnum.c)
 *     HUBDSM_WaitingForUCXIoctlOnStopSuspend @ 0x1C0018490 (HUBDSM_WaitingForUCXIoctlOnStopSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CancelUCXIoctl(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 400));
  if ( !(_BYTE)result )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x12u,
             (__int64)&WPP_57a0096b32d7c853b2434a6bcfb35827_Traceguids);
  return result;
}
