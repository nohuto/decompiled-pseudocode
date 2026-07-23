/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x140121494
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KiUpdateGroupSchedulingRank @ 0x1400EB230 (KiUpdateGroupSchedulingRank.c)
 * Callees:
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     KiCheckForEffectivePriorityChange @ 0x140121E0C (KiCheckForEffectivePriorityChange.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14020A34C (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // eax
  char v7; // cl
  unsigned __int64 v8; // r9
  unsigned __int64 i; // rax
  char v10; // r11
  __int64 *v11; // rsi
  __int64 v12; // rax
  _RTL_RB_TREE *v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 j; // rcx
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // dx
  int v18; // r8d
  __int64 v19; // rcx
  __int64 *v20; // rsi
  __int64 v21; // rax
  _RTL_RB_TREE *v22; // rax

  v3 = a3;
  if ( *(__int64 *)(a1 + 32) > 0 )
    KiChargeSchedulingGroupCycleTime(a1, a3);
  v6 = *(_DWORD *)(a1 + 8);
  *(_BYTE *)(v3 + 112) |= 4u;
  v7 = *(_BYTE *)(v3 + 112);
  v8 = *(_QWORD *)(v3 + 8) + ((KiCycleDivisorShortTerm * (unsigned __int64)v6) >> 7);
  *(_DWORD *)(v3 + 116) = *(_QWORD *)(v3 + 32) / ((KiCycleDivisorLongTerm * (unsigned __int64)v6) >> 7) + 1;
  *(_QWORD *)(v3 + 24) = v8;
  if ( (v7 & 0x12) == 0 && *(_QWORD *)v3 > *(_QWORD *)(v3 + 16) )
    *(_BYTE *)(v3 + 112) = v7 | 2;
  LOBYTE(i) = KiCheckForEffectivePriorityChange(a2, v3);
  v10 = *(_BYTE *)(v3 + 112);
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 2) != 0 )
    {
      do
      {
        v11 = (__int64 *)(v3 + 392);
        v12 = *(_QWORD *)(v3 + 392);
        v13 = (_RTL_RB_TREE *)(v12 + 376);
        if ( !v12 )
          v13 = (_RTL_RB_TREE *)(a2 + 22768);
        *(_QWORD *)(v3 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v3 + 64);
        *(_BYTE *)(v3 + 112) &= ~1u;
        LOBYTE(i) = RtlRbRemoveNode(v13, (PRTL_BALANCED_NODE)(v3 + 88));
        v3 = *v11;
      }
      while ( *v11 && (*(_BYTE *)(v3 + 112) & 1) != 0 && !*(_QWORD *)(v3 + 376) && !*(_WORD *)(v3 + 114) );
      goto LABEL_5;
    }
    i = v3 + 88;
    v14 = *(_QWORD *)(v3 + 96);
    if ( v14 )
    {
      for ( i = *(_QWORD *)v14; i; i = *(_QWORD *)i )
        v14 = i;
    }
    else
    {
      for ( j = *(_QWORD *)(v3 + 104); ; j = *(_QWORD *)(v14 + 16) )
      {
        v14 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 || *(_QWORD *)v14 == i )
          break;
        i = v14;
      }
    }
    if ( !v14 )
      goto LABEL_5;
    LODWORD(i) = *(_DWORD *)(v3 + 116) - *(_DWORD *)(v14 + 28);
    if ( !(_DWORD)i )
    {
      v16 = *(_WORD *)(v3 + 114);
      if ( v16 )
      {
        v17 = *(_WORD *)(v14 + 26);
        _BitScanReverse((unsigned int *)&v18, v16);
        LODWORD(i) = 0;
        if ( v17 )
          _BitScanReverse((unsigned int *)&i, v17);
        LODWORD(i) = i - v18;
      }
      else
      {
        if ( !*(_DWORD *)(v3 + 116) )
        {
          i = *(_QWORD *)(v14 - 88);
          if ( *(_QWORD *)v3 <= i )
            goto LABEL_5;
          goto LABEL_38;
        }
        LODWORD(i) = 1;
      }
    }
    if ( (int)i <= 0 )
      goto LABEL_5;
LABEL_38:
    v19 = v3;
    do
    {
      v20 = (__int64 *)(v19 + 392);
      v21 = *(_QWORD *)(v19 + 392);
      if ( v21 )
        v22 = (_RTL_RB_TREE *)(v21 + 376);
      else
        v22 = (_RTL_RB_TREE *)(a2 + 22768);
      *(_BYTE *)(v19 + 112) &= ~1u;
      RtlRbRemoveNode(v22, (PRTL_BALANCED_NODE)(v19 + 88));
      v19 = *v20;
    }
    while ( *v20 && (*(_BYTE *)(v19 + 112) & 1) != 0 && !*(_QWORD *)(v19 + 376) && !*(_WORD *)(v19 + 114) );
    LOBYTE(i) = KiInsertSchedulingGroupQueue((_RTL_RB_TREE *)a2, v3, 0);
  }
LABEL_5:
  if ( !*(_BYTE *)(a2 + 23321) )
  {
    i = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6;
    _InterlockedOr64(
      &qword_14031E928[i],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 23321) = 1;
  }
  return i;
}
