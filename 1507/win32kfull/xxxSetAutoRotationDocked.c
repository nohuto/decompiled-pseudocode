/*
 * XREFs of xxxSetAutoRotationDocked @ 0x1C0132610
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 *     xxxRefreshDisplayOrientation @ 0x1C01325D0 (xxxRefreshDisplayOrientation.c)
 * Callees:
 *     <none>
 */

void __fastcall xxxSetAutoRotationDocked(int a1)
{
  dword_1C0323040 = a1;
  if ( a1 )
    xxxApplyNativeOrientation();
  else
    xxxApplyOrientationPreference();
}
