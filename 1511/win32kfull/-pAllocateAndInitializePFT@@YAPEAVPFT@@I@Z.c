/*
 * XREFs of ?pAllocateAndInitializePFT@@YAPEAVPFT@@I@Z @ 0x1C010C7E4
 * Callers:
 *     ?bInitPrivatePFT@@YAHXZ @ 0x1C025D254 (-bInitPrivatePFT@@YAHXZ.c)
 *     bInitFontTables @ 0x1C0379440 (bInitFontTables.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
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
