/*
 * XREFs of KiSelectThreadFromSchedulingGroup @ 0x14009939C
 * Callers:
 *     KiSearchForNewThread @ 0x14005B980 (KiSearchForNewThread.c)
 *     KiChooseLowestRankedThread @ 0x140099144 (KiChooseLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14009982C (KiSelectThreadFromScbQueue.c)
 *     KiSelectLowestRankedThread @ 0x1400CA6CC (KiSelectLowestRankedThread.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x1400993E4 (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiSelectThreadFromSchedulingGroup(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned int v5; // r9d
  __int64 v6; // r9

  v3 = 0LL;
  v4 = *(unsigned __int16 *)(a2 + 114) >> a3;
  if ( v4 )
  {
    _BitScanReverse(&v5, v4);
    v6 = a3 + v5;
    v3 = *(_QWORD *)(a2 + 16LL * (unsigned int)v6 + 136) - 216LL;
    KiRemoveThreadFromScbQueue(a1, a2, v3, v6);
  }
  return v3;
}
