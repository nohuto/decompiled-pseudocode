/*
 * XREFs of VerifierExReleaseResourceLiteNoReboot @ 0x1406C97B4
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x1406C999C (ViResourceReleaseSanityChecks.c)
 */

void __fastcall VerifierExReleaseResourceLiteNoReboot(PERESOURCE Resource)
{
  ViResourceReleaseSanityChecks((ULONG_PTR)Resource);
  pXdvExReleaseResourceLite(Resource);
}
