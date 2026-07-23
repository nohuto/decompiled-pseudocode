/*
 * XREFs of ViKeInitializeMutexCommon @ 0x140712ED8
 * Callers:
 *     VerifierKeInitializeMutex @ 0x14071202C (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x14071204C (VerifierKeInitializeMutexNoReboot.c)
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutexCommon(void *a1, unsigned int a2)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 56LL);
  return pXdvKeInitializeMutex(a1, a2);
}
