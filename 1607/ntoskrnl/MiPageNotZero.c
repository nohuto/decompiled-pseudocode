/*
 * XREFs of MiPageNotZero @ 0x1401F2AB8
 * Callers:
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x140060FF8 (MiSlistGetFreePage.c)
 *     MiRemoveAnyPage @ 0x1400642C0 (MiRemoveAnyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x1401623C0 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(int *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // edx
  unsigned int v5; // r15d
  int v6; // r12d
  int *v7; // r8
  ULONG v8; // r14d
  int *v9; // rbx

  _InterlockedAdd(&dword_140327168, 1u);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = BugCheckParameter1;
  if ( BugCheckParameter1 >= BugCheckParameter1 + 1024 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *v7 )
    {
      if ( ++v4 != 1 )
        goto LABEL_10;
      v5 = (unsigned __int16)v7 & 0xFFF;
      v6 = *v7;
      if ( ((*v7 - 1) & *v7) != 0 )
        break;
    }
    if ( ++v7 >= BugCheckParameter1 + 1024 )
      goto LABEL_8;
  }
  v4 = 2;
LABEL_8:
  if ( v4 == 1 )
  {
    v8 = 299;
    _InterlockedAdd(&dword_140327164, 1u);
  }
  else
  {
LABEL_10:
    v8 = 295;
  }
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v8, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
  KeSetEvent(*((PRKEVENT *)v9 + 42), 0, 0);
  if ( v9 != MiSystemPartition )
    KeSetEvent(qword_1403236D0, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_1403270D4, 1, 0) )
  {
    stru_1403270E8.List.Flink = 0LL;
    dword_1403270D8 = v6;
    qword_1403270E0 = v5 + (BugCheckParameter2 << 12);
    stru_1403270E8.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_1403270E8.Parameter = &dword_1403270D0;
    dword_1403270D0 = v8;
    ExQueueWorkItem(&stru_1403270E8, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
