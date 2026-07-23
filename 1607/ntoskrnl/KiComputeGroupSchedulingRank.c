/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x1400CE1A4
 * Callers:
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiRemoveSchedulingGroupQueue @ 0x140098C78 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x140098EDC (KiResortScbQueue.c)
 *     KiCheckForEffectivePriorityChange @ 0x1400A53EC (KiCheckForEffectivePriorityChange.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1400CE2C8 (KiCheckMaxOverQuotaTransition.c)
 */

char __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned __int64 v7; // r9
  bool v8; // r8
  bool v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned int v12; // ecx
  volatile signed __int32 *v13; // rax
  unsigned __int64 v14; // r8

  v6 = KiCheckMaxOverQuotaTransition(a3, a1);
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(_QWORD *)a3 >= v7;
  v9 = v7 != *(_QWORD *)(a3 + 16);
  if ( (*(_BYTE *)(a3 + 112) & 0x10) != 0 && v8 || (*(_BYTE *)(a3 + 112) & 0x10) == 0 && (v6 || v9 && v8) )
  {
    v11 = *(unsigned int *)(a1 + 8);
    v12 = *(_QWORD *)(a3 + 32) / ((unsigned __int64)(KiCycleDivisorLongTerm * v11) >> 7) + 1;
    v13 = *(volatile signed __int32 **)(a3 + 120);
    *(_DWORD *)(a3 + 116) = v12;
    if ( v13 )
      _InterlockedExchangeAdd(v13, v12);
    v14 = KiCycleDivisorShortTerm * v11;
    *(_BYTE *)(a3 + 112) |= 4u;
    *(_QWORD *)(a3 + 24) = *(_QWORD *)(a3 + 8) + (v14 >> 7);
    KiCheckForEffectivePriorityChange(a2, a3);
  }
  LOBYTE(v10) = *(_BYTE *)(a3 + 112);
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 2) != 0 )
      LOBYTE(v10) = KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a2, a3, 1);
    else
      LOBYTE(v10) = KiResortScbQueue((_RTL_RB_TREE *)a2, a3, 1);
  }
  if ( (*(_BYTE *)(a3 + 112) & 4) != 0 && !*(_BYTE *)(a2 + 23321) )
  {
    v10 = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6;
    _InterlockedOr64(
      &qword_1402F6C18[v10],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 23321) = 1;
  }
  return v10;
}
