/*
 * XREFs of MiDeleteKernelStack @ 0x1400A1598
 * Callers:
 *     MiEmptyKernelStackCache @ 0x14000196C (MiEmptyKernelStackCache.c)
 *     MiDeleteNoBlockStacks @ 0x1400BE128 (MiDeleteNoBlockStacks.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400F12A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x1400F1B80 (MmDeleteKernelStack.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004F1E0 (MiReturnResidentAvailable.c)
 *     MiReleasePtes @ 0x1400516D0 (MiReleasePtes.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     MiDeleteKernelStackPages @ 0x1400A16C8 (MiDeleteKernelStackPages.c)
 *     MiClearStackOwners @ 0x1400F1F0C (MiClearStackOwners.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiDeleteKernelStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rsi
  unsigned int v8; // ebx
  ULONG_PTR v9; // rsi

  v4 = a2;
  if ( (a2 & 2) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    MiClearStackOwners(a1, a2, a3, a4);
    __writecr8(CurrentIrql);
    v7 = a1 << 25 >> 16;
    *(_QWORD *)(v7 + 4064) = v7 ^ qword_140327780;
    *(_DWORD *)(v7 + 4088) = v4 & 0xFFFFFFFD;
    RtlpInterlockedPushEntrySList(&stru_140327550, (PSLIST_ENTRY)(v7 + 4080));
    if ( !_InterlockedCompareExchange(&dword_1403275A0, 1, 0) )
      ExQueueWorkItem(&stru_140327580, HyperCriticalWorkQueue);
  }
  else
  {
    v8 = 18;
    if ( (a2 & 1) == 0 )
      v8 = (unsigned __int8)byte_140327540;
    v9 = a1 - 8LL * v8;
    MiDeleteKernelStackPages(v9);
    _InterlockedExchangeAdd64(&qword_140327910, -(__int64)v8);
    MiReturnResidentAvailable(0LL);
    MiReleasePtes((__int64)&qword_140327870, v9, v8 + 1);
    MiReturnCommit((__int64)MiSystemPartition, v8);
  }
}
