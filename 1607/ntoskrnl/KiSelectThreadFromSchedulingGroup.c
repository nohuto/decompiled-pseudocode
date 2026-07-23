/*
 * XREFs of KiSelectThreadFromSchedulingGroup @ 0x140098B9C
 * Callers:
 *     KiSearchForNewThread @ 0x14005B500 (KiSearchForNewThread.c)
 *     KiChooseLowestRankedThread @ 0x140098944 (KiChooseLowestRankedThread.c)
 *     KiSelectThreadFromScbQueue @ 0x14009902C (KiSelectThreadFromScbQueue.c)
 *     KiSelectLowestRankedThread @ 0x1400C856C (KiSelectLowestRankedThread.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x140098BE4 (KiRemoveThreadFromScbQueue.c)
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
