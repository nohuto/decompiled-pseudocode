/*
 * XREFs of MiUnmapSinglePage @ 0x14010A354
 * Callers:
 *     MiFreeForkMaps @ 0x14010A2AC (MiFreeForkMaps.c)
 *     MiFillCombinePage @ 0x1401F9994 (MiFillCombinePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_1403278B0, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u);
}
