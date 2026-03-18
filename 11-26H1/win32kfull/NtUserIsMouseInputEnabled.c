/*
 * XREFs of NtUserIsMouseInputEnabled @ 0x1402B77D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserIsMouseInputEnabled()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v0 = 1LL;
  EnterSharedCrit(0LL, 1LL);
  if ( *(_DWORD *)(W32GetUserSessionState(v2, v1) + 36372) == 1
    || *(_DWORD *)(W32GetUserSessionState(v4, v3) + 36372) == 5 )
  {
    v0 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v0;
}
