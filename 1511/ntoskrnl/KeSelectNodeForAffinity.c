/*
 * XREFs of KeSelectNodeForAffinity @ 0x140096888
 * Callers:
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     KiSetIdealNodeProcessByGroup @ 0x140093758 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x140095508 (KiSetAffinityThread.c)
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectNodeForAffinity(__int64 a1)
{
  unsigned __int16 v3; // cx
  unsigned int v4; // r9d
  __int64 v5; // r8

  if ( KeNumberNodes == 1 )
    return KeNodeBlock[0];
  v3 = KiProcessNodeSeed++;
  if ( (unsigned __int16)KiProcessNodeSeed >= (unsigned __int16)KeNumberNodes )
    KiProcessNodeSeed = 0;
  v4 = 0;
  do
  {
    if ( v3 >= (unsigned __int16)KeNumberNodes )
      v3 = 0;
    v5 = KeNodeBlock[v3];
    if ( *(_WORD *)(v5 + 144) == *(_WORD *)(a1 + 8) && (*(_QWORD *)(v5 + 136) & *(_QWORD *)a1) != 0LL )
      return KeNodeBlock[v3];
    ++v4;
    ++v3;
  }
  while ( v4 < (unsigned __int16)KeNumberNodes );
  return 0LL;
}
