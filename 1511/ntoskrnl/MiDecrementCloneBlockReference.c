/*
 * XREFs of MiDecrementCloneBlockReference @ 0x140011D94
 * Callers:
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x14000E9A8 (MiDeleteMergedPte.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x14006BDC0 (RtlAvlRemoveNode.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDecrementCloneBlockReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        __int64 a3)
{
  int v4; // r14d
  struct _KTHREAD *v5; // rcx
  unsigned int v8; // ebp
  __int64 v10; // rax
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
    v10 = MiPartitionIdToPointer(*(unsigned __int16 *)(a3 + 1460));
    v8 = MiDeleteMergedPte(v10, BugCheckParameter3);
  }
  else
  {
    v8 = 4;
  }
  if ( MEMORY[0xFFFFF580108042B0] > *(_QWORD *)(BugCheckParameter2 + 72) )
  {
    if ( (_InterlockedDecrement64((volatile signed __int64 *)(BugCheckParameter3 + 16)) & 0x7FFFFFFFFFFFFFFLL) == 0
      && v8 != 3 )
    {
      v11 = MiPartitionIdToPointer(*(unsigned __int16 *)(a3 + 1460));
      MiReturnCommit(v11, 1LL);
    }
    v8 = 5;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 48), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    RtlAvlRemoveNode(a3 + 912, BugCheckParameter2);
    v12 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(v12 + 8)) )
    {
      v13 = *(_QWORD *)(v12 + 16);
      v14 = *(_QWORD *)(BugCheckParameter2 + 32) - *(_QWORD *)(BugCheckParameter2 + 24) + 32LL;
      LOBYTE(v4) = (v14 & 0xFFF) != 0;
      *(_QWORD *)(v13 + 24) = v4 + (unsigned int)(v14 >> 12);
      RtlpInterlockedPushEntrySList(&stru_1402FE670, (PSLIST_ENTRY)v13);
      KeSetEvent(&Event, 0, 0);
      ExFreePoolWithTag((PVOID)v12, 0);
    }
    PsReturnProcessNonPagedPoolQuota(a3, *(_QWORD *)(BugCheckParameter2 + 64));
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
  }
  return v8;
}
