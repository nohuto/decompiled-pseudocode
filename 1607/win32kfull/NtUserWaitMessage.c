/*
 * XREFs of NtUserWaitMessage @ 0x1C0112420
 * Callers:
 *     <none>
 * Callees:
 *     xxxWaitMessageEx @ 0x1C00DF5E4 (xxxWaitMessageEx.c)
 */

__int64 NtUserWaitMessage()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  v0 = (int)xxxWaitMessageEx(0x3CFFu, 0, 0LL);
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
