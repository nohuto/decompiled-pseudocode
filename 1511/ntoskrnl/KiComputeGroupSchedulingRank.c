/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x1400C3C94
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x1400C3838 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400C3AB8 (KiResortScbQueue.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400C44B0 (KiCheckForEffectivePriorityChange.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1401CB44C (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  char v7; // cl
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rax

  if ( *(__int64 *)(a1 + 32) > 0 )
    KiChargeSchedulingGroupCycleTime(a1, a3);
  v6 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(a3 + 112) |= 4u;
  v7 = *(_BYTE *)(a3 + 112);
  v8 = *(_QWORD *)(a3 + 8) + ((KiCycleDivisorShortTerm * (unsigned __int64)v6) >> 7);
  *(_DWORD *)(a3 + 116) = *(_QWORD *)(a3 + 32) / ((KiCycleDivisorLongTerm * (unsigned __int64)v6) >> 7) + 1;
  *(_QWORD *)(a3 + 24) = v8;
  if ( (v7 & 0x12) == 0 && *(_QWORD *)a3 > *(_QWORD *)(a3 + 16) )
    *(_BYTE *)(a3 + 112) = v7 | 2;
  KiCheckForEffectivePriorityChange(a2, a3);
  LOBYTE(v9) = *(_BYTE *)(a3 + 112);
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) != 0 )
      LOBYTE(v9) = KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a2, a3, 1);
    else
      LOBYTE(v9) = KiResortScbQueue((_RTL_RB_TREE *)a2, a3, 1);
  }
  if ( !*(_BYTE *)(a2 + 23321) )
  {
    v9 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6;
    _InterlockedOr64(
      &qword_1402CF8C8[v9],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 23321) = 1;
  }
  return v9;
}
