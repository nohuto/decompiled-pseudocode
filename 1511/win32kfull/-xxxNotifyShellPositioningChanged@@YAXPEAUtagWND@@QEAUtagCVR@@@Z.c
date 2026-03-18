/*
 * XREFs of ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0075870
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellParticipatesInSizing @ 0x1C00730E0 (IsShellParticipatesInSizing.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C00758E4 (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01D7244 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D812C (xxxNotifyShellTrackedWindowPosChanged.c)
 */

void __fastcall xxxNotifyShellPositioningChanged(struct tagWND *a1, struct tagCVR *const a2)
{
  __int64 v4; // r8

  PostIAMPosChangedNotification(a2, a1);
  if ( (*((_DWORD *)a2 + 8) & 0x2100C0) == 0
    && (*((_DWORD *)a2 + 8) & 3) != 3
    && (*((_BYTE *)a1 + 55) & 0x10) != 0
    && !(unsigned int)GetWindowCloakState(a1) )
  {
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 16LL, v4) )
      xxxNotifyShellTrackedWindowPosChanged(a1, 0LL);
    if ( (unsigned int)IsShellParticipatesInSizing((__int64)a1) )
      xxxNotifyShellWindowPosChangedCommon(a1, 0LL, 1LL, 7LL);
  }
}
