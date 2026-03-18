/*
 * XREFs of ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x140041794
 * Callers:
 *     zzzInputFocusLostWindowEvent @ 0x140154C5C (zzzInputFocusLostWindowEvent.c)
 *     zzzDelegateInputFocusLostWindowEvent @ 0x1402A667C (zzzDelegateInputFocusLostWindowEvent.c)
 * Callees:
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 */

__int64 __fastcall zzzInputFocusLostWindowEventImpl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 UserSessionState; // rax
  int v4; // ecx
  int v5; // edx

  if ( a2 && (v2 = *(_QWORD *)(a2 + 120)) != 0 && v2 != a1 && *(_QWORD *)(a1 + 16) == *(_QWORD *)(v2 + 16) )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v4 = 35;
    v5 = 33;
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v4 = 51;
    v5 = 49;
  }
  if ( !*(_DWORD *)(UserSessionState + 70592) )
    v4 = v5;
  return xxxWindowEvent(0x80000003, v4);
}
