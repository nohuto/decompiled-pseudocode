/*
 * XREFs of VerifierExAcquireResourceSharedLiteNoReboot @ 0x1406C9220
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x1406C98F4 (ViResourceAcquireSanityChecks.c)
 */

BOOLEAN __fastcall VerifierExAcquireResourceSharedLiteNoReboot(PERESOURCE Resource, BOOLEAN a2)
{
  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  return pXdvExAcquireResourceSharedLite(Resource, a2);
}
