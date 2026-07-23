/*
 * XREFs of MmFreeIsrStack @ 0x14065B974
 * Callers:
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 */

__int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  __int64 PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_1403278B0, PteAddress, 1u);
}
