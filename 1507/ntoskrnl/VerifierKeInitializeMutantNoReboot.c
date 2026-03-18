/*
 * XREFs of VerifierKeInitializeMutantNoReboot @ 0x140748274
 * Callers:
 *     <none>
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 */

void __fastcall VerifierKeInitializeMutantNoReboot(PRKMUTANT Mutant, BOOLEAN a2)
{
  VfUtilSynchronizationObjectSanityChecks((char *)Mutant, 56LL);
  pXdvKeInitializeMutant(Mutant, a2);
}
