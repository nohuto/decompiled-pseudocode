/*
 * XREFs of ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C013D9E8
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C025D5F4 (-bInitPrivatePFT@@YAHXZ.c)
 *     bInitFontTables @ 0x1C0378C80 (bInitFontTables.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 */

struct PFT *__fastcall pAllocateAndInitializePFT(int a1)
{
  struct PFT *result; // rax

  result = (struct PFT *)PALLOCMEM2((unsigned int)(8 * a1 + 32), 1952870471LL, 1);
  if ( result )
  {
    *((_DWORD *)result + 7) = 0;
    *((_DWORD *)result + 6) = a1;
  }
  return result;
}
