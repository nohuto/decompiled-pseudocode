/*
 * XREFs of VerifierExAcquireSharedStarveExclusiveNoReboot @ 0x1406C92C8
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x1406C98F4 (ViResourceAcquireSanityChecks.c)
 */

BOOLEAN __fastcall VerifierExAcquireSharedStarveExclusiveNoReboot(PERESOURCE Resource, BOOLEAN a2)
{
  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  return pXdvExAcquireSharedStarveExclusive(Resource, a2);
}
