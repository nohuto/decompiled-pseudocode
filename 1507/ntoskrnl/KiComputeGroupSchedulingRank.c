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

void __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v6; // eax
  char v7; // cl
  unsigned __int64 v8; // r9
  char v9; // r11
  __int64 *v10; // rsi
  __int64 v11; // rax
  unsigned __int64 *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  _QWORD *i; // rax
  __int64 j; // rcx
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned __int16 v19; // dx
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rcx
  __int64 *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 *v25; // rax

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
  KiCheckForEffectivePriorityChange(a2, v3);
  v9 = *(_BYTE *)(v3 + 112);
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      do
      {
        v10 = (__int64 *)(v3 + 392);
        v11 = *(_QWORD *)(v3 + 392);
        v12 = (unsigned __int64 *)(v11 + 376);
        if ( !v11 )
          v12 = (unsigned __int64 *)(a2 + 22768);
        *(_QWORD *)(v3 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v3 + 64);
        *(_BYTE *)(v3 + 112) &= ~1u;
        RtlRbRemoveNode(v12, (unsigned __int64 *)(v3 + 88));
        v3 = *v10;
      }
      while ( *v10 && (*(_BYTE *)(v3 + 112) & 1) != 0 && !*(_QWORD *)(v3 + 376) && !*(_WORD *)(v3 + 114) );
      goto LABEL_5;
    }
    v13 = v3 + 88;
    v14 = *(_QWORD *)(v3 + 96);
    if ( v14 )
    {
      for ( i = *(_QWORD **)v14; i; i = (_QWORD *)*i )
        v14 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(v3 + 104); ; j = *(_QWORD *)(v14 + 16) )
      {
        v14 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 || *(_QWORD *)v14 == v13 )
          break;
        v13 = v14;
      }
    }
    if ( !v14 )
      goto LABEL_5;
    v17 = *(_DWORD *)(v3 + 116) - *(_DWORD *)(v14 + 28);
    if ( !v17 )
    {
      v18 = *(_WORD *)(v3 + 114);
      if ( v18 )
      {
        v19 = *(_WORD *)(v14 + 26);
        _BitScanReverse((unsigned int *)&v20, v18);
        v21 = 0;
        if ( v19 )
          _BitScanReverse((unsigned int *)&v21, v19);
        v17 = v21 - v20;
      }
      else
      {
        if ( !*(_DWORD *)(v3 + 116) )
        {
          if ( *(_QWORD *)v3 <= *(_QWORD *)(v14 - 88) )
            goto LABEL_5;
          goto LABEL_38;
        }
        v17 = 1;
      }
    }
    if ( v17 <= 0 )
      goto LABEL_5;
LABEL_38:
    v22 = v3;
    do
    {
      v23 = (__int64 *)(v22 + 392);
      v24 = *(_QWORD *)(v22 + 392);
      if ( v24 )
        v25 = (unsigned __int64 *)(v24 + 376);
      else
        v25 = (unsigned __int64 *)(a2 + 22768);
      *(_BYTE *)(v22 + 112) &= ~1u;
      RtlRbRemoveNode(v25, (unsigned __int64 *)(v22 + 88));
      v22 = *v23;
    }
    while ( *v23 && (*(_BYTE *)(v22 + 112) & 1) != 0 && !*(_QWORD *)(v22 + 376) && !*(_WORD *)(v22 + 114) );
    KiInsertSchedulingGroupQueue(a2, v3, 0LL);
  }
LABEL_5:
  if ( !*(_BYTE *)(a2 + 23321) )
  {
    _InterlockedOr64(
      &qword_14031E928[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] >> 6],
      1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a2 + 36)] & 0x3F));
    *(_BYTE *)(a2 + 23321) = 1;
  }
}
