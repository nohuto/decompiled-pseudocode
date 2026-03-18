/*
 * XREFs of MiReservePageHash @ 0x14016BA8C
 * Callers:
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 */

__int64 __fastcall MiReservePageHash(unsigned int a1, __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax

  result = (__int64)MiReservePtes(
                      (__int64)&qword_14034FC70,
                      (((4LL * a1) & 0xFFF) != 0) + (unsigned int)((4 * (unsigned __int64)a1) >> 12),
                      a3);
  if ( result )
    return result << 25 >> 16;
  return result;
}
