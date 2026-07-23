/*
 * XREFs of ViKeInitializeMutantCommon @ 0x140712EA8
 * Callers:
 *     VerifierKeInitializeMutant @ 0x140711FD0 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x140712024 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall ViKeInitializeMutantCommon(void *a1, char a2)
{
  __int64 v4; // rdx

  VfUtilSynchronizationObjectSanityChecks(a1, 56LL);
  LOBYTE(v4) = a2;
  return pXdvKeInitializeMutant(a1, v4);
}
