/*
 * XREFs of VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x140718144
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x1407183AC (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot(ULONG_PTR a1)
{
  ViResourceReleaseSanityChecks(a1);
  return pXdvExReleaseResourceAndLeaveCriticalRegion(a1);
}
