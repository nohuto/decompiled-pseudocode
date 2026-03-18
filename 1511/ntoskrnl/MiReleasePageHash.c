/*
 * XREFs of MiReleasePageHash @ 0x1401E58D4
 * Callers:
 *     MiDeletePagefile @ 0x14062556C (MiDeletePagefile.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_1402FF7B0,
           (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           (((4LL * a2) & 0xFFF) != 0) + (unsigned int)((4 * (unsigned __int64)a2) >> 12));
}
