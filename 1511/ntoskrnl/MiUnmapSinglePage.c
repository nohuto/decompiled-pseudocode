/*
 * XREFs of MiUnmapSinglePage @ 0x1400ECCC4
 * Callers:
 *     MiFreeForkMaps @ 0x1400EC940 (MiFreeForkMaps.c)
 *     MiFillCombinePage @ 0x14012B61C (MiFillCombinePage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUnmapSinglePage(unsigned __int64 a1)
{
  return MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
}
