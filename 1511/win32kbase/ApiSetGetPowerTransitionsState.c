/*
 * XREFs of ApiSetGetPowerTransitionsState @ 0x1C00CE82C
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C0005A0C (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C007BDB4 (RIMConfigurePointerDevice.c)
 *     RIMOnTimerNotification @ 0x1C00C3300 (RIMOnTimerNotification.c)
 *     RIMGetPointerDeviceContactState @ 0x1C00CC1F4 (RIMGetPointerDeviceContactState.c)
 *     rimReportHidKeyboardInputData @ 0x1C00D0D98 (rimReportHidKeyboardInputData.c)
 *     RIMGetPTPClickButtonState @ 0x1C00D1D6C (RIMGetPTPClickButtonState.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 * Callees:
 *     IsGetPowerTransitionsStateSupported_0 @ 0x1C0002E50 (IsGetPowerTransitionsStateSupported_0.c)
 *     GetPowerTransitionsState_0 @ 0x1C0002E58 (GetPowerTransitionsState_0.c)
 *     memset @ 0x1C00890C0 (memset.c)
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
