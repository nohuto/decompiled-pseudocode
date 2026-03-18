/*
 * XREFs of Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401A1D34
 * Callers:
 *     NtUserSetActiveProcessForMonitor @ 0x1401A10E0 (NtUserSetActiveProcessForMonitor.c)
 *     NtUserDwmValidateWindow @ 0x1401A1B80 (NtUserDwmValidateWindow.c)
 *     ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1401A2F28 (-_AllowSetForegroundWindow@@YA-AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPol.c)
 *     GetConsoleDesktop @ 0x1401C6DA0 (GetConsoleDesktop.c)
 *     xxxWaitForInputIdle @ 0x14022D64C (xxxWaitForInputIdle.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x140249EE0 (NtUserCheckProcessForClipboardAccess.c)
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 *     ?_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z @ 0x1402ABE40 (-_CheckAllowForeground@CForegroundLaunch@@AEBA_NPEBUtagPROCESSINFO@@@Z.c)
 *     NtUserGetDisplayAutoRotationPreferencesByProcessId @ 0x1402B3470 (NtUserGetDisplayAutoRotationPreferencesByProcessId.c)
 *     NtUserGetWindowProcessHandle @ 0x1402B58B0 (NtUserGetWindowProcessHandle.c)
 *     xxxActivateDebugger @ 0x1402F0D94 (xxxActivateDebugger.c)
 * Callees:
 *     Feature_ResponsiblePid__private_IsEnabledFallback @ 0x140297098 (Feature_ResponsiblePid__private_IsEnabledFallback.c)
 */

__int64 Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ResponsiblePid__private_featureState & 0x10) != 0 )
    return Feature_ResponsiblePid__private_featureState & 1;
  else
    return Feature_ResponsiblePid__private_IsEnabledFallback(
             (unsigned int)Feature_ResponsiblePid__private_featureState,
             3LL);
}
