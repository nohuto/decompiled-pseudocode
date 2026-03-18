/*
 * XREFs of ViKeReleaseSpinLockCommon @ 0x1406C714C
 * Callers:
 *     VerifierKeReleaseSpinLock @ 0x1406C64AC (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x1406C6AD4 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x1406C6B1C (VerifierPortKeReleaseSpinLockNoXdv.c)
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 */

char *__fastcall ViKeReleaseSpinLockCommon(unsigned __int64 a1, unsigned __int8 a2)
{
  unsigned __int8 CurrentIrql; // bl

  VfUtilCheckKernelAddress(a1, 8LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, a1, 0LL);
  return ViKeLowerIrqlSanityChecks(CurrentIrql, a2);
}
