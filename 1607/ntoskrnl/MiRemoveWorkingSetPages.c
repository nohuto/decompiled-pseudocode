/*
 * XREFs of MiRemoveWorkingSetPages @ 0x1400FC4D0
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiCleanWorkingSet @ 0x1400FF31C (MiCleanWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1401343CC (MiEmptyWorkingSetPrivatePagesByVa.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiPopFreeWsle @ 0x1400FCB90 (MiPopFreeWsle.c)
 *     MiMoveValidWsle @ 0x1400FCC4C (MiMoveValidWsle.c)
 *     MiGetAggregateWorkingSetSize @ 0x1400FCF88 (MiGetAggregateWorkingSetSize.c)
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiRemoveWorkingSetPages(ULONG_PTR BugCheckParameter2, unsigned __int8 a2)
{
  ULONG_PTR v2; // r13
  int *v3; // rax
  void *v4; // r8
  ULONG_PTR *SharedWorkingSetList; // rsi
  __int64 v6; // rdi
  __int64 AggregateWorkingSetSize; // rax
  unsigned __int64 v8; // r9
  unsigned __int8 v9; // r10
  ULONG_PTR v10; // r11
  __int64 v11; // r8
  __int64 v12; // r14
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rax
  LONG *v18; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v20; // ebx
  unsigned int DpcWatchdogCount; // ebp
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // esi
  int v24; // edx
  _KTHREAD *NextThread; // rax
  unsigned __int64 v26; // rax
  ULONG_PTR *v27; // r10
  int v28; // ebx
  unsigned __int64 v29; // rax
  ULONG_PTR v30; // r9
  _QWORD *v31; // r8
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r14
  ULONG_PTR v35; // rbx
  ULONG_PTR v36; // rsi
  ULONG_PTR *v37; // r10
  ULONG_PTR v38; // rdi
  __int64 v39; // r11
  ULONG_PTR v40; // r9
  unsigned __int64 v41; // rcx
  ULONG_PTR v42; // r8
  unsigned __int64 v43; // rcx
  _QWORD *v44; // rcx
  ULONG_PTR BugCheckParameter4; // r8
  ULONG_PTR v46; // r11
  unsigned __int64 v47; // rax
  ULONG_PTR v48; // [rsp+30h] [rbp-88h]
  unsigned __int64 v49; // [rsp+38h] [rbp-80h]
  unsigned __int64 v50; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+48h] [rbp-70h]
  unsigned __int64 v52; // [rsp+50h] [rbp-68h]
  _QWORD *v53; // [rsp+58h] [rbp-60h]
  int v54; // [rsp+C0h] [rbp+8h]
  ULONG_PTR *v56; // [rsp+D0h] [rbp+18h]
  unsigned __int64 v57; // [rsp+D8h] [rbp+20h]

  v2 = BugCheckParameter2;
  if ( (*(_BYTE *)(BugCheckParameter2 + 184) & 7) == 2 )
  {
    v3 = MiPartitionIdToPointer(*(_WORD *)(BugCheckParameter2 + 164));
    v4 = &unk_140324F40;
    if ( v3 == MiSystemPartition )
      v4 = (void *)v2;
    v2 = (ULONG_PTR)v4;
  }
  v53 = *(_QWORD **)(v2 + 16);
  SharedWorkingSetList = MiGetSharedWorkingSetList(v2);
  v56 = SharedWorkingSetList;
LABEL_6:
  v6 = 0xFFFFFFFFFLL;
  v48 = SharedWorkingSetList[10];
  v50 = *((unsigned int *)SharedWorkingSetList + 8);
  AggregateWorkingSetSize = MiGetAggregateWorkingSetSize(v2);
  if ( (*(_BYTE *)(v2 + 184) & 7) != 0 )
    ++AggregateWorkingSetSize;
  v11 = (((v10 + AggregateWorkingSetSize * v8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (((_WORD)v10 + (_WORD)AggregateWorkingSetSize * (_WORD)v8) & 0xFFF) != 0 )
    v11 += 8LL;
  v12 = SharedWorkingSetList[3] + 1;
  v51 = v11 << 25 >> 16;
  v13 = (v51 - v10) / v8;
  v14 = v10 + v12 * v8;
  v57 = v14;
  result = (v14 - v51) / v8;
  v16 = result;
  if ( result )
  {
    v17 = v14 - 4096;
    v49 = v14 - 4096;
    v52 = (v14 - v51) >> 12;
    v54 = 0;
    while ( 1 )
    {
      if ( v9 == 17 || v14 > v17 )
        goto LABEL_44;
      v18 = &dword_140327CC0;
      if ( (*(_BYTE *)(v2 + 184) & 7) != 2 )
        v18 = (LONG *)(v2 + 192);
      if ( (*v18 & 0x40000000) != 0 )
        goto LABEL_39;
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = 1;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
        break;
      v24 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_28;
      if ( !CurrentPrcb->QuantumEnd )
        goto LABEL_30;
LABEL_35:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v20, DpcWatchdogCount, DpcTimeCount);
      v10 = v48;
      SharedWorkingSetList = v56;
      if ( v20 )
      {
        v14 = v57;
LABEL_39:
        v54 = 1;
LABEL_40:
        if ( v6 != 0xFFFFFFFFFLL )
        {
          do
          {
            v26 = *(_QWORD *)(v6 * *((unsigned int *)SharedWorkingSetList + 8) + v10);
            if ( (*(_BYTE *)(v2 + 184) & 7) == 2 )
              v27 = &::BugCheckParameter2;
            else
              v27 = (ULONG_PTR *)(*(_QWORD *)(v2 + 16) + 416LL);
            v30 = *v27;
            if ( *v27 != 0xFFFFFFFFFLL )
            {
              if ( v30 < v27[1] || v30 > v27[3] )
                KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)v27, v30, v27[3]);
              v31 = (_QWORD *)(v27[10] + v30 * *((unsigned int *)v27 + 8));
              *v31 ^= (*(_DWORD *)v31 ^ (2 * (_DWORD)v6)) & 0xFFFFFFE;
            }
            *(_QWORD *)(v6 * *((unsigned int *)v27 + 8) + v27[10]) = (v30 << 28) | 0xFFFFFFE;
            *v27 = v6;
            v6 = v26 >> 28;
          }
          while ( v26 >> 28 != 0xFFFFFFFFFLL );
        }
        if ( (v14 & 0xFFF) != 0 )
        {
          v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v57 = v14;
        }
        v32 = (v14 - v10) / v50;
        v33 = v52 - ((v14 - v51) >> 12);
        v34 = v33 * (0x1000 / v50);
        v35 = v34 + v32;
        if ( v34 )
        {
          v36 = v35 + 1;
          do
          {
            --v35;
            --v36;
            if ( (*(_BYTE *)(v2 + 184) & 7) == 2 )
              v37 = &::BugCheckParameter2;
            else
              v37 = (ULONG_PTR *)(*(_QWORD *)(v2 + 16) + 416LL);
            v38 = v37[10];
            if ( *v37 == v35 )
            {
              MiPopFreeWsle(v2);
            }
            else
            {
              v39 = *((unsigned int *)v37 + 8);
              v40 = v36 - 2;
              if ( !v35
                || (v41 = *(_QWORD *)((v36 - 2) * *((unsigned int *)v37 + 8) + v38), (v41 & 1) != 0)
                || v41 >> 28 != v35
                || v36 == 0x1000000001LL )
              {
                v42 = v37[3];
                if ( v35 == v42
                  || (v43 = *(_QWORD *)(v36 * v39 + v38), (v43 & 1) != 0)
                  || v43 >> 28 != v35
                  || (v40 = v36, v36 == 0xFFFFFFFFFLL) )
                {
                  v40 = (*(_DWORD *)(v35 * v39 + v38) >> 1) & 0x7FFFFFF;
                  v44 = (_QWORD *)(v38 + v40 * v39);
                  do
                  {
                    if ( (*v44 & 1) == 0 && *v44 >> 28 == v35 )
                      break;
                    v40 += 0x8000000LL;
                    v44 += 0x1000000 * v39;
                  }
                  while ( v40 <= v42 );
                }
              }
              if ( *(_QWORD *)(v40 * v39 + v38) >> 28 != v35 )
                KeBugCheckEx(0x1Au, 0x5011uLL, (ULONG_PTR)v37, v40, v35);
              BugCheckParameter4 = *(_QWORD *)(v35 * v39 + v38) >> 28;
              if ( BugCheckParameter4 != 0xFFFFFFFFFLL )
              {
                v46 = BugCheckParameter4 * v39;
                v47 = *(_QWORD *)(v46 + v38);
                if ( (v47 & 1) != 0 || ((v35 ^ (v47 >> 1)) & 0x7FFFFFF) != 0 )
                  KeBugCheckEx(0x1Au, 0x5012uLL, (ULONG_PTR)v37, v40, BugCheckParameter4);
                *(_QWORD *)(v46 + v38) = v47 ^ ((unsigned int)v47 ^ (2 * (_DWORD)v40)) & 0xFFFFFFE;
              }
              *(_QWORD *)(v40 * *((unsigned int *)v37 + 8) + v37[10]) = (BugCheckParameter4 << 28) | *(_DWORD *)(v40 * *((unsigned int *)v37 + 8) + v38) & 0xFFFFFFF;
            }
            --v56[3];
            --v34;
          }
          while ( v34 );
          SharedWorkingSetList = v56;
        }
        if ( SharedWorkingSetList[2] > v32 - 1 )
          SharedWorkingSetList[2] = v32 - 1;
        *v53 = SharedWorkingSetList[1];
        result = MiDeletePteRange(
                   v2,
                   ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                   ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 8 * v33,
                   16LL);
        if ( v54 == 1 )
        {
          MiRelockWorkingSetExclusive(v2, a2);
          goto LABEL_6;
        }
        return result;
      }
LABEL_44:
      v14 = v10 + --v12 * *((unsigned int *)SharedWorkingSetList + 8);
      v57 = v14;
      if ( (*(_BYTE *)v14 & 1) != 0 )
      {
        v28 = 0;
        do
        {
          v29 = MiPopFreeWsle(v2);
          if ( v29 < v13 )
          {
            MiMoveValidWsle(v2);
            v29 = v12;
            v28 = 1;
          }
          *(_QWORD *)(v29 * *((unsigned int *)SharedWorkingSetList + 8) + SharedWorkingSetList[10]) = (v6 << 28) | 0xFFFFFFE;
          v6 = v29;
        }
        while ( !v28 );
        v10 = v48;
        v14 = v57;
      }
      if ( !--v16 )
        goto LABEL_40;
      v17 = v49;
      v9 = a2;
    }
    v24 = 0;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v20 = 2;
      goto LABEL_35;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v20 = 3;
      goto LABEL_35;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v20 = 4;
      goto LABEL_35;
    }
LABEL_28:
    if ( DpcWatchdogCount <= 7 )
    {
      SharedWorkingSetList = v56;
      goto LABEL_44;
    }
    if ( v24 )
    {
LABEL_30:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v20 = 5;
        goto LABEL_35;
      }
      if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
      {
        v20 = 6;
        goto LABEL_35;
      }
    }
    _disable();
    CurrentPrcb->DpcWatchdogCount = 0;
    CurrentPrcb->DpcTimeCount = 0;
    KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
    _enable();
    v20 = 0;
    goto LABEL_35;
  }
  return result;
}
