/*
 * XREFs of xxxApplyOrientationPreference @ 0x1C007D7E8
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C0009430 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C007D720 (NtUserSetActiveProcessForMonitor.c)
 *     xxxSetAutoRotationDocked @ 0x1C0132610 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0132624 (xxxSetAutoRotationConvertible.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C0154340 (xxxUserReinitializeAutoRotation.c)
 * Callees:
 *     ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C0009488 (-GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ.c)
 *     QueryAutoRotationState @ 0x1C007D804 (QueryAutoRotationState.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00FFF10 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D0770 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     RotationRequired @ 0x1C01D0AD0 (RotationRequired.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0224C00 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

__int64 xxxApplyOrientationPreference()
{
  __int64 result; // rax
  struct tagPROCESSINFO *ActivePpi; // rbx
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  result = QueryAutoRotationState();
  if ( (unsigned int)result <= 1 )
  {
    ActivePpi = GetActivePpi();
    result = GetCurrentOrientation(&v2);
    if ( (int)result >= 0 )
    {
      result = RotationRequired(ActivePpi, &v2);
      if ( (_DWORD)result )
      {
        TraceLoggingScreenOrientationChangeEvent(v2, 1LL, 1LL, 1000LL);
        return xxxRotateScreen(v2, 0, 0LL);
      }
    }
  }
  return result;
}
