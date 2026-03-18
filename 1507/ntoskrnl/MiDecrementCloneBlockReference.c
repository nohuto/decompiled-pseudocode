/*
 * XREFs of MiDecrementCloneBlockReference @ 0x14000539C
 * Callers:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140005510 (MiDeleteMergedPte.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  int v4; // r14d
  struct _KTHREAD *v5; // rcx
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx

  v4 = 0;
  v5 = *(struct _KTHREAD **)(a3 + 896);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v8 = MiPartitionIdToPointer(*(unsigned __int16 *)(a3 + 1452));
    v9 = MiDeleteMergedPte(v8, BugCheckParameter3);
  }
  else
  {
    v9 = 4;
  }
  if ( MEMORY[0xFFFFF58010804258] > *(_QWORD *)(BugCheckParameter2 + 72) )
  {
    if ( (_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter3 + 16)) & 0x7FFFFFFFFFFFFFFLL) == 0
      && v9 != 3 )
    {
      v11 = MiPartitionIdToPointer(*(unsigned __int16 *)(a3 + 1452));
      MiReturnCommit(v11, 1LL);
    }
    v9 = 5;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 48), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    RtlAvlRemoveNode(a3 + 912, BugCheckParameter2);
    v12 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v13 = *(_QWORD *)(v12 + 16);
      v14 = *(_QWORD *)(BugCheckParameter2 + 32) - *(_QWORD *)(BugCheckParameter2 + 24) + 32LL;
      LOBYTE(v4) = (v14 & 0xFFF) != 0;
      *(_QWORD *)(v13 + 24) = v4 + (unsigned int)(v14 >> 12);
      RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)v13);
      KeSetEvent(&Event, 0, 0);
      ExFreePoolWithTag((PVOID)v12, 0);
    }
    PsReturnProcessNonPagedPoolQuota(a3, *(_QWORD *)(BugCheckParameter2 + 64));
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
  }
  return v9;
}
