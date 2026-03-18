/*
 * XREFs of NtUserPrepareForLogoff @ 0x14024B350
 * Callers:
 *     <none>
 * Callees:
 *     PrepareForLogoff @ 0x140292110 (PrepareForLogoff.c)
 */

__int64 NtUserPrepareForLogoff()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)PrepareForLogoff();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
