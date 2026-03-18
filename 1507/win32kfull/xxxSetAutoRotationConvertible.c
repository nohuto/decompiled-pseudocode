/*
 * XREFs of xxxSetAutoRotationConvertible @ 0x1C0132624
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxSetInformationThread @ 0x1C007D080 (xxxSetInformationThread.c)
 *     xxxRefreshDisplayOrientation @ 0x1C01325D0 (xxxRefreshDisplayOrientation.c)
 * Callees:
 *     <none>
 */

void __fastcall xxxSetAutoRotationConvertible(int a1)
{
  dword_1C0323044 = a1;
  if ( a1 )
    xxxApplyNativeOrientation();
  else
    xxxApplyOrientationPreference();
}
