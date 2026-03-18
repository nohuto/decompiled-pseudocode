/*
 * XREFs of MiReservePageHash @ 0x14013A154
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405384C0 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_1402FF7B0,
             (((4LL * a1) & 0xFFF) != 0) + (unsigned int)((4 * (unsigned __int64)a1) >> 12),
             a3);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
