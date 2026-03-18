/*
 * XREFs of ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140154C9C
 * Callers:
 *     zzzInputFocusReceivedWindowEvent @ 0x140153364 (zzzInputFocusReceivedWindowEvent.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzDelegateInputFocusReceivedWindowEvent @ 0x1402A66B8 (zzzDelegateInputFocusReceivedWindowEvent.c)
 * Callees:
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 */

void __fastcall zzzInputFocusReceivedWindowEventImpl(struct tagWND *a1, __int64 a2)
{
  int v2; // esi
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 UserSessionState; // rax
  int v7; // ecx

  v2 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 40);
  else
    LODWORD(v5) = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = 35;
  if ( !*(_DWORD *)(UserSessionState + 70592) )
    v7 = 33;
  xxxWindowEvent(0x80000002, a1, v5, v2, v7);
}
