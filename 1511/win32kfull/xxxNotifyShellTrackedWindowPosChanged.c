/*
 * XREFs of xxxNotifyShellTrackedWindowPosChanged @ 0x1C01D812C
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0075870 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C010A2C4 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 *     xxxSetWindowShowState @ 0x1C0224100 (xxxSetWindowShowState.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C006E7C4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01D7244 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowPosChanged(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = IsWindowSubjectToShellWindowBehavior(a1, 16LL, a3);
  if ( (_DWORD)result )
    return xxxNotifyShellWindowPosChangedCommon(a1, a2, 0, 0);
  return result;
}
