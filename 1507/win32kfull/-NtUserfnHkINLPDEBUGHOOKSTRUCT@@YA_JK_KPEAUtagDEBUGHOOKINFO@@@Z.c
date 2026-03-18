/*
 * XREFs of ?NtUserfnHkINLPDEBUGHOOKSTRUCT@@YA_JK_KPEAUtagDEBUGHOOKINFO@@@Z @ 0x1C0217C60
 * Callers:
 *     NtUserCallNextHookEx @ 0x1C0068CE0 (NtUserCallNextHookEx.c)
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0049A24 (xxxCallNextHookEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GetDebugHookLParamSize @ 0x1C020E058 (GetDebugHookLParamSize.c)
 */

__int64 __fastcall NtUserfnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, struct tagDEBUGHOOKINFO *a3)
{
  unsigned int DebugHookLParamSize; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 CurrentProcessWow64Process; // rax
  _OWORD v9[2]; // [rsp+30h] [rbp-48h] BYREF

  if ( (unsigned __int64)a3 >= W32UserProbeAddress )
    a3 = (struct tagDEBUGHOOKINFO *)W32UserProbeAddress;
  v9[0] = *(_OWORD *)a3;
  v9[1] = *((_OWORD *)a3 + 1);
  DebugHookLParamSize = GetDebugHookLParamSize(a2, (__int64)v9);
  v6 = DebugHookLParamSize;
  if ( DebugHookLParamSize )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    if ( (((-(__int64)(CurrentProcessWow64Process != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & *((_QWORD *)&v9[0] + 1)) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)(*((_QWORD *)&v9[0] + 1) + v6) > W32UserProbeAddress
      || (unsigned __int64)(*((_QWORD *)&v9[0] + 1) + v6) < *((_QWORD *)&v9[0] + 1) )
    {
      *W32UserProbeAddress = 0;
    }
  }
  return xxxCallNextHookEx(a1);
}
