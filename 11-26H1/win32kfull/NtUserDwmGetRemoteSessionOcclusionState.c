/*
 * XREFs of NtUserDwmGetRemoteSessionOcclusionState @ 0x1402B1830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserDwmGetRemoteSessionOcclusionState(__int64 a1, __int64 a2)
{
  return *(int *)(W32GetUserSessionState(a1, a2) + 68852);
}
