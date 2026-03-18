/*
 * XREFs of VerifierExReleaseResourceAndLeavePriorityRegion @ 0x14074C3B4
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x14074C630 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeavePriorityRegion(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return pXdvExReleaseResourceAndLeavePriorityRegion(a1);
}
