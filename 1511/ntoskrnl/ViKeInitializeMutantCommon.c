/*
 * XREFs of ViKeInitializeMutantCommon @ 0x1406C6E58
 * Callers:
 *     VerifierKeInitializeMutant @ 0x1406C5F80 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x1406C5FD4 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall ViKeInitializeMutantCommon(PRKMUTANT Mutant, BOOLEAN a2)
{
  VfUtilSynchronizationObjectSanityChecks(Mutant, 56LL);
  pXdvKeInitializeMutant(Mutant, a2);
}
