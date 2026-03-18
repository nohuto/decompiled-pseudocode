/*
 * XREFs of SymCryptMarvin32ExpandSeed @ 0x140130494
 * Callers:
 *     HvInitializeHashLibrary @ 0x14051CD08 (HvInitializeHashLibrary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32ExpandSeed(__int64 a1, int *a2)
{
  HvSymcryptSeed = *a2;
  dword_140307194 = a2[1];
  return 0LL;
}
