/*
 * XREFs of SymCryptMarvin32ExpandSeed @ 0x140165144
 * Callers:
 *     HvInitializeHashLibrary @ 0x1405A2AA8 (HvInitializeHashLibrary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32ExpandSeed(__int64 a1, int *a2)
{
  HvSymcryptSeed = *a2;
  dword_140357454 = a2[1];
  return 0LL;
}
