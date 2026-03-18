/*
 * XREFs of _GetProcessWindowStation @ 0x1C00DD080
 * Callers:
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C0009520 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     DesktopFromDesktopWindow @ 0x1C00DAC14 (DesktopFromDesktopWindow.c)
 *     NtUserOpenInputDesktop @ 0x1C00DAC70 (NtUserOpenInputDesktop.c)
 *     NtUserCloseWindowStation @ 0x1C00DCBD0 (NtUserCloseWindowStation.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C00DCC60 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetImeInfoEx @ 0x1C00DCD90 (NtUserGetImeInfoEx.c)
 *     NtUserGetProcessWindowStation @ 0x1C00DD050 (NtUserGetProcessWindowStation.c)
 *     xxxDwmStopRedirection @ 0x1C012B6A0 (xxxDwmStopRedirection.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C01399C0 (NtUserLoadKeyboardLayoutEx.c)
 *     zzzDwmStartRedirection @ 0x1C0149B0C (zzzDwmStartRedirection.c)
 *     NtUserSetImeInfoEx @ 0x1C0154180 (NtUserSetImeInfoEx.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0217FF0 (NtUserActivateKeyboardLayout.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0221700 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 648);
  return *(_QWORD *)(CurrentProcessWin32Process + 640);
}
