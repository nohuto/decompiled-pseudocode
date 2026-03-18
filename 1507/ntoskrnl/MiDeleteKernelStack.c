/*
 * XREFs of MiDeleteKernelStack @ 0x14002517C
 * Callers:
 *     MiDeleteNoBlockStacks @ 0x140012424 (MiDeleteNoBlockStacks.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400219C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x140022520 (MmDeleteKernelStack.c)
 *     MiEmptyKernelStackCache @ 0x14012FF64 (MiEmptyKernelStackCache.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     MiClearStackOwners @ 0x140024ED4 (MiClearStackOwners.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiDeleteKernelStackPages @ 0x140038168 (MiDeleteKernelStackPages.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiDeleteKernelStack(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  unsigned int v4; // edi
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // rbp
  unsigned __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  v2 = a2;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (a2 & 2) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiClearStackOwners(a1, a2);
    __writecr8(CurrentIrql);
    v8 = a1 << 25 >> 16;
    *(_QWORD *)(v8 + 4064) = v8 ^ qword_14034FB80;
    *(_DWORD *)(v8 + 4088) = v2 & 0xFFFFFFFD;
    RtlpInterlockedPushEntrySList(&stru_14034F600, (PSLIST_ENTRY)(v8 + 4080));
    if ( !_InterlockedCompareExchange(&dword_14034F638, 1, 0) )
      ExQueueWorkItem(&WorkItem, HyperCriticalWorkQueue);
  }
  else
  {
    v4 = 18;
    if ( (a2 & 1) == 0 )
      v4 = (unsigned __int8)byte_14034F5F8;
    v5 = a1 - 8LL * v4;
    MiDeleteKernelStackPages(v5, v4 + 1, &v9);
    _InterlockedExchangeAdd64(&qword_14034FD08, -(__int64)v4);
    v6 = v9;
    MiReturnResidentAvailable(v9);
    _InterlockedExchangeAdd64(&qword_14034F7D0, v6);
    MiReleasePtes(&qword_14034FC70, v5, v4 + 1);
    MiReturnCommit(&MiSystemPartition, v4 - v10);
  }
}
