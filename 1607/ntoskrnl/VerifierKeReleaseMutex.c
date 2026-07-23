/*
 * XREFs of VerifierKeReleaseMutex @ 0x140712478
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutex(unsigned __int64 a1, char a2)
{
  __int64 v4; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfUtilCheckKernelAddress(a1, 56LL);
  VfDeadlockReleaseResource(a1, 1LL, KeGetCurrentThread(), retaddr);
  LOBYTE(v4) = a2;
  return pXdvKeReleaseMutex(a1, v4);
}
