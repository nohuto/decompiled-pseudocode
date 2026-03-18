/*
 * XREFs of MiReservePageHash @ 0x140142DF0
 * Callers:
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x140568D38 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x1400DDB50 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1, __int64 a2, unsigned __int64 a3)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_140327870,
             (((4LL * a1) & 0xFFF) != 0) + (unsigned int)((4 * (unsigned __int64)a1) >> 12),
             a3);
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
