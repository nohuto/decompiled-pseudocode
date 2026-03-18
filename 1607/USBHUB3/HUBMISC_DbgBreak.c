/*
 * XREFs of HUBMISC_DbgBreak @ 0x1C00275A8
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x1C0008A2C (HUBSM_FindAndSetTargetState.c)
 *     HUBSM_RunStateMachine @ 0x1C0009C00 (HUBSM_RunStateMachine.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000CE38 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBPDO_EvtDeviceUsageNotificationEx @ 0x1C0015340 (HUBPDO_EvtDeviceUsageNotificationEx.c)
 *     HUBIDLE_AddEvent @ 0x1C0030148 (HUBIDLE_AddEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0023990 (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall HUBMISC_DbgBreak(const char *a1)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  BOOLEAN result; // al

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00580E8);
  WPP_RECORDER_SF_s(*(_QWORD *)(v2 + 64), v3, v4, v5);
  result = KdRefreshDebuggerNotPresent();
  if ( !result )
  {
    DbgPrint("Breaking due to %s. For more details run: !rcdrlogdump usbhub3\n", a1);
    __debugbreak();
  }
  return result;
}
