/*
 * XREFs of NtUserEvent @ 0x1402B20B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1402EF878 (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(unsigned __int16 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v2, v1);
  ProbeForRead(a1, 1uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  v4 = a1[3];
  v7 = PsGetCurrentProcessWow64Process(v6, v5);
  ProbeForRead(a1 + 4, v4, v7 != 0 ? 1 : 4);
  v8 = xxxCsEvent(a1, (unsigned __int16)v4);
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
