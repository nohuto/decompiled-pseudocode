/*
 * XREFs of xxxApplyOrientationPreference @ 0x1C0096AC8
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C000C850 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0096A00 (NtUserSetActiveProcessForMonitor.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C009A300 (xxxUserReinitializeAutoRotation.c)
 *     xxxSetAutoRotationDocked @ 0x1C014F5A0 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C014F5D4 (xxxSetAutoRotationConvertible.c)
 * Callees:
 *     ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000C8A8 (-GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ.c)
 *     QueryAutoRotationState @ 0x1C0096AE4 (QueryAutoRotationState.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C010CC40 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D2388 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     RotationRequired @ 0x1C01D26CC (RotationRequired.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C0226090 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
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
