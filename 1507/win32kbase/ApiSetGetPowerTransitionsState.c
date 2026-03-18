/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C00CD4F0
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0071604 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C00817D0 (RIMConfigurePointerDevice.c)
 *     RIMOnTimerNotification @ 0x1C00C2650 (RIMOnTimerNotification.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CB12C (RIMGetPointerDeviceContactState.c)
 *     rimReportHidKeyboardInputData @ 0x1C00CF9BC (rimReportHidKeyboardInputData.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D02F4 (RIMGetPTPClickButtonState.c)
 *     RIMGetPTPContactState @ 0x1C00D0624 (RIMGetPTPContactState.c)
 * Callees:
 *     IsGetPowerTransitionsStateSupported_0 @ 0x1C0002E20 (IsGetPowerTransitionsStateSupported_0.c)
 *     GetPowerTransitionsState_0 @ 0x1C0002E28 (GetPowerTransitionsState_0.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall ApiSetGetPowerTransitionsState(void *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x34uLL);
  result = IsGetPowerTransitionsStateSupported_0();
  if ( (int)result >= 0 )
    return GetPowerTransitionsState_0();
  return result;
}
