/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x1406C6004
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall VerifierKeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  VfUtilSynchronizationObjectSanityChecks(Semaphore, 32LL);
  pXdvKeInitializeSemaphore(Semaphore, Count, Limit);
}
