/*
 * XREFs of VerifierExReleaseResourceAndLeavePriorityRegion @ 0x140718164
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x1407183AC (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeavePriorityRegion(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return pXdvExReleaseResourceAndLeavePriorityRegion(a1);
}
