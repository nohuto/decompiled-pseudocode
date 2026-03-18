/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x1404F5948
 * Callers:
 *     PopFreeHiberContext @ 0x1404F59D4 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x1405FD3F4 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *PteAddress; // rax

  v2 = ((a2 & 0xFFF) != 0) + (unsigned int)(a2 >> 12);
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_1402FF7B0, PteAddress, v2);
}
