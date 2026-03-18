/*
 * XREFs of MiMapNewPfns @ 0x140622C14
 * Callers:
 *     MiAddPhysicalMemory @ 0x140622114 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 */

__int64 __fastcall MiMapNewPfns(unsigned __int64 a1, __int64 a2, char a3)
{
  __int64 PteAddress; // rbx
  unsigned __int64 v7; // rax

  PteAddress = MiGetPteAddress(48 * a2 - 0x58000000001LL);
  v7 = MiGetPteAddress(48 * a1 - 0x58000000000LL);
  MiMakeZeroedPageTables(v7, PteAddress, 41, 4u);
  return MiInitializeDynamicPfns(a1, a2 - a1, a3);
}
