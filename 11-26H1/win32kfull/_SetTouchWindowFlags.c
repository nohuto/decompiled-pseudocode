/*
 * XREFs of _SetTouchWindowFlags @ 0x14029356C
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x140235A40 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 UserSessionState; // rax

  if ( (_DWORD)a2 )
  {
    v5 = (int)a2;
    UserSessionState = W32GetUserSessionState(a1, a2);
    return InternalSetProp(a1, *(unsigned __int16 *)(UserSessionState + 41386), v5, 5u);
  }
  else
  {
    v3 = W32GetUserSessionState(a1, a2);
    InternalRemoveProp(a1, *(unsigned __int16 *)(v3 + 41386), 1u);
    return 1LL;
  }
}
