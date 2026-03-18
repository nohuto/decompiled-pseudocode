/*
 * XREFs of KeSelectNodeForAffinity @ 0x1400B079C
 * Callers:
 *     KiSetIdealNodeProcessByGroup @ 0x14007D128 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x1400CA9BC (KiSetAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400F2060 (KiComputeThreadAffinity.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectNodeForAffinity(__int64 a1)
{
  unsigned __int16 v2; // cx
  unsigned int v3; // r9d
  __int64 v4; // r8

  if ( KeNumberNodes == 1 )
    return KeNodeBlock[0];
  v2 = KiProcessNodeSeed++;
  if ( (unsigned __int16)KiProcessNodeSeed >= (unsigned __int16)KeNumberNodes )
    KiProcessNodeSeed = 0;
  v3 = 0;
  do
  {
    if ( v2 >= (unsigned __int16)KeNumberNodes )
      v2 = 0;
    v4 = KeNodeBlock[v2];
    if ( *(_WORD *)(v4 + 144) == *(_WORD *)(a1 + 8) && (*(_QWORD *)(v4 + 136) & *(_QWORD *)a1) != 0LL )
      return KeNodeBlock[v2];
    ++v3;
    ++v2;
  }
  while ( v3 < (unsigned __int16)KeNumberNodes );
  return 0LL;
}
