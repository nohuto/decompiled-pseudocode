/*
 * XREFs of NtUserRemoteShadowStart @ 0x1402BABE0
 * Callers:
 *     <none>
 * Callees:
 *     RemoteShadowStart @ 0x1402D2ACC (RemoteShadowStart.c)
 */

__int64 __fastcall NtUserRemoteShadowStart(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = RemoteShadowStart(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
