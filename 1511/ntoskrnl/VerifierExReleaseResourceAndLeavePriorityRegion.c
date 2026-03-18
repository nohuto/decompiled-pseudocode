/*
 * XREFs of VerifierExReleaseResourceAndLeavePriorityRegion @ 0x1406C9768
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x1406C999C (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeavePriorityRegion(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return pXdvExReleaseResourceAndLeavePriorityRegion(a1);
}
