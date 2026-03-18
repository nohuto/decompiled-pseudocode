/*
 * XREFs of xxxSetAutoRotationConvertible @ 0x1C014F5D4
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 *     xxxRefreshDisplayOrientation @ 0x1C014F560 (xxxRefreshDisplayOrientation.c)
 * Callees:
 *     xxxRestoreSlateAutorotationPreferences @ 0x1C01D2924 (xxxRestoreSlateAutorotationPreferences.c)
 */

void __fastcall xxxSetAutoRotationConvertible(int a1)
{
  if ( dword_1C0323D74 && !a1 && !dword_1C0323D70 )
    xxxRestoreSlateAutorotationPreferences();
  dword_1C0323D74 = a1;
  if ( a1 )
    xxxApplyNativeOrientation();
  else
    xxxApplyOrientationPreference();
}
