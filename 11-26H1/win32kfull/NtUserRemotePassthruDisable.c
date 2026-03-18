/*
 * XREFs of NtUserRemotePassthruDisable @ 0x1402BA930
 * Callers:
 *     <none>
 * Callees:
 *     RemotePassthruDisable @ 0x14023BB7C (RemotePassthruDisable.c)
 */

__int64 NtUserRemotePassthruDisable()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = RemotePassthruDisable();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
