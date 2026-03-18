/*
 * XREFs of NtUserCanBrokerForceForeground @ 0x1C00FDFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C00455E8 (-CheckLegacyForegroundAccess@@YAHXZ.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCanBrokerForceForeground(BOOL *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  BOOL v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(1LL);
  v4 = 0;
  if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 384LL)) )
  {
    v5 = CheckLegacyForegroundAccess(v3, v2);
    v7 = W32UserProbeAddress;
    if ( (unsigned __int64)a1 >= W32UserProbeAddress )
      a1 = (BOOL *)W32UserProbeAddress;
    *a1 = v5;
    v4 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
