/*
 * XREFs of VerifierKeInitializeMutexNoReboot @ 0x1407482E0
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall VerifierKeInitializeMutexNoReboot(PRKMUTEX Mutex, ULONG Level)
{
  VfUtilSynchronizationObjectSanityChecks((char *)Mutex, 56LL);
  pXdvKeInitializeMutex(Mutex, Level);
}
