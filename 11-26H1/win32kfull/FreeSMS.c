/*
 * XREFs of FreeSMS @ 0x1401B8B90
 * Callers:
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeSMS(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return Win32FreeToPagedLookasideList(*(_QWORD *)(UserSessionState + 69080), a1);
}
