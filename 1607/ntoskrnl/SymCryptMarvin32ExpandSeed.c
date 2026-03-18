/*
 * XREFs of SymCryptMarvin32ExpandSeed @ 0x14013DDFC
 * Callers:
 *     HvInitializeHashLibrary @ 0x14055B9A0 (HvInitializeHashLibrary.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32ExpandSeed(__int64 a1, int *a2)
{
  HvSymcryptSeed = *a2;
  dword_140329E94 = a2[1];
  return 0LL;
}
