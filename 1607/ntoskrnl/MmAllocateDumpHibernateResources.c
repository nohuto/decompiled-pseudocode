/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x140548D18
 * Callers:
 *     PopHiberInitializeResources @ 0x14052F804 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140626EF0 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_1403278B0, ((a1 & 0xFFF) != 0) + (unsigned int)(a1 >> 12), a3);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
