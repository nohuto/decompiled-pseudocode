/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C0081AE0
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C000B524 (RIMAllocateHidDesc.c)
 *     RIMOnTimerNotification @ 0x1C00CFE90 (RIMOnTimerNotification.c)
 *     rimApplyPointerDevicePolicies @ 0x1C00DBD14 (rimApplyPointerDevicePolicies.c)
 *     rimReportHidKeyboardInputData @ 0x1C00DF59C (rimReportHidKeyboardInputData.c)
 * Callees:
 *     IsGetPowerTransitionsStateSupported_0 @ 0x1C0002E30 (IsGetPowerTransitionsStateSupported_0.c)
 *     GetPowerTransitionsState_0 @ 0x1C0002E38 (GetPowerTransitionsState_0.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall ApiSetGetPowerTransitionsState(void *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x38uLL);
  result = IsGetPowerTransitionsStateSupported_0();
  if ( (int)result >= 0 )
    return GetPowerTransitionsState_0();
  return result;
}
