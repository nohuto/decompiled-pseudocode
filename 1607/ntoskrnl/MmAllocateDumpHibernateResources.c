/*
 * XREFs of MmAllocateDumpHibernateResources @ 0x1405487D8
 * Callers:
 *     PopHiberInitializeResources @ 0x14052F2C4 (PopHiberInitializeResources.c)
 *     PopEnableHiberFile @ 0x14056C7F8 (PopEnableHiberFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140626E3C (IopLiveDumpAllocateMappingResources.c)
 * Callees:
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MmAllocateDumpHibernateResources(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax

  result = MiReservePtes((__int64)&qword_140327870, ((a1 & 0xFFF) != 0) + (unsigned int)(a1 >> 12), a3);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
