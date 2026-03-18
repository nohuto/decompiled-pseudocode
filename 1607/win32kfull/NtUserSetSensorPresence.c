/*
 * XREFs of NtUserSetSensorPresence @ 0x1C021A620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxSetSensorPresence @ 0x1C01CA528 (xxxSetSensorPresence.c)
 */

__int64 __fastcall NtUserSetSensorPresence(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v2) == gpepCSRSS )
    xxxSetSensorPresence(a1);
  else
    UserSetLastError(5LL);
  UserSessionSwitchLeaveCrit(v4, v3);
  return 1LL;
}
