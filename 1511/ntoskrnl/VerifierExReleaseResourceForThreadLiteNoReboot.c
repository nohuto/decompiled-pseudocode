/*
 * XREFs of VerifierExReleaseResourceForThreadLiteNoReboot @ 0x1406C9788
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceReleaseSanityChecks @ 0x1406C999C (ViResourceReleaseSanityChecks.c)
 */

void __fastcall VerifierExReleaseResourceForThreadLiteNoReboot(PERESOURCE Resource, ERESOURCE_THREAD ResourceThreadId)
{
  ViResourceReleaseSanityChecks((ULONG_PTR)Resource);
  pXdvExReleaseResourceForThreadLite(Resource, ResourceThreadId);
}
