/*
 * XREFs of MmMarkHiberRange @ 0x1404F6464
 * Callers:
 *     PopHiberInitializeResources @ 0x1404F61A4 (PopHiberInitializeResources.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 */

void __fastcall MmMarkHiberRange(PVOID MemoryMap, unsigned __int64 a2, __int64 a3)
{
  void *PteAddress; // rsi
  __int64 v7; // rax

  PteAddress = (void *)MiGetPteAddress(a2);
  v7 = MiGetPteAddress(a2 + a3);
  PoSetHiberRange(MemoryMap, 2u, PteAddress, v7 - (_QWORD)PteAddress, 0x20657450u);
}
