/*
 * XREFs of VerifierExReleaseResourceForThreadLiteNoReboot @ 0x14074C3D4
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x14074C630 (ViResourceReleaseSanityChecks.c)
 */

void __fastcall VerifierExReleaseResourceForThreadLiteNoReboot(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  ViResourceReleaseSanityChecks((ULONG_PTR)Resource);
  pXdvExReleaseResourceForThreadLite(Resource, ResourceThreadId);
}
