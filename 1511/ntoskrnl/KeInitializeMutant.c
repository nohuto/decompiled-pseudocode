/*
 * XREFs of KeInitializeMutant @ 0x14007CCB8
 * Callers:
 *     NtCreateMutant @ 0x14042D830 (NtCreateMutant.c)
 *     ViKeInitializeMutantCommon @ 0x1406C6E58 (ViKeInitializeMutantCommon.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
