/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x140712054
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeSemaphore(void *a1, unsigned int a2, unsigned int a3)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 32LL);
  return pXdvKeInitializeSemaphore(a1, a2, a3);
}
