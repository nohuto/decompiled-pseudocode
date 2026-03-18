/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x140224800
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  int v6; // ebx

  EnterCrit(0LL, 0LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v6 = 0;
    UserSetLastError(87);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    v6 = CTouchProcessor::SetPointerVisualization(*(CTouchProcessor **)(UserSessionState + 3256), a1, 0, 0LL, 1);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
