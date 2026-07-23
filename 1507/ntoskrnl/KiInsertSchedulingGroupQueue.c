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

BOOLEAN __fastcall KiInsertSchedulingGroupQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _RTL_RB_TREE *v6; // rcx
  _RTL_BALANCED_NODE *Root; // rdx
  BOOLEAN v8; // r8
  BOOLEAN result; // al
  int v10; // r9d
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r8
  int v14; // r10d
  int v15; // eax
  _RTL_BALANCED_NODE *v16; // rax

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = *(_QWORD *)(a2 + 392);
  if ( v3 )
    v6 = (_RTL_RB_TREE *)(v3 + 376);
  else
    v6 = a1 + 1423;
  Root = v6->Root;
  v8 = 0;
  if ( !v6->Root )
    goto LABEL_4;
  v10 = *(_DWORD *)(a2 + 116);
  while ( 1 )
  {
    v11 = v10 - HIDWORD(Root[1].Left);
    if ( v10 != HIDWORD(Root[1].Left) )
      goto LABEL_14;
    v12 = *(_WORD *)(a2 + 114);
    if ( !v12 )
      break;
    v13 = WORD1(Root[1].Left);
    _BitScanReverse((unsigned int *)&v14, v12);
    v15 = 0;
    if ( v13 )
      _BitScanReverse((unsigned int *)&v15, v13);
    v11 = v15 - v14;
LABEL_14:
    if ( v11 >= 0 )
      goto LABEL_17;
LABEL_15:
    v16 = Root->Children[0];
    if ( !Root->Children[0] )
    {
      v8 = 0;
      goto LABEL_4;
    }
LABEL_19:
    Root = v16;
  }
  if ( v10 )
  {
    v11 = 1;
    goto LABEL_14;
  }
  if ( (_RTL_BALANCED_NODE *)*(_QWORD *)a2 <= Root[-4].Children[1] )
    goto LABEL_15;
LABEL_17:
  v16 = Root->Children[1];
  if ( v16 )
    goto LABEL_19;
  v8 = 1;
LABEL_4:
  result = RtlRbInsertNodeEx(v6, Root, v8, (PRTL_BALANCED_NODE)(a2 + 88));
  if ( a3 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
