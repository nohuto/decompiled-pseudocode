/*
 * XREFs of MiPageNotZero @ 0x1401DFFEC
 * Callers:
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 *     MiSlistGetFreePage @ 0x140012D54 (MiSlistGetFreePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPageNotZero(int *BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  int v4; // r8d
  unsigned int v5; // r14d
  int v6; // r15d
  int *v7; // r9
  ULONG v8; // ebp
  int *v9; // rbx

  _InterlockedAdd(&dword_1402FED58, 1u);
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
    _InterlockedAdd(&dword_1402FED54, 1u);
  }
  else
  {
LABEL_10:
    v8 = 295;
  }
  if ( (MmPageValidationAction & 1) != 0 )
    KeBugCheckEx(v8, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(48 * BugCheckParameter2 - 0x57FFFFFFFD8LL)) >> 8) & 0x3FF);
  KeSetEvent(*((PRKEVENT *)v9 + 41), 0, 0);
  if ( v9 != MiSystemPartition )
    KeSetEvent(qword_1402FFE88, 0, 0);
  if ( (MiFlags & 0x30) == 0x20 && !_InterlockedCompareExchange(&dword_1402FECC4, 1, 0) )
  {
    stru_1402FECD8.List.Flink = 0LL;
    dword_1402FECC8 = v6;
    qword_1402FECD0 = v5 + (BugCheckParameter2 << 12);
    stru_1402FECD8.WorkerRoutine = (void (__fastcall *)(void *))MiBadMemoryLogger;
    stru_1402FECD8.Parameter = &dword_1402FECC0;
    dword_1402FECC0 = v8;
    ExQueueWorkItem(&stru_1402FECD8, DelayedWorkQueue);
  }
  return KeZeroPages(BugCheckParameter1, 0x1000uLL);
}
