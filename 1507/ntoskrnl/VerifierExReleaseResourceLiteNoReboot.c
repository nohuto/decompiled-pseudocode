/*
 * XREFs of VerifierExReleaseResourceLiteNoReboot @ 0x14074C400
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x14074C630 (ViResourceReleaseSanityChecks.c)
 */

void __fastcall VerifierExReleaseResourceLiteNoReboot(PERESOURCE Resource)
{
  ViResourceReleaseSanityChecks((ULONG_PTR)Resource);
  pXdvExReleaseResourceLite(Resource);
}
