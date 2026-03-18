/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x14052E9CC
 * Callers:
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x14056C7F8 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x140627068 (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002BA64 (MiGetPteAddress.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_140327870, PteAddress, v2);
}
