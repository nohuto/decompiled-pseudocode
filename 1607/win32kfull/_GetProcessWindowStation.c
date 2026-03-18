/*
 * XREFs of _GetProcessWindowStation @ 0x1C00DAF00
 * Callers:
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000DF40 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     zzzDwmStartRedirection @ 0x1C0093AE4 (zzzDwmStartRedirection.c)
 *     DesktopFromDesktopWindow @ 0x1C00D8CD8 (DesktopFromDesktopWindow.c)
 *     NtUserCloseWindowStation @ 0x1C00D8F00 (NtUserCloseWindowStation.c)
 *     NtUserOpenInputDesktop @ 0x1C00D8F90 (NtUserOpenInputDesktop.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C00DAAB0 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetImeInfoEx @ 0x1C00DABF0 (NtUserGetImeInfoEx.c)
 *     NtUserGetProcessWindowStation @ 0x1C00DAEC0 (NtUserGetProcessWindowStation.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00E6460 (NtUserLoadKeyboardLayoutEx.c)
 *     xxxDwmStopRedirection @ 0x1C00EFE10 (xxxDwmStopRedirection.c)
 *     NtUserSetImeInfoEx @ 0x1C0130C10 (NtUserSetImeInfoEx.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0210B20 (NtUserActivateKeyboardLayout.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C021B860 (NtUserUnloadKeyboardLayout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetProcessWindowStation(_QWORD *a1, __int64 a2)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2);
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 640);
  return *(_QWORD *)(CurrentProcessWin32Process + 632);
}
