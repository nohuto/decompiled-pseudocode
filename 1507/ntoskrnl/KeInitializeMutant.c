/*
 * XREFs of KeInitializeMutant @ 0x1400756B0
 * Callers:
 *     NtCreateMutant @ 0x1404B02E0 (NtCreateMutant.c)
 *     VerifierKeInitializeMutant @ 0x140748210 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutantNoReboot @ 0x140748274 (VerifierKeInitializeMutantNoReboot.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
