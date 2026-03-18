/*
 * XREFs of xxxNotifyShellTrackedWindowPosChanged @ 0x1C01CF1A4
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C009E30C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C012C5A8 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 *     xxxSetWindowShowState @ 0x1C0224CB4 (xxxSetWindowShowState.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C009E938 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01CE0F8 (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowPosChanged(__int64 a1, int a2)
{
  __int64 result; // rax

  result = IsWindowSubjectToShellWindowBehavior(a1, 16LL);
  if ( (_DWORD)result )
    return xxxNotifyShellWindowPosChangedCommon(a1, a2, 0, 0);
  return result;
}
