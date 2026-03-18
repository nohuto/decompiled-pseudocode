/*
 * XREFs of KeInitializeMutant @ 0x140085B7C
 * Callers:
 *     NtCreateMutant @ 0x140493450 (NtCreateMutant.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
