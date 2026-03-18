/*
 * XREFs of NtUserLockWorkStation @ 0x1C0009B40
 * Callers:
 *     <none>
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD20 (CheckWinstaAttributeAccess.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 NtUserLockWorkStation()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(1LL);
  v0 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(0x10u) )
  {
    PostWinlogonMessage(1027LL, 0LL);
    v0 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
