/*
 * XREFs of NtUserRemoteShadowCleanup @ 0x1402BAB50
 * Callers:
 *     <none>
 * Callees:
 *     RemoteShadowCleanup @ 0x1400F6EE4 (RemoteShadowCleanup.c)
 */

__int64 __fastcall NtUserRemoteShadowCleanup(volatile void *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = RemoteShadowCleanup(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
