/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x1404FA284
 * Callers:
 *     PopHiberInitializeResources @ 0x1404F61A4 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1405FD1C8 (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_1402FF7B0, ((a1 & 0xFFF) != 0) + (unsigned int)(a1 >> 12), a3);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
