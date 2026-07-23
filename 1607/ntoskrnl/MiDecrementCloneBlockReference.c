/*
 * XREFs of MiDecrementCloneBlockReference @ 0x1400B6B30
 * Callers:
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140028040 (PsReturnProcessNonPagedPoolQuota.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiDeleteMergedPte @ 0x1400B6CA0 (MiDeleteMergedPte.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a3)
{
  int v4; // r14d
  struct _KTHREAD *v5; // rcx
  unsigned int v8; // ebp
  int *v9; // rax
  int *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx

  v4 = 0;
  v5 = *(struct _KTHREAD **)(a3 + 896);
  if ( v5 && v5 != KeGetCurrentThread() )
    KeBugCheckEx(0x1Au, 0x61945uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v11 = MiPartitionIdToPointer(*(_WORD *)(a3 + 1444));
    v8 = MiDeleteMergedPte(v11, BugCheckParameter3);
  }
  else
  {
    v8 = 4;
  }
  if ( *(_QWORD *)(qword_140327FD0 + 276840632) > *(_QWORD *)(BugCheckParameter2 + 72) )
  {
    if ( (_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter3 + 16)) & 0x7FFFFFFFFFFFFFFLL) == 0
      && v8 != 3 )
    {
      v9 = MiPartitionIdToPointer(*(_WORD *)(a3 + 1444));
      MiReturnCommit((__int64)v9, 1uLL);
    }
    v8 = 5;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 48), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(a3 + 912), BugCheckParameter2);
    v12 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v13 = *(_QWORD *)(v12 + 16);
      v14 = *(_QWORD *)(BugCheckParameter2 + 32) - *(_QWORD *)(BugCheckParameter2 + 24) + 32LL;
      LOBYTE(v4) = (v14 & 0xFFF) != 0;
      *(_QWORD *)(v13 + 24) = v4 + (unsigned int)(v14 >> 12);
      RtlpInterlockedPushEntrySList(&stru_140326990, (PSLIST_ENTRY)v13);
      KeSetEvent(&stru_140326978, 0, 0);
      ExFreePoolWithTag((PVOID)v12, 0);
    }
    PsReturnProcessNonPagedPoolQuota(a3, *(_QWORD *)(BugCheckParameter2 + 64));
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
  }
  return v8;
}
