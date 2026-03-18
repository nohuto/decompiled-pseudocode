/*
 * XREFs of NtUserSetCaretPos @ 0x140127890
 * Callers:
 *     <none>
 * Callees:
 *     zzzSetCaretPos @ 0x140129180 (zzzSetCaretPos.c)
 */

__int64 __fastcall NtUserSetCaretPos(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = (int)zzzSetCaretPos(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
