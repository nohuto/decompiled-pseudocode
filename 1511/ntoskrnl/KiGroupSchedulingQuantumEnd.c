/*
 * XREFs of KiGroupSchedulingQuantumEnd @ 0x14007B4A0
 * Callers:
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiShouldPreemptionBeDeferred @ 0x14002A6D4 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14002A6EC (KiCheckForMaxOverQuotaScb.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiInsertDeferredPreemptionApc @ 0x1400312FC (KiInsertDeferredPreemptionApc.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1400C3468 (KiRecomputeGroupSchedulingRank.c)
 *     KiChooseLowestRankedThread @ 0x1400C34F4 (KiChooseLowestRankedThread.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1400C3838 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x1400C38CC (KiAddThreadToScbQueue.c)
 *     KiResortScbQueue @ 0x1400C3AB8 (KiResortScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x1400C3C94 (KiComputeGroupSchedulingRank.c)
 *     KiAddThreadToPrcbQueue @ 0x1400E6404 (KiAddThreadToPrcbQueue.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1401CB44C (KiChargeSchedulingGroupCycleTime.c)
 */

void __fastcall KiGroupSchedulingQuantumEnd(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r12
  char v5; // r13
  char v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdi
  char v15; // dl
  char v16; // cl
  __int64 v17; // rdi
  _BYTE *ready; // rax
  _BYTE *v19; // rdx
  __int64 v20; // r10
  __int64 v21; // r10
  int v22; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+24h] [rbp-44h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  char v25; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v5 = a3;
  v25 = 0;
  v8 = 0;
  v9 = MEMORY[0xFFFFF78000000320];
  v22 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v22);
    while ( *(_QWORD *)(a1 + 48) );
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = 0LL;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 104);
    if ( v11 )
      v11 += *(unsigned int *)(a1 + 1624);
  }
  if ( v9 > *(_QWORD *)(a1 + 23384) )
  {
    KiGroupSchedulingGenerationEnd(a1, v9, 0LL);
    return;
  }
  v12 = *(_QWORD *)(a2 + 104);
  v13 = v12;
  v24 = v12;
  if ( v12 )
  {
    v14 = *(unsigned int *)(a1 + 1624) + v12;
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_BYTE *)(v14 + 112);
        if ( (v15 & 4) != 0 )
        {
          if ( (v15 & 0x12) == 0 && *(_QWORD *)v14 > *(_QWORD *)(v14 + 16) )
          {
            *(_BYTE *)(v14 + 112) = v15 | 2;
            if ( *(__int64 *)(v13 + 32) > 0 )
              KiChargeSchedulingGroupCycleTime(v13, v14);
            if ( (*(_BYTE *)(v14 + 112) & 1) != 0 )
            {
              LOBYTE(a3) = 1;
              KiRemoveSchedulingGroupQueue(a1, v14, a3);
            }
LABEL_38:
            v8 = 1;
            v4 = 1;
            if ( v11 == v14 )
              v25 = 1;
LABEL_13:
            v16 = v25;
            goto LABEL_14;
          }
          if ( *(_QWORD *)v14 > *(_QWORD *)(v14 + 24) )
          {
            KiRecomputeGroupSchedulingRank(v13, v14, a1);
            goto LABEL_38;
          }
          v16 = v25;
          if ( v5 )
            v8 = 1;
        }
        else
        {
          if ( *(_QWORD *)v14 < *(_QWORD *)(v14 + 8) )
          {
            if ( (v15 & 1) != 0 )
            {
              LOBYTE(a3) = 1;
              KiResortScbQueue(a1, v14, a3);
            }
            goto LABEL_13;
          }
          KiComputeGroupSchedulingRank(v13, a1, v14);
          v8 = 1;
          v4 = 1;
          if ( v11 != v14 )
            goto LABEL_13;
          v16 = 1;
          v25 = 1;
        }
LABEL_14:
        v14 = *(_QWORD *)(v14 + 392);
        if ( !v14 )
        {
          v17 = *(_QWORD *)(a2 + 104);
          if ( v17 )
            v17 += *(unsigned int *)(a1 + 1624);
          if ( !v8 || v10 )
          {
            if ( v4 && v10 && v11 )
            {
              if ( v11 == v17 )
                goto LABEL_56;
              while ( v11 )
              {
                v11 = *(_QWORD *)(v11 + 392);
                if ( v11 == v17 )
                  goto LABEL_56;
              }
              if ( !v17 || v16 )
              {
LABEL_56:
                v19 = (_BYTE *)KiChooseLowestRankedThread(a1, v10, (unsigned int)(*(char *)(v10 + 195) + 1));
                if ( v19 )
                {
                  *(_BYTE *)(v10 + 388) = 1;
                  *(_DWORD *)(v10 + 436) = MEMORY[0xFFFFF78000000320];
                  KiUpdateThreadState(a1, v19, 3, 1);
                  v20 = *(_QWORD *)(v10 + 104);
                  if ( v20 )
                    v20 += *(unsigned int *)(a1 + 1624);
                  if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v10, v20, 1) )
                    KiAddThreadToScbQueue(a1, v21, v10, 1LL);
                  else
                    KiAddThreadToPrcbQueue(a1, v10, (unsigned int)*(char *)(v10 + 195), 1LL);
                }
              }
            }
          }
          else
          {
            if ( (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v17, 1) )
              ready = (_BYTE *)KiChooseLowestRankedThread(a1, a2, (unsigned int)*(char *)(a2 + 195));
            else
              ready = (_BYTE *)KiSelectReadyThread((unsigned int)*(char *)(a2 + 195), a1);
            if ( ready )
              KiUpdateThreadState(a1, ready, 3, 1);
          }
          if ( v17 )
          {
            if ( KiShouldPreemptionBeDeferred(a2) )
            {
              if ( (*(_DWORD *)(a2 + 120) & 0x600) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
                KiInsertDeferredPreemptionApc(a1, a2, 0);
                v23 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
                {
                  do
                    KeYieldProcessorEx(&v23);
                  while ( *(_QWORD *)(a1 + 48) );
                }
              }
            }
            else if ( KiCheckForMaxOverQuotaScb(v17) && !*(_QWORD *)(a1 + 16) )
            {
              KiSelectNextThread(a1, a4);
            }
          }
          return;
        }
        v13 = v14 - *(unsigned int *)(a1 + 1624);
        v24 = v13;
      }
    }
  }
}
