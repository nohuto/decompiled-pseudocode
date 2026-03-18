/*
 * XREFs of NtUserCanBrokerForceForeground @ 0x1C0009040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C008D4BC (-CheckLegacyForegroundAccess@@YAHXZ.c)
 */

__int64 __fastcall NtUserCanBrokerForceForeground(_DWORD *a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 376LL)) )
  {
    v3 = CheckLegacyForegroundAccess();
    v5 = W32UserProbeAddress;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (_DWORD *)W32UserProbeAddress;
    *a1 = v3;
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v2;
}
