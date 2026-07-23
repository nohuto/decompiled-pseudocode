/*
 * XREFs of CcWriteBehind @ 0x14007119C
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x140021E00 (CcWaitForUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     CcAllocateWorkQueueEntry @ 0x140071C00 (CcAllocateWorkQueueEntry.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rsi
  int v5; // eax
  PSLIST_ENTRY v6; // rdi
  bool v7; // cf
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  _QWORD v10[7]; // [rsp+38h] [rbp-39h] BYREF
  char v11; // [rsp+70h] [rbp-1h]
  char v12; // [rsp+B0h] [rbp+3Fh]
  PSLIST_ENTRY ListEntry; // [rsp+E8h] [rbp+77h] BYREF

  PoolWithTag = 0LL;
  v5 = CcAllocateWorkQueueEntry(&ListEntry);
  v6 = ListEntry;
  if ( v5 < 0
    || (v7 = CcMaxNumberOfWriteBehindThreads < (unsigned int)CcNumberWorkerThreads,
        *((_BYTE *)&ListEntry[7].Next + 8) = 2,
        *((_QWORD *)&v6->Next + 1) = 0LL,
        v6->Next = 0LL,
        v6[1].Next = (_SLIST_ENTRY *)a1,
        *((_QWORD *)&v6[1].Next + 1) = a2,
        !v7)
    || CcLowPriWorkerThread
    || *(_DWORD *)(a1 + 516)
    || (*(_DWORD *)(a1 + 152) & 0x10000) != 0
    || (PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u)) == 0LL )
  {
    if ( !v6 )
    {
      v12 = 2;
      v6 = (PSLIST_ENTRY)v10;
      v10[1] = 0LL;
      v10[0] = 0LL;
      v10[2] = a1;
      v10[3] = a2;
      v11 = 0;
    }
    *((_BYTE *)&v6[3].Next + 8) = 0;
    CcWriteBehindInternal(v6);
    if ( v6 == (PSLIST_ENTRY)v10 )
      v6 = 0LL;
    ListEntry = v6;
  }
  else
  {
    *((_BYTE *)&v6[3].Next + 8) = 1;
    LOWORD(v6[2].Next) = 1;
    BYTE2(v6[2].Next) = 6;
    HIDWORD(v6[2].Next) = 0;
    v6[3].Next = (PSLIST_ENTRY)((char *)v6 + 40);
    *((_QWORD *)&v6[2].Next + 1) = (char *)v6 + 40;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CcWriteBehindInternal;
    PoolWithTag->Parameter = v6;
    LODWORD(PoolWithTag[1].List.Flink) = 1;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, CustomPriorityWorkQueue|SuperCriticalWorkQueue);
    KeWaitForSingleObject(&v6[2], Executive, 0, 0, 0LL);
  }
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[6].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[6].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(ListEntry);
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x71576343u);
}
