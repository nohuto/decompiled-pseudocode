/*
 * XREFs of ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C0217D9C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0068CE0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0049A24 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, struct tagMOUSEHOOKSTRUCTEX *a3)
{
  return xxxCallNextHookEx(a1);
}
