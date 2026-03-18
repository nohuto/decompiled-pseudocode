/*
 * XREFs of VerifierKeReleaseMutexNoReboot @ 0x1406C6474
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

LONG __fastcall VerifierKeReleaseMutexNoReboot(PRKMUTEX Mutex, BOOLEAN a2)
{
  VfUtilCheckKernelAddress((unsigned __int64)Mutex, 56LL);
  return pXdvKeReleaseMutex(Mutex, a2);
}
