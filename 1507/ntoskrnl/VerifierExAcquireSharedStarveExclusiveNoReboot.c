/*
 * XREFs of VerifierExAcquireSharedStarveExclusiveNoReboot @ 0x14074BEC8
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x14074C588 (ViResourceAcquireSanityChecks.c)
 */

BOOLEAN __fastcall VerifierExAcquireSharedStarveExclusiveNoReboot(PERESOURCE Resource, BOOLEAN a2)
{
  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  return pXdvExAcquireSharedStarveExclusive(Resource, a2);
}
