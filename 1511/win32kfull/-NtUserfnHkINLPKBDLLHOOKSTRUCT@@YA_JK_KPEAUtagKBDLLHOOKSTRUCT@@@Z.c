/*
 * XREFs of ?NtUserfnHkINLPKBDLLHOOKSTRUCT@@YA_JK_KPEAUtagKBDLLHOOKSTRUCT@@@Z @ 0x1C0217B9C
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0058860 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0084A54 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserfnHkINLPKBDLLHOOKSTRUCT(unsigned int a1, __int64 a2, struct tagKBDLLHOOKSTRUCT *a3)
{
  __int128 v4; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-20h]

  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagKBDLLHOOKSTRUCT *)W32UserProbeAddress;
  v4 = *(_OWORD *)a3;
  v5 = *((_QWORD *)a3 + 2);
  return xxxCallNextHookEx(a1, a2, (__int64)&v4);
}
