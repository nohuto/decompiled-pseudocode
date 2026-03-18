/*
 * XREFs of NtUserQueryBSDRWindow @ 0x1402B93E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserQueryBSDRWindow()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rbx

  EnterSharedCrit(0LL, 1LL);
  v4 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v1, v0) + 63480) )
  {
    v3 = *(__int64 **)(W32GetUserSessionState(v3, v2) + 63480);
    v4 = *v3;
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
