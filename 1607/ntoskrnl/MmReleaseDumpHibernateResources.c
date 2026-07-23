/*
 * XREFs of MmReleaseDumpHibernateResources @ 0x14052EF0C
 * Callers:
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     IopLiveDumpFreeMappingResources @ 0x14062711C (IopLiveDumpFreeMappingResources.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 */

__int64 __fastcall MmReleaseDumpHibernateResources(unsigned __int64 a1)
{
  __int64 PteAddress; // rax
  unsigned int v2; // r8d

  PteAddress = MiGetPteAddress(a1);
  return MiReleasePtes((__int64)&qword_1403278B0, PteAddress, v2);
}
