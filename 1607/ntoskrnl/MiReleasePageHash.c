/*
 * XREFs of MiReleasePageHash @ 0x1401FB510
 * Callers:
 *     MiDeletePagefile @ 0x14065AEEC (MiDeletePagefile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReleasePageHash(unsigned __int64 a1, unsigned int a2)
{
  return MiReleasePtes(
           (__int64)&qword_1403278B0,
           ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (((4LL * a2) & 0xFFF) != 0) + (unsigned int)((4 * (unsigned __int64)a2) >> 12));
}
