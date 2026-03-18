/*
 * XREFs of NtUserSetSensorPresence @ 0x1C0220790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     xxxSetSensorPresence @ 0x1C01D2A44 (xxxSetSensorPresence.c)
 */

__int64 __fastcall NtUserSetSensorPresence(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v3, v2, v4, v5) == gpepCSRSS )
    xxxSetSensorPresence(a1);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v7, v6);
  return 1LL;
}
