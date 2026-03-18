/*
 * XREFs of ?NtUserfnHkINLPMOUSEHOOKSTRUCTEX@@YA_JK_KPEAUtagMOUSEHOOKSTRUCTEX@@@Z @ 0x1C02107A8
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C00EE380 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C00EE654 (xxxCallNextHookEx.c)
 */

__int64 __fastcall NtUserfnHkINLPMOUSEHOOKSTRUCTEX(unsigned int a1, __int64 a2, struct tagMOUSEHOOKSTRUCTEX *a3)
{
  _OWORD v4[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v5; // [rsp+48h] [rbp-10h]

  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagMOUSEHOOKSTRUCTEX *)W32UserProbeAddress;
  v4[0] = *(_OWORD *)a3;
  v4[1] = *((_OWORD *)a3 + 1);
  v5 = *((_QWORD *)a3 + 4);
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
