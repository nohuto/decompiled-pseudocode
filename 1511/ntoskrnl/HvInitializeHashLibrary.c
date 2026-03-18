/*
 * XREFs of HvInitializeHashLibrary @ 0x14051CD08
 * Callers:
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     SymCryptMarvin32ExpandSeed @ 0x140130494 (SymCryptMarvin32ExpandSeed.c)
 *     SymCryptInit @ 0x1401304A8 (SymCryptInit.c)
 */

__int64 HvInitializeHashLibrary()
{
  __int64 v0; // rcx
  unsigned __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  SymCryptInit();
  v2 = 0x82EF4D887A4E55C5uLL;
  return (unsigned int)SymCryptMarvin32ExpandSeed(v0, (int *)&v2) != 0 ? 0xC0000001 : 0;
}
