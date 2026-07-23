/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x1400A53EC
 * Callers:
 *     KiSwapThread @ 0x14005AD80 (KiSwapThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400A50A8 (KeSetSchedulingGroupRankBias.c)
 *     KiUpdateCpuTargetByRate @ 0x1400A51E8 (KiUpdateCpuTargetByRate.c)
 *     KiUpdateCpuTargetByWeight @ 0x1400A547C (KiUpdateCpuTargetByWeight.c)
 *     KiComputeGroupSchedulingRank @ 0x1400CE1A4 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  char EffectivePriorityThread; // al

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 104);
  if ( v4 )
  {
    for ( v4 += *(unsigned int *)(a1 + 1624); v4; v4 = *(_QWORD *)(v4 + 408) )
    {
      if ( v4 == a2 )
        goto LABEL_10;
    }
  }
  if ( v4 == a2 )
  {
LABEL_10:
    if ( (*(_BYTE *)(v3 + 2) & 4) != 0 )
      EffectivePriorityThread = KiQueryEffectivePriorityThread(v3, a1);
    else
      EffectivePriorityThread = *(_BYTE *)(v3 + 195);
    **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
  }
}
