/*
 * XREFs of MiMapNewPfns @ 0x140658128
 * Callers:
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 *     MiMakeZeroedPageTables @ 0x1401022B4 (MiMakeZeroedPageTables.c)
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
