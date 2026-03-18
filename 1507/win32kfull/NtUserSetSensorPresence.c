/*
 * XREFs of NtUserSetSensorPresence @ 0x1C0220950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxSetSensorPresence @ 0x1C01D0E18 (xxxSetSensorPresence.c)
 */

__int64 __fastcall NtUserSetSensorPresence(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  EnterCrit(1LL);
  if ( PsGetCurrentProcess(v3, v2) == gpepCSRSS )
    xxxSetSensorPresence(a1);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v5, v4);
  return 1LL;
}
