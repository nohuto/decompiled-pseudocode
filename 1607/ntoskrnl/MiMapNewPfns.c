/*
 * XREFs of MiMapNewPfns @ 0x14065820C
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 */

char __fastcall MiMapNewPfns(unsigned __int64 a1, __int64 a2, __int16 a3, int a4)
{
  __int64 v8; // r8
  unsigned __int64 PteAddress; // rax
  __int64 v10; // rdx

  MiGetPteAddress(48 * a2 - 0x58000000001LL);
  PteAddress = MiGetPteAddress(v8 + 48 * a1);
  MiMakeZeroedPageTables(PteAddress, v10, 41, 4u);
  return MiInitializeDynamicPfns(a1, a2 - a1, a3, a4);
}
