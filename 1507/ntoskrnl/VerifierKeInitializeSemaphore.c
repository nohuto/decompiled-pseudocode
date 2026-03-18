/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x140748310
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall VerifierKeInitializeSemaphore(PRKSEMAPHORE Semaphore, LONG Count, LONG Limit)
{
  VfUtilSynchronizationObjectSanityChecks((char *)Semaphore, 32LL);
  pXdvKeInitializeSemaphore(Semaphore, Count, Limit);
}
