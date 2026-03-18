/*
 * XREFs of MiDeleteKernelStack @ 0x1400E1C30
 * Callers:
 *     MiDeleteNoBlockStacks @ 0x140014528 (MiDeleteNoBlockStacks.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14002C660 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x14002CF40 (MmDeleteKernelStack.c)
 *     MiEmptyKernelStackCache @ 0x1400C1C3C (MiEmptyKernelStackCache.c)
 * Callees:
 *     MiClearStackOwners @ 0x14002D2EC (MiClearStackOwners.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiDeleteKernelStackPages @ 0x1400E1D60 (MiDeleteKernelStackPages.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiDeleteKernelStack(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  unsigned __int64 v6; // r10
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // rsi
  unsigned __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
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
    *(_QWORD *)(v8 + 4064) = v8 ^ qword_1402FF6C0;
    *(_DWORD *)(v8 + 4088) = a2 & 0xFFFFFFFD;
    RtlpInterlockedPushEntrySList(&stru_1402FF140, (PSLIST_ENTRY)(v8 + 4080));
    if ( !_InterlockedCompareExchange(&dword_1402FF178, 1, 0) )
      ExQueueWorkItem(&WorkItem, HyperCriticalWorkQueue);
  }
  else
  {
    v4 = 18;
    if ( (a2 & 1) == 0 )
      v4 = (unsigned __int8)byte_1402FF138;
    v5 = (_QWORD *)(a1 - 8LL * v4);
    MiDeleteKernelStackPages(v5, v4 + 1, &v9);
    _InterlockedExchangeAdd64(&qword_1402FF848, -(__int64)v4);
    MiReturnResidentAvailable(v9);
    _InterlockedExchangeAdd64(&qword_1402FF350, v6);
    MiReleasePtes((__int64)&qword_1402FF7B0, v5, v4 + 1);
    MiReturnCommit((__int64)MiSystemPartition, v4 - v10);
  }
}
