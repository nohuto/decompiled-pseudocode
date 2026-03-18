/*
 * XREFs of MiPageNotZero @ 0x1402262F4
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveAnyPage @ 0x140100180 (MiRemoveAnyPage.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageNotZero(int *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r8d
  unsigned int v5; // r14d
  int v6; // r15d
  int *v7; // r9
  ULONG v8; // ebp
  __int16 *v9; // rbx

  _InterlockedAdd(&dword_14034F20C, 1u);
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
    _InterlockedAdd(&dword_14034F208, 1u);
  }
  else
  {
LABEL_10:
    v8 = 295;
  }
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v8, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
  KeSetEvent(*((PRKEVENT *)v9 + 43), 0, 0);
  if ( v9 != MiSystemPartition )
    KeSetEvent(qword_140353E58, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_14034F17C, 1, 0) )
  {
    stru_14034F190.List.Flink = 0LL;
    dword_14034F180 = v6;
    qword_14034F188 = v5 + (BugCheckParameter2 << 12);
    stru_14034F190.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_14034F190.Parameter = &dword_14034F178;
    dword_14034F178 = v8;
    ExQueueWorkItem(&stru_14034F190, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
