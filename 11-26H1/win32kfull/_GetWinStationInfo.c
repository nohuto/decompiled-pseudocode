/*
 * XREFs of _GetWinStationInfo @ 0x1402D2D04
 * Callers:
 *     NtUserGetWinStationInfo @ 0x1402B5290 (NtUserGetWinStationInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWinStationInfo(_OWORD *a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcessWow64Process; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4, v3);
  ProbeForWrite(a1, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
  *a1 = *(_OWORD *)(UserSessionState + 63552);
  a1[1] = *(_OWORD *)(UserSessionState + 63568);
  *((_QWORD *)a1 + 4) = *(_QWORD *)(UserSessionState + 63584);
  return 1LL;
}
