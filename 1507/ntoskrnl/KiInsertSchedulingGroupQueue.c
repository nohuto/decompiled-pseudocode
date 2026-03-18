/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x1400EDDBC
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400D3690 (KiRemoveThreadFromScbQueue.c)
 *     KiUpdateGroupSchedulingRank @ 0x1400EB230 (KiUpdateGroupSchedulingRank.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400ECD50 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToScbQueue @ 0x1400EDC94 (KiAddThreadToScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x140121494 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x1401217F0 (KeSetSchedulingGroupRankBias.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140128E58 (KiRecomputeGroupSchedulingRank.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400F70F0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  char v4; // di
  __int64 **v6; // rcx
  __int64 *v7; // rdx
  __int64 result; // rax
  int v9; // r9d
  int v10; // eax
  unsigned __int16 v11; // ax
  int v12; // r10d
  int v13; // eax
  __int64 *v14; // rax

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = *(_QWORD *)(a2 + 392);
  v4 = a3;
  if ( v3 )
    v6 = (__int64 **)(v3 + 376);
  else
    v6 = (__int64 **)(a1 + 22768);
  v7 = *v6;
  LOBYTE(a3) = 0;
  if ( !*v6 )
    goto LABEL_4;
  v9 = *(_DWORD *)(a2 + 116);
  while ( 1 )
  {
    v10 = v9 - *((_DWORD *)v7 + 7);
    if ( v9 != *((_DWORD *)v7 + 7) )
      goto LABEL_14;
    v11 = *(_WORD *)(a2 + 114);
    if ( !v11 )
      break;
    a3 = *((unsigned __int16 *)v7 + 13);
    _BitScanReverse((unsigned int *)&v12, v11);
    v13 = 0;
    if ( (_WORD)a3 )
      _BitScanReverse((unsigned int *)&v13, (unsigned __int16)a3);
    v10 = v13 - v12;
LABEL_14:
    if ( v10 >= 0 )
      goto LABEL_17;
LABEL_15:
    v14 = (__int64 *)*v7;
    if ( !*v7 )
    {
      LOBYTE(a3) = 0;
      goto LABEL_4;
    }
LABEL_19:
    v7 = v14;
  }
  if ( v9 )
  {
    v10 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)a2 <= (unsigned __int64)*(v7 - 11) )
    goto LABEL_15;
LABEL_17:
  v14 = (__int64 *)v7[1];
  if ( v14 )
    goto LABEL_19;
  LOBYTE(a3) = 1;
LABEL_4:
  result = RtlRbInsertNodeEx(v6, v7, a3, a2 + 88);
  if ( v4 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
