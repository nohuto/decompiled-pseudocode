/*
 * XREFs of _SetBrokeredForeground @ 0x140265774
 * Callers:
 *     NtUserSetBrokeredForeground @ 0x14024E900 (NtUserSetBrokeredForeground.c)
 * Callees:
 *     InternalSetProp @ 0x14000FF58 (InternalSetProp.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall SetBrokeredForeground(__int64 a1)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax

  v2 = PtiCurrent(a1);
  UserSessionState = W32GetUserSessionState(v4, v3);
  return InternalSetProp(a1, *(unsigned __int16 *)(UserSessionState + 41394), (__int64)v2, 5u);
}
