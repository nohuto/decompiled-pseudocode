/*
 * XREFs of ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C0217E64
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0068CE0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0049A24 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPRECT(int a1, __int64 a2, struct tagRECT *a3)
{
  return xxxCallNextHookEx(a1);
}
