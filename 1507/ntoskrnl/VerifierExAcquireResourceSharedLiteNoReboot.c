/*
 * XREFs of VerifierExAcquireResourceSharedLiteNoReboot @ 0x14074BE20
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x14074C588 (ViResourceAcquireSanityChecks.c)
 */

BOOLEAN __fastcall VerifierExAcquireResourceSharedLiteNoReboot(PERESOURCE Resource, BOOLEAN a2)
{
  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  return pXdvExAcquireResourceSharedLite(Resource, a2);
}
