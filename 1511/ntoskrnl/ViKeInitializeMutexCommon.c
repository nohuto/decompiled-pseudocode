/*
 * XREFs of ViKeInitializeMutexCommon @ 0x1406C6E88
 * Callers:
 *     VerifierKeInitializeMutex @ 0x1406C5FDC (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x1406C5FFC (VerifierKeInitializeMutexNoReboot.c)
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall ViKeInitializeMutexCommon(PRKMUTEX Mutex, ULONG Level)
{
  VfUtilSynchronizationObjectSanityChecks(Mutex, 56LL);
  pXdvKeInitializeMutex(Mutex, Level);
}
