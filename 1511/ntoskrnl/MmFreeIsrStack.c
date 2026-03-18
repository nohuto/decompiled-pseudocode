/*
 * XREFs of MmFreeIsrStack @ 0x140626004
 * Callers:
 *     KiStartDynamicProcessor @ 0x140619E80 (KiStartDynamicProcessor.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MmFreeIndependentPages @ 0x1403C5554 (MmFreeIndependentPages.c)
 */

unsigned __int64 __fastcall MmFreeIsrStack(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *PteAddress; // rax

  v1 = a1 - 24576;
  MmFreeIndependentPages(a1 - 24576, 0x6000uLL);
  PteAddress = (_QWORD *)MiGetPteAddress(v1 - 4096);
  return MiReleasePtes((__int64)&qword_1402FF7B0, PteAddress, 1u);
}
