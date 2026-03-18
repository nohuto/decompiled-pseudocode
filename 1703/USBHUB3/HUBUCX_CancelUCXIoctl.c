/*
 * XREFs of HUBUCX_CancelUCXIoctl @ 0x1C001EF8C
 * Callers:
 *     HUBDSM_CancellingAcquiringAddress0OnDetachInEnum @ 0x1C0019C30 (HUBDSM_CancellingAcquiringAddress0OnDetachInEnum.c)
 *     HUBDSM_WaitingForUCXIoctlOnStopSuspend @ 0x1C0019F50 (HUBDSM_WaitingForUCXIoctlOnStopSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
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
             (__int64)&WPP_085dd3e5d97b340416555628d039db45_Traceguids);
  return result;
}
