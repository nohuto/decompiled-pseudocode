/*
 * XREFs of NtUserLockWorkStation @ 0x1402B7BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     CheckWinstaAttributeAccess @ 0x14028FE90 (CheckWinstaAttributeAccess.c)
 */

__int64 NtUserLockWorkStation()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = 0LL;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
  {
    PostWinlogonMessage(1027LL, 0LL);
    v0 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
