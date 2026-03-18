/*
 * XREFs of NtUserClearWakeMask @ 0x1402B02B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxClearWakeMask @ 0x140022640 (xxxClearWakeMask.c)
 */

__int64 NtUserClearWakeMask()
{
  __int64 v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  v1 = (int)xxxClearWakeMask(v0);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
