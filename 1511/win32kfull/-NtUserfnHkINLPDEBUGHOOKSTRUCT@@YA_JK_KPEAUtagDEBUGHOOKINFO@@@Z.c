/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C0217ACC
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0058860 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0084A54 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GetDebugHookLParamSize @ 0x1C020E420 (GetDebugHookLParamSize.c)
 */

__int64 __fastcall NtUserfnHkINLPDEBUGHOOKSTRUCT(unsigned int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3)
{
  unsigned int DebugHookLParamSize; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 CurrentProcessWow64Process; // rax
  _OWORD v10[2]; // [rsp+30h] [rbp-48h] BYREF

  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagDEBUGHOOKINFO *)W32UserProbeAddress;
  v10[0] = *(_OWORD *)a3;
  v10[1] = *((_OWORD *)a3 + 1);
  DebugHookLParamSize = GetDebugHookLParamSize(a2, (__int64)v10);
  v7 = DebugHookLParamSize;
  if ( DebugHookLParamSize )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
    if ( (((-(__int64)(CurrentProcessWow64Process != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & *((_QWORD *)&v10[0] + 1)) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(*((_QWORD *)&v10[0] + 1) + v7) > W32UserProbeAddress
      || (unsigned __int64)(*((_QWORD *)&v10[0] + 1) + v7) < *((_QWORD *)&v10[0] + 1) )
    {
      *W32UserProbeAddress = 0;
    }
  }
  return xxxCallNextHookEx(a1, a2, (__int64)v10);
}
