/*
 * XREFs of RtlAddGrowableFunctionTable @ 0x18006F750
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlAvlInsertNodeEx @ 0x18006F950 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     NtSetInformationProcess @ 0x1800A67A0 (NtSetInformationProcess.c)
 *     ZwQuerySystemTime @ 0x1800A6F60 (ZwQuerySystemTime.c)
 *     RtlpFreeReadOnlyHeap @ 0x1800F762C (RtlpFreeReadOnlyHeap.c)
 *     RtlpProtectInvertedFunctionTable @ 0x1800F765C (RtlpProtectInvertedFunctionTable.c)
 *     RtlpProtectReadOnlyHeap @ 0x1800F7668 (RtlpProtectReadOnlyHeap.c)
 */

DWORD __cdecl RtlAddGrowableFunctionTable(
        PVOID *DynamicTable,
        PRUNTIME_FUNCTION FunctionTable,
        DWORD EntryCount,
        DWORD MaximumEntryCount,
        ULONG_PTR RangeBase,
        ULONG_PTR RangeEnd)
{
  DWORD result; // eax
  char v10; // bl
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  LARGE_INTEGER *v13; // rdi
  NTSTATUS v14; // esi
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  LARGE_INTEGER **v21; // rax
  LARGE_INTEGER *ProcessInformation; // [rsp+20h] [rbp-28h] BYREF
  char v23; // [rsp+28h] [rbp-20h]

  if ( EntryCount > MaximumEntryCount || RangeBase >= RangeEnd )
    __fastfail(5u);
  result = LdrEnsureMrdataHeapExists();
  v10 = 0;
  if ( (result & 0x80000000) != 0 )
    return result;
  RtlpProtectReadOnlyHeap(0LL);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v13 = Heap;
  if ( !Heap )
  {
    v14 = -1073741670;
    goto LABEL_11;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  v13[5].QuadPart = RangeEnd;
  v13[4].QuadPart = RangeBase;
  v13[6].QuadPart = RangeBase;
  v13[10].LowPart = 3;
  ProcessInformation = v13;
  v23 = 0;
  v14 = NtSetInformationProcess(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          ProcessDynamicFunctionTableInformation,
          &ProcessInformation,
          0x10u);
  if ( v14 < 0 )
  {
    RtlpFreeReadOnlyHeap(v13);
    goto LABEL_11;
  }
  RtlpProtectInvertedFunctionTable(0LL);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v15 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v16) = 0;
  if ( RtlpDynamicFunctionTableTreeMin )
  {
    while ( 1 )
    {
      if ( v13[4].QuadPart < *(v15 - 7) )
      {
        v17 = (_QWORD *)*v15;
        if ( !*v15 )
        {
          LOBYTE(v16) = 0;
          break;
        }
      }
      else
      {
        v17 = (_QWORD *)v15[1];
        if ( !v17 )
        {
          LOBYTE(v16) = 1;
          break;
        }
      }
      v15 = v17;
    }
  }
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v15, v16, &v13[11]);
  v19 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_24;
  while ( v13[5].QuadPart < *(v19 - 10) )
  {
    v20 = (_QWORD *)*v19;
    if ( !*v19 )
      goto LABEL_24;
LABEL_27:
    v19 = v20;
  }
  v20 = (_QWORD *)v19[1];
  if ( v20 )
    goto LABEL_27;
  v10 = 1;
LABEL_24:
  LOBYTE(v18) = v10;
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v19, v18, &v13[14]);
  v21 = (LARGE_INTEGER **)qword_180163280;
  if ( *(__int64 **)qword_180163280 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  v13->QuadPart = (__int64)&RtlpDynamicFunctionTable;
  v13[1].QuadPart = (__int64)v21;
  *v21 = v13;
  qword_180163280 = (__int64)v13;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlpProtectInvertedFunctionTable(1LL);
  *DynamicTable = v13;
LABEL_11:
  RtlpProtectReadOnlyHeap(1LL);
  return v14;
}
