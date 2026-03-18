/*
 * XREFs of VerifierKeReleaseMutant @ 0x1406C6368
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 */

LONG __fastcall VerifierKeReleaseMutant(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  VfUtilCheckKernelAddress((unsigned __int64)Mutant, 56LL);
  VfDeadlockReleaseResource(Mutant, (unsigned int)(Abandoned != 0) + 1, KeGetCurrentThread(), retaddr);
  return pXdvKeReleaseMutant(Mutant, Increment, Abandoned, Wait);
}
