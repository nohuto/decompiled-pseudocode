/*
 * XREFs of VerifierExAcquireSharedWaitForExclusiveNoReboot @ 0x14074BF70
 * Callers:
 *     <none>
 * Callees:
 *     ViResourceAcquireSanityChecks @ 0x14074C588 (ViResourceAcquireSanityChecks.c)
 */

BOOLEAN __fastcall VerifierExAcquireSharedWaitForExclusiveNoReboot(PERESOURCE Resource, BOOLEAN a2)
{
  ViResourceAcquireSanityChecks((ULONG_PTR)Resource);
  return pXdvExAcquireSharedWaitForExclusive(Resource, a2);
}
