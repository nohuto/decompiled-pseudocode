/*
 * XREFs of CcWriteBehind @ 0x1400326B0
 * Callers:
 *     CcWorkerThread @ 0x1400328D0 (CcWorkerThread.c)
 *     CcWaitForUninitializeCacheMap @ 0x140122008 (CcWaitForUninitializeCacheMap.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall CcWriteBehind(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r14
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v7; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  bool v12; // cf
  struct _KPRCB *v13; // rcx
  _GENERAL_LOOKASIDE *v14; // r8
  _QWORD v15[7]; // [rsp+30h] [rbp-88h] BYREF
  char v16; // [rsp+68h] [rbp-50h]
  char v17; // [rsp+98h] [rbp-20h]

  CurrentPrcb = KeGetCurrentPrcb();
  PoolWithTag = 0LL;
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalAllocates;
  v7 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v7 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[6].L;
  ++L->TotalAllocates;
  v7 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v7
    || (Size = L->Size,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))L->AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_4:
    LODWORD(v7->Next) = CurrentPrcb->Number;
  }
  if ( !v7 )
  {
    v17 = 2;
    v7 = (PSLIST_ENTRY)v15;
    v15[1] = 0LL;
    v15[0] = 0LL;
    v15[2] = a1;
    v15[3] = a2;
    v16 = 0;
    goto LABEL_13;
  }
  v12 = CcMaxNumberOfWriteBehindThreads < (unsigned int)CcNumberWorkerThreads;
  *((_BYTE *)&v7[6].Next + 8) = 2;
  *((_QWORD *)&v7->Next + 1) = 0LL;
  v7->Next = 0LL;
  v7[1].Next = (_SLIST_ENTRY *)a1;
  *((_QWORD *)&v7[1].Next + 1) = a2;
  if ( !v12
    || CcLowPriWorkerThread
    || *(_DWORD *)(a1 + 516)
    || (*(_DWORD *)(a1 + 152) & 0x10000) != 0
    || (PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x71576343u)) == 0LL )
  {
LABEL_13:
    *((_BYTE *)&v7[3].Next + 8) = 0;
    CcWriteBehindInternal(v7);
    if ( v7 == (PSLIST_ENTRY)v15 )
      return;
    goto LABEL_14;
  }
  *((_BYTE *)&v7[3].Next + 8) = 1;
  LOWORD(v7[2].Next) = 1;
  BYTE2(v7[2].Next) = 6;
  HIDWORD(v7[2].Next) = 0;
  v7[3].Next = (PSLIST_ENTRY)((char *)v7 + 40);
  *((_QWORD *)&v7[2].Next + 1) = (char *)v7 + 40;
  PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))CcWriteBehindInternal;
  PoolWithTag->Parameter = v7;
  LODWORD(PoolWithTag[1].List.Flink) = 1;
  PoolWithTag->List.Flink = 0LL;
  ExQueueWorkItem(PoolWithTag, CustomPriorityWorkQueue|SuperCriticalWorkQueue);
  KeWaitForSingleObject(&v7[2], Executive, 0, 0, 0LL);
LABEL_14:
  v13 = KeGetCurrentPrcb();
  v14 = v13->PPLookasideList[6].P;
  ++v14->TotalFrees;
  if ( LOWORD(v14->ListHead.Alignment) < v14->Depth
    || (++v14->FreeMisses,
        v14 = v13->PPLookasideList[6].L,
        ++v14->TotalFrees,
        LOWORD(v14->ListHead.Alignment) < v14->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v14->ListHead, v7);
  }
  else
  {
    ++v14->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v14->FreeEx)(v7);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x71576343u);
}
