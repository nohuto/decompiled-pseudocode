/*
 * XREFs of VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x14074C394
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x14074C630 (ViResourceReleaseSanityChecks.c)
 */

void __fastcall VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot(PERESOURCE Resource)
{
  ViResourceReleaseSanityChecks((ULONG_PTR)Resource);
  pXdvExReleaseResourceAndLeaveCriticalRegion(Resource);
}
