/*
 * XREFs of HvInitializeHashLibrary @ 0x14055B9A0
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     SymCryptMarvin32ExpandSeed @ 0x14013DDFC (SymCryptMarvin32ExpandSeed.c)
 *     SymCryptInit @ 0x14013DE10 (SymCryptInit.c)
 */

__int64 HvInitializeHashLibrary()
{
  __int64 v0; // rcx
  unsigned __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  SymCryptInit();
  v2 = 0x82EF4D887A4E55C5uLL;
  return (unsigned int)SymCryptMarvin32ExpandSeed(v0, (int *)&v2) != 0 ? 0xC0000001 : 0;
}
