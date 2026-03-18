/*
 * XREFs of ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C009E30C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C009E380 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     IsShellParticipatesInSizing @ 0x1C009E8F0 (IsShellParticipatesInSizing.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01CE0F8 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01CF1A4 (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxNotifyShellPositioningChanged(struct tagWND *a1, struct tagCVR *const a2)
{
  PostIAMPosChangedNotification(a2, a1);
  if ( (*((_DWORD *)a2 + 8) & 0x2100C0) == 0
    && (*((_DWORD *)a2 + 8) & 3) != 3
    && (*((_BYTE *)a1 + 55) & 0x10) != 0
    && !(unsigned int)GetWindowCloakState(a1) )
  {
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 16LL) )
      xxxNotifyShellTrackedWindowPosChanged(a1, 0LL);
    if ( (unsigned int)IsShellParticipatesInSizing(a1) )
      xxxNotifyShellWindowPosChangedCommon(a1, 0LL, 1LL, 7LL);
  }
}
