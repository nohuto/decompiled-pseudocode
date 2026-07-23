/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x1400CFF60
 * Callers:
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140098864 (KiRecomputeGroupSchedulingRank.c)
 *     KiChooseLowestRankedThread @ 0x140098944 (KiChooseLowestRankedThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140098C78 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x140098D0C (KiAddThreadToScbQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x1400A361C (KiAddThreadToPrcbQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400C7DD4 (KiInsertDeferredPreemptionApc.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiShouldPreemptionBeDeferred @ 0x1400CE170 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1400CE188 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeGroupSchedulingRank @ 0x1400CE1A4 (KiComputeGroupSchedulingRank.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1400CE2C8 (KiCheckMaxOverQuotaTransition.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r13
  char v5; // r12
  unsigned __int64 v8; // rdi
  _KTHREAD *v9; // rsi
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rbp
  volatile signed __int64 *v11; // rdi
  volatile signed __int64 *v12; // r15
  __int64 v13; // rdi
  char v14; // al
  char v15; // cl
  __int64 v16; // rdi
  _KTHREAD *v17; // rsi
  unsigned __int64 *v18; // r8
  unsigned __int64 *v19; // r8
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rbp
  char v24; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+34h] [rbp-54h] BYREF
  int v26; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int64 *v27; // [rsp+40h] [rbp-48h]
  _KTHREAD *v28; // [rsp+48h] [rbp-40h]
  char v29; // [rsp+90h] [rbp+8h]
  char v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v4 = 0;
  v5 = 0;
  v29 = 0;
  v8 = MEMORY[0xFFFFF78000000320];
  v25 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v25);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v9 = *(_KTHREAD **)(a1 + 16);
  SchedulingGroup = 0LL;
  v28 = v9;
  if ( v9 )
  {
    SchedulingGroup = v9->SchedulingGroup;
    if ( SchedulingGroup )
      SchedulingGroup = (_KSCHEDULING_GROUP *volatile)((char *)SchedulingGroup + *(unsigned int *)(a1 + 1624));
  }
  if ( v8 > *(_QWORD *)(a1 + 23384) )
  {
    KiGroupSchedulingGenerationEnd(a1, v8, 0LL);
    return;
  }
  v11 = *(volatile signed __int64 **)(a2 + 104);
  v12 = v11;
  v27 = v11;
  if ( v11 )
  {
    v13 = (__int64)v11 + *(unsigned int *)(a1 + 1624);
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = *(_BYTE *)(v13 + 112);
        if ( (v14 & 4) != 0 )
          break;
        KiComputeGroupSchedulingRank((__int64)v12, a1, v13);
        if ( (*(_BYTE *)(v13 + 112) & 4) == 0 )
          goto LABEL_11;
        v5 = 1;
        v4 = 1;
        if ( SchedulingGroup != (_KSCHEDULING_GROUP *volatile)v13 )
          goto LABEL_11;
        v15 = 1;
        v29 = 1;
LABEL_12:
        v13 = *(_QWORD *)(v13 + 408);
        if ( !v13 )
        {
          v16 = *(_QWORD *)(a2 + 104);
          v17 = v28;
          if ( v16 )
            v16 += *(unsigned int *)(a1 + 1624);
          if ( !v5 || v28 )
          {
            if ( v4 && v28 && SchedulingGroup )
            {
              if ( SchedulingGroup == (_KSCHEDULING_GROUP *volatile)v16 )
                goto LABEL_47;
              while ( SchedulingGroup )
              {
                SchedulingGroup = (_KSCHEDULING_GROUP *volatile)SchedulingGroup->PerProcessor[0].ReadyListHead[9].Flink;
                if ( SchedulingGroup == (_KSCHEDULING_GROUP *volatile)v16 )
                  goto LABEL_47;
              }
              if ( !v16 || v15 )
              {
LABEL_47:
                v21 = KiChooseLowestRankedThread((struct _KPRCB *)a1, v28, v28->Priority + 1);
                if ( v21 )
                {
                  v17->WaitBlockFill6[68] = 1;
                  v17->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
                  KiUpdateThreadState(a1, (__int64)v21, 3, 1);
                  v23 = (__int64)v17->SchedulingGroup;
                  if ( v23 )
                    v23 += *(unsigned int *)(a1 + 1624);
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero((__int64)v17, v23, v22, 1, (bool *)&v24) )
                    KiAddThreadToScbQueue(a1, v23, (__int64)v17, 1);
                  else
                    KiAddThreadToPrcbQueue(a1, (__int64)v17, v17->Priority, 1, v24);
                }
              }
            }
          }
          else
          {
            if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v16, a3, 1, 0LL) )
              v20 = KiChooseLowestRankedThread((struct _KPRCB *)a1, (_KTHREAD *)a2, *(char *)(a2 + 195));
            else
              v20 = KiSelectReadyThread(*(char *)(a2 + 195), a1, v19);
            if ( v20 )
              KiUpdateThreadState(a1, (__int64)v20, 3, 1);
          }
          if ( v16 )
          {
            if ( KiShouldPreemptionBeDeferred(a2) )
            {
              if ( (*(_DWORD *)(a2 + 120) & 0x600) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                KiInsertDeferredPreemptionApc(a1, a2, 0);
                v26 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v26);
                  while ( *(_QWORD *)(a1 + 48) );
                }
              }
            }
            else if ( KiCheckForMaxOverQuotaScb(v16) )
            {
              if ( !*(_QWORD *)(a1 + 16) )
                KiSelectNextThread(a1, a4, v18);
            }
          }
          return;
        }
        v12 = (volatile signed __int64 *)(v13 - *(unsigned int *)(a1 + 1624));
        v27 = v12;
      }
      if ( (v14 & 2) == 0 )
      {
        if ( KiCheckMaxOverQuotaTransition(v13, v12) )
        {
          if ( (*(_BYTE *)(v13 + 112) & 1) != 0 )
            KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a1, v13, 1);
        }
        else
        {
          if ( *(_QWORD *)v13 < *(_QWORD *)(v13 + 24) )
          {
            if ( v30 )
              v5 = 1;
            goto LABEL_11;
          }
          KiRecomputeGroupSchedulingRank((__int64)v12, v13, a1);
          if ( SchedulingGroup == (_KSCHEDULING_GROUP *volatile)v13 )
          {
            v5 = 1;
            v29 = 1;
            v4 = 1;
            goto LABEL_11;
          }
        }
      }
      v5 = 1;
      v4 = 1;
LABEL_11:
      v15 = v29;
      goto LABEL_12;
    }
  }
}
