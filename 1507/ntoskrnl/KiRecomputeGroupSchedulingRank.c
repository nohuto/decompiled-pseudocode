/*
 * XREFs of KiRecomputeGroupSchedulingRank @ 0x140128E58
 * Callers:
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     KiUpdateGroupSchedulingRank @ 0x1400EB230 (KiUpdateGroupSchedulingRank.c)
 * Callees:
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14020A34C (KiChargeSchedulingGroupCycleTime.c)
 */

void __fastcall KiRecomputeGroupSchedulingRank(__int64 a1, __int64 a2, _RTL_RB_TREE *a3)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 j; // rcx
  _QWORD *i; // rax
  int v14; // eax
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 v21; // rax
  _RTL_RB_TREE *v22; // rax

  if ( *(__int64 *)(a1 + 32) > 0 )
    KiChargeSchedulingGroupCycleTime(a1, a2);
  v6 = KiCycleDivisorShortTerm * *(unsigned int *)(a1 + 8);
  ++*(_DWORD *)(a2 + 116);
  v7 = *(_QWORD *)a2;
  v8 = v6 >> 7;
  *(_QWORD *)(a2 + 24) += v8;
  v9 = *(_QWORD *)(a2 + 24);
  if ( v7 > v9 )
  {
    *(_DWORD *)(a2 + 116) += (v8 + v7 - v9 - 1) / v8;
    *(_QWORD *)(a2 + 24) = v9 + v8 * (unsigned int)((v8 + v7 - v9 - 1) / v8);
  }
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
  {
    v10 = a2 + 88;
    v11 = *(_QWORD *)(a2 + 96);
    if ( v11 )
    {
      for ( i = *(_QWORD **)v11; i; i = (_QWORD *)*i )
        v11 = (unsigned __int64)i;
    }
    else
    {
      for ( j = *(_QWORD *)(a2 + 104); ; j = *(_QWORD *)(v11 + 16) )
      {
        v11 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v11 || *(_QWORD *)v11 == v10 )
          break;
        v10 = v11;
      }
    }
    if ( v11 )
    {
      v14 = *(_DWORD *)(a2 + 116) - *(_DWORD *)(v11 + 28);
      if ( !v14 )
      {
        v15 = *(_WORD *)(a2 + 114);
        if ( v15 )
        {
          v16 = *(_WORD *)(v11 + 26);
          _BitScanReverse((unsigned int *)&v17, v15);
          v18 = 0;
          if ( v16 )
            _BitScanReverse((unsigned int *)&v18, v16);
          v14 = v18 - v17;
        }
        else
        {
          if ( !*(_DWORD *)(a2 + 116) )
          {
            if ( v7 <= *(_QWORD *)(v11 - 88) )
              return;
            goto LABEL_28;
          }
          v14 = 1;
        }
      }
      if ( v14 <= 0 )
        return;
LABEL_28:
      v19 = a2;
      do
      {
        v20 = (__int64 *)(v19 + 392);
        v21 = *(_QWORD *)(v19 + 392);
        if ( v21 )
          v22 = (_RTL_RB_TREE *)(v21 + 376);
        else
          v22 = a3 + 1423;
        *(_BYTE *)(v19 + 112) &= ~1u;
        RtlRbRemoveNode(v22, (PRTL_BALANCED_NODE)(v19 + 88));
        v19 = *v20;
      }
      while ( *v20 && (*(_BYTE *)(v19 + 112) & 1) != 0 && !*(_QWORD *)(v19 + 376) && !*(_WORD *)(v19 + 114) );
      KiInsertSchedulingGroupQueue(a3, a2, 0);
    }
  }
}
