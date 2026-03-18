/*
 * XREFs of VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x1406C9370
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x1406C98F4 (ViResourceAcquireSanityChecks.c)
 */

BOOLEAN __fastcall VerifierExAcquireSharedWaitForExclusiveNoReboot(PERESOURCE Resource, BOOLEAN a2)
{
  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  return pXdvExAcquireSharedWaitForExclusive(Resource, a2);
}
