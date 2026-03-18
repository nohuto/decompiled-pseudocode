/*
 * XREFs of _GetProcessWindowStation @ 0x1C00699F0
 * Callers:
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C000CA60 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0069824 (xxxDW_SendDestroyMessages.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0097310 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserActivateKeyboardLayout @ 0x1C0099FF0 (NtUserActivateKeyboardLayout.c)
 *     zzzDwmStartRedirection @ 0x1C00D24EC (zzzDwmStartRedirection.c)
 *     xxxDwmStopRedirection @ 0x1C00D3E60 (xxxDwmStopRedirection.c)
 *     NtUserGetImeInfoEx @ 0x1C00EC3C0 (NtUserGetImeInfoEx.c)
 *     NtUserGetKeyboardLayoutList @ 0x1C00FB400 (NtUserGetKeyboardLayoutList.c)
 *     NtUserGetProcessWindowStation @ 0x1C00FBB20 (NtUserGetProcessWindowStation.c)
 *     NtUserCloseWindowStation @ 0x1C0101930 (NtUserCloseWindowStation.c)
 *     DesktopFromDesktopWindow @ 0x1C010C6D8 (DesktopFromDesktopWindow.c)
 *     NtUserSetImeInfoEx @ 0x1C0110180 (NtUserSetImeInfoEx.c)
 *     NtUserOpenInputDesktop @ 0x1C01222D0 (NtUserOpenInputDesktop.c)
 *     NtUserUnloadKeyboardLayout @ 0x1C0221720 (NtUserUnloadKeyboardLayout.c)
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
