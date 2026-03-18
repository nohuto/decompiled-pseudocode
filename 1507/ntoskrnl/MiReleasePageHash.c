/*
 * XREFs of MiReleasePageHash @ 0x140231F90
 * Callers:
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_14034FC70,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (((4LL * a2) & 0xFFF) != 0) + (unsigned int)((4 * (unsigned __int64)a2) >> 12));
}
