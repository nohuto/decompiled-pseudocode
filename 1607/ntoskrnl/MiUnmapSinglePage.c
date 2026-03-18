/*
 * XREFs of MiUnmapSinglePage @ 0x14010C5D4
 * Callers:
 *     MiFreeForkMaps @ 0x14010C52C (MiFreeForkMaps.c)
 *     MiFillCombinePage @ 0x1401F9B68 (MiFillCombinePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_140327870, ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1u);
}
