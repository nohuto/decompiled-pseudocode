/*
 * XREFs of NtUserRemoteReconnect @ 0x1402BA9B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 */

__int64 __fastcall NtUserRemoteReconnect(void *Src)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 0LL);
  LODWORD(Src) = xxxRemoteReconnect(Src);
  UserSessionSwitchLeaveCrit(v2);
  return (unsigned int)Src;
}
