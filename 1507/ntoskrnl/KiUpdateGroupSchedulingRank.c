/*
 * XREFs of KiUpdateGroupSchedulingRank @ 0x1400EB230
 * Callers:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiQueueReadyThread @ 0x1400EAD80 (KiQueueReadyThread.c)
 * Callees:
 *     KiInsertSchedulingGroupQueue @ 0x1400EDDBC (KiInsertSchedulingGroupQueue.c)
 *     RtlRbRemoveNode @ 0x1400F6290 (RtlRbRemoveNode.c)
 *     KiComputeGroupSchedulingRank @ 0x140121494 (KiComputeGroupSchedulingRank.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140128E58 (KiRecomputeGroupSchedulingRank.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14020A34C (KiChargeSchedulingGroupCycleTime.c)
 */

void __fastcall KiUpdateGroupSchedulingRank(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // dl
  int v9; // eax
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdx
  int v13; // edx
  unsigned __int16 v14; // dx
  unsigned int v15; // eax
  int v16; // edx
  int v17; // r8d
  unsigned __int16 v18; // ax
  __int64 v19; // rcx
  __int64 *v20; // r14
  __int64 v21; // rax
  _RTL_RB_TREE *v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // r14
  __int64 v25; // rax
  _RTL_RB_TREE *v26; // r8

  v6 = *(_QWORD *)(a1 + 104);
  if ( !v6 )
    return;
  v7 = *(unsigned int *)(a2 + 1624) + v6;
  if ( !v7 )
    return;
  while ( 1 )
  {
    v8 = *(_BYTE *)(v7 + 112);
    if ( (v8 & 4) != 0 )
    {
      if ( (v8 & 0x12) != 0 || *(_QWORD *)v7 <= *(_QWORD *)(v7 + 16) )
      {
        if ( *(_QWORD *)v7 > *(_QWORD *)(v7 + 24) )
          KiRecomputeGroupSchedulingRank(v6, v7, a2);
      }
      else
      {
        *(_BYTE *)(v7 + 112) = v8 | 2;
        if ( *(__int64 *)(v6 + 32) > 0 )
          KiChargeSchedulingGroupCycleTime(v6, v7);
        if ( (*(_BYTE *)(v7 + 112) & 1) != 0 )
        {
          v23 = v7;
          do
          {
            v24 = (__int64 *)(v23 + 392);
            v25 = *(_QWORD *)(v23 + 392);
            v26 = (_RTL_RB_TREE *)(v25 + 376);
            if ( !v25 )
              v26 = (_RTL_RB_TREE *)(a2 + 22768);
            *(_QWORD *)(v23 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v23 + 64);
            *(_BYTE *)(v23 + 112) &= ~1u;
            RtlRbRemoveNode(v26, (PRTL_BALANCED_NODE)(v23 + 88));
            v23 = *v24;
          }
          while ( *v24 && (*(_BYTE *)(v23 + 112) & 1) != 0 && !*(_QWORD *)(v23 + 376) && !*(_WORD *)(v23 + 114) );
        }
      }
    }
    else
    {
      if ( *(_QWORD *)v7 >= *(_QWORD *)(v7 + 8) )
      {
        KiComputeGroupSchedulingRank(v6, a2, v7);
        goto LABEL_7;
      }
      if ( (v8 & 1) != 0 )
      {
        i = *(_QWORD *)(v7 + 96);
        v11 = v7 + 88;
        if ( i )
        {
          v12 = *(_QWORD **)i;
          if ( *(_QWORD *)i )
          {
            do
            {
              i = (unsigned __int64)v12;
              v12 = (_QWORD *)*v12;
            }
            while ( v12 );
          }
        }
        else
        {
          for ( i = *(_QWORD *)(v7 + 104) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)i == v11 )
              break;
            v11 = i;
          }
        }
        if ( i )
        {
          v13 = *(_DWORD *)(v7 + 116) - *(_DWORD *)(i + 28);
          if ( v13 )
          {
LABEL_36:
            if ( v13 <= 0 )
              goto LABEL_7;
          }
          else
          {
            v14 = *(_WORD *)(v7 + 114);
            if ( v14 )
            {
              v15 = v14;
              v16 = 0;
              _BitScanReverse((unsigned int *)&v17, v15);
              v18 = *(_WORD *)(i + 26);
              if ( v18 )
                _BitScanReverse((unsigned int *)&v16, v18);
              v13 = v16 - v17;
              goto LABEL_36;
            }
            if ( !*(_DWORD *)(v7 + 116) && *(_QWORD *)v7 <= *(_QWORD *)(i - 88) )
              goto LABEL_7;
          }
          v19 = v7;
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
          KiInsertSchedulingGroupQueue(a2, v7, 0LL);
        }
      }
    }
LABEL_7:
    v7 = *(_QWORD *)(v7 + 392);
    if ( !v7 )
      break;
    v6 = v7 - *(unsigned int *)(a2 + 1624);
  }
  if ( a3 )
  {
    v9 = *(_DWORD *)(a1 + 120);
    if ( (v9 & 0x100) == 0
      && *(char *)(a1 + 195) < 16
      && (*(_DWORD *)(a1 + 484) || *(_BYTE *)(a1 + 390) == 1)
      && (v9 & 0x600) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xAu);
    }
  }
}
