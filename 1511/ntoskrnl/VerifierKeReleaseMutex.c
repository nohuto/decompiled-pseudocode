/*
 * XREFs of VerifierKeReleaseMutex @ 0x1406C6428
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 */

LONG __fastcall VerifierKeReleaseMutex(PRKMUTEX Mutex, BOOLEAN a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfUtilCheckKernelAddress((unsigned __int64)Mutex, 56LL);
  VfDeadlockReleaseResource(Mutex, 1LL, KeGetCurrentThread(), retaddr);
  return pXdvKeReleaseMutex(Mutex, a2);
}
