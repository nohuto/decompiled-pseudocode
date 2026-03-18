/*
 * XREFs of MiPageNotZero @ 0x1401F2C8C
 * Callers:
 *     MiCreateSharedZeroPages @ 0x1400390B0 (MiCreateSharedZeroPages.c)
 *     MiGetFreeOrZeroPage @ 0x14003DC80 (MiGetFreeOrZeroPage.c)
 *     MiSlistGetFreePage @ 0x140061478 (MiSlistGetFreePage.c)
 *     MiRemoveAnyPage @ 0x140064740 (MiRemoveAnyPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIdealClusterPage @ 0x1401F6748 (MiIdealClusterPage.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140161E50 (KeZeroPages.c)
 */

__int64 __fastcall MiPageNotZero(int *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // edx
  unsigned int v5; // r15d
  int v6; // r12d
  int *v7; // r8
  ULONG v8; // r14d
  int *v9; // rbx

  _InterlockedAdd(&dword_140327128, 1u);
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
    _InterlockedAdd(&dword_140327124, 1u);
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
    KeSetEvent(qword_140323690, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_140327094, 1, 0) )
  {
    stru_1403270A8.List.Flink = 0LL;
    dword_140327098 = v6;
    qword_1403270A0 = v5 + (BugCheckParameter2 << 12);
    stru_1403270A8.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_1403270A8.Parameter = &dword_140327090;
    dword_140327090 = v8;
    ExQueueWorkItem(&stru_1403270A8, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
