/*
 * XREFs of NtUserQueryBSDRWindow @ 0x1C021EE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserQueryBSDRWindow()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx

  EnterCrit(1LL);
  v2 = 0LL;
  if ( gspwndBSDR )
    v2 = *(_QWORD *)gspwndBSDR;
  UserSessionSwitchLeaveCrit(v1, v0);
  return v2;
}
