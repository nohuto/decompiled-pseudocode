/*
 * XREFs of VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot @ 0x1406C9748
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x1406C999C (ViResourceReleaseSanityChecks.c)
 */

void __fastcall VerifierExReleaseResourceAndLeaveCriticalRegionNoReboot(PERESOURCE Resource)
{
  ViResourceReleaseSanityChecks((ULONG_PTR)Resource);
  pXdvExReleaseResourceAndLeaveCriticalRegion(Resource);
}
