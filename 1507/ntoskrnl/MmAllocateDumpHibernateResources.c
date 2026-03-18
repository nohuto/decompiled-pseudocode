/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x14056C428
 * Callers:
 *     PopHiberInitializeResources @ 0x140569E78 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140677B20 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 */

__int64 __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax

  result = (__int64)MiReservePtes((__int64)&qword_14034FC70, ((a1 & 0xFFF) != 0) + (unsigned int)(a1 >> 12), a3);
  if ( result )
    return result << 25 >> 16;
  return result;
}
