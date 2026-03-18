/*
 * XREFs of ?NtUserfnHkINLPRECT@@YA_JK_KPEAUtagRECT@@@Z @ 0x1C0217CD0
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0058860 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0084A54 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPRECT(unsigned int a1, __int64 a2, struct tagRECT *a3)
{
  __int128 v4; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagRECT *)W32UserProbeAddress;
  v4 = (__int128)*a3;
  return xxxCallNextHookEx(a1, a2, (__int64)&v4);
}
