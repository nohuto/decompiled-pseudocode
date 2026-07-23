/*
 * XREFs of KeInitializeMutant @ 0x14008746C
 * Callers:
 *     NtCreateMutant @ 0x140493EE0 (NtCreateMutant.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
