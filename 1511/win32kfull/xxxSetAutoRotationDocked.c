/*
 * XREFs of xxxSetAutoRotationDocked @ 0x1C014F5A0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxSetInformationThread @ 0x1C00CE900 (xxxSetInformationThread.c)
 *     xxxRefreshDisplayOrientation @ 0x1C014F560 (xxxRefreshDisplayOrientation.c)
 * Callees:
 *     xxxRestoreSlateAutorotationPreferences @ 0x1C01D2924 (xxxRestoreSlateAutorotationPreferences.c)
 */

void __fastcall xxxSetAutoRotationDocked(int a1)
{
  if ( dword_1C0323D70 && !a1 && !dword_1C0323D74 )
    xxxRestoreSlateAutorotationPreferences();
  dword_1C0323D70 = a1;
  if ( a1 )
    xxxApplyNativeOrientation();
  else
    xxxApplyOrientationPreference();
}
