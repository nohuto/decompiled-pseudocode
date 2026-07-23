/*
 * XREFs of RtlAddFunctionTable @ 0x18007E2A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x180055E30 (RtlProtectHeap.c)
 *     ZwQuerySystemTime @ 0x1800A5C00 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v6; // ebx
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v9; // rbx
  unsigned __int64 BeginAddress; // r8
  PRUNTIME_FUNCTION v11; // rdx
  ULONG v12; // r9d
  unsigned __int64 EndAddress; // r10
  __int64 **v14; // rax
  int v15; // edx
  int v17; // r11d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // ecx

  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    goto LABEL_17;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    RtlProtectHeap(LdrpMrdataHeap, 0);
  if ( v6 == -1 )
  {
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    ProcessHeap = LdrpMrdataHeap;
  else
LABEL_17:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x58uLL);
  v9 = (__int64)Heap;
  if ( !Heap )
  {
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v20 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v20 - 1;
      if ( v20 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  BeginAddress = FunctionTable->BeginAddress;
  v11 = FunctionTable + 1;
  *(_QWORD *)(v9 + 32) = BeginAddress;
  v12 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v9 + 80) = 0;
  *(_QWORD *)(v9 + 40) = EndAddress;
  *(_QWORD *)(v9 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v17 = 0;
    do
    {
      if ( !v17 && v11->BeginAddress < FunctionTable[v12 - 1].BeginAddress )
      {
        v17 = 1;
        *(_DWORD *)(v9 + 80) = 1;
      }
      v18 = v11->BeginAddress;
      if ( v18 < BeginAddress )
      {
        BeginAddress = (unsigned int)v18;
        *(_QWORD *)(v9 + 32) = v18;
      }
      v19 = v11->EndAddress;
      if ( v19 > EndAddress )
      {
        EndAddress = (unsigned int)v19;
        *(_QWORD *)(v9 + 40) = v19;
      }
      ++v11;
      ++v12;
    }
    while ( v12 < EntryCount );
  }
  *(_QWORD *)(v9 + 32) += BaseAddress;
  *(_QWORD *)(v9 + 40) += BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v14 = (__int64 **)qword_180155270;
  *(_QWORD *)v9 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v9 + 8) = v14;
  if ( *v14 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *v14 = (__int64 *)v9;
  qword_180155270 = v9;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v15 - 1;
    if ( v15 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
