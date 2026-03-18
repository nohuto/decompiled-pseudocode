/*
 * XREFs of VerifierKeReleaseMutantNoReboot @ 0x1406C63D8
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilCheckKernelAddress @ 0x1406B7454 (VfUtilCheckKernelAddress.c)
 */

LONG __fastcall VerifierKeReleaseMutantNoReboot(PRKMUTANT Mutant, KPRIORITY Increment, BOOLEAN Abandoned, BOOLEAN Wait)
{
  VfUtilCheckKernelAddress((unsigned __int64)Mutant, 56LL);
  return pXdvKeReleaseMutant(Mutant, Increment, Abandoned, Wait);
}
