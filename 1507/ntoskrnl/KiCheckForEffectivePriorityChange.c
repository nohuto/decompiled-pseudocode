/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x140121E0C
 * Callers:
 *     KiComputeGroupSchedulingRank @ 0x140121494 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x1401217F0 (KeSetSchedulingGroupRankBias.c)
 *     KiUpdateCpuTargetByRate @ 0x140121BF4 (KiUpdateCpuTargetByRate.c)
 *     KiUpdateCpuTargetByWeight @ 0x140121EA8 (KiUpdateCpuTargetByWeight.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r8
  char v5; // cl
  __int64 v6; // rdx
  __int64 v7; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v9; // r8

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1;
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v2 + 104);
  if ( v4 )
  {
    for ( v4 += *(unsigned int *)(a1 + 1624); v4; v4 = *(_QWORD *)(v4 + 392) )
    {
      if ( v4 == a2 )
        goto LABEL_9;
    }
  }
  if ( v4 == a2 )
  {
LABEL_9:
    if ( (*(_BYTE *)(v2 + 2) & 4) != 0 )
    {
      if ( *(char *)(v2 + 195) >= 16
        || !*(_QWORD *)(v2 + 104)
        || (v6 = *(_QWORD *)(v2 + 104)) == 0
        || (v7 = *(unsigned int *)(a1 + 1624) + v6) == 0
        || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v2, v7, 0),
            v5 = v9 + 1,
            !ThreadEffectiveRankNonZero) )
      {
        v5 = *(_BYTE *)(v2 + 195);
      }
    }
    else
    {
      v5 = *(_BYTE *)(v2 + 195);
    }
    **(_BYTE **)(v3 + 56) = v5;
  }
}
