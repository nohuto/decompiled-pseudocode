/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionState @ 0x1C0132A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserDwmGetRemoteSessionOcclusionState()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx

  EnterCrit(1LL);
  v0 = gbFreezeScreenUpdates;
  UserSessionSwitchLeaveCrit(v2, v1);
  return v0;
}
