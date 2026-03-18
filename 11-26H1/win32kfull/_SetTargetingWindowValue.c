/*
 * XREFs of _SetTargetingWindowValue @ 0x14020FB58
 * Callers:
 *     NtUserRegisterTouchHitTestingWindow @ 0x14020FAD0 (NtUserRegisterTouchHitTestingWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 */

__int64 __fastcall SetTargetingWindowValue(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 UserSessionState; // rax
  __int64 v6; // rax

  if ( (_DWORD)a2 )
  {
    v3 = (int)a2;
    UserSessionState = W32GetUserSessionState(a1, a2);
    return InternalSetProp(a1, *(unsigned __int16 *)(UserSessionState + 41388), v3, 5u);
  }
  else
  {
    v6 = W32GetUserSessionState(a1, a2);
    InternalRemoveProp(a1, *(unsigned __int16 *)(v6 + 41388), 1u);
    return 1LL;
  }
}
