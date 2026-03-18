/*
 * XREFs of zzzInputFocusReceivedWindowEvent @ 0x140153364
 * Callers:
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1401497E4 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 *     EditionKeyboardInputDelegationChanged @ 0x14029DAE0 (EditionKeyboardInputDelegationChanged.c)
 * Callees:
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140154C9C (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

__int64 __fastcall zzzInputFocusReceivedWindowEvent(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return zzzInputFocusReceivedWindowEventImpl(*(_QWORD *)(*(_QWORD *)(UserSessionState + 18928) + 120LL), v2);
}
