/*
 * XREFs of xxxApplyOrientationPreference @ 0x1C0098AE8
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C000E490 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0098A20 (NtUserSetActiveProcessForMonitor.c)
 *     xxxUserReinitializeAutoRotation @ 0x1C00E92B0 (xxxUserReinitializeAutoRotation.c)
 *     xxxSetAutoRotationDocked @ 0x1C0154F04 (xxxSetAutoRotationDocked.c)
 *     xxxSetAutoRotationConvertible @ 0x1C0154F84 (xxxSetAutoRotationConvertible.c)
 * Callees:
 *     ?GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ @ 0x1C000E4E8 (-GetActivePpi@@YAPEAUtagPROCESSINFO@@XZ.c)
 *     QueryAutoRotationState @ 0x1C0098B04 (QueryAutoRotationState.c)
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00EC148 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01C9C28 (-xxxRotateScreen@@YAJKHPEAH@Z.c)
 *     RotationRequired @ 0x1C01CA188 (RotationRequired.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x1C021F0C4 (-TraceLoggingScreenOrientationChangeEvent@@YAXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
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
