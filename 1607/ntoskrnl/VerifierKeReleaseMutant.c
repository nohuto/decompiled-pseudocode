/*
 * XREFs of VerifierKeReleaseMutant @ 0x1407123B8
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x140702C74 (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseMutant(unsigned __int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfUtilCheckKernelAddress(a1, 56LL);
  VfDeadlockReleaseResource(a1, (unsigned int)(a3 != 0) + 1, KeGetCurrentThread(), retaddr);
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a3;
  return pXdvKeReleaseMutant(a1, a2, v9, v8);
}
