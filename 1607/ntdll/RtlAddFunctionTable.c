/*
 * XREFs of RtlAddFunctionTable @ 0x18006F450
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x18006F950 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x1800A6F60 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  int v7; // ebx
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v10; // rbx
  int v11; // ecx
  unsigned __int64 BeginAddress; // r8
  PRUNTIME_FUNCTION v13; // rdx
  ULONG v14; // r9d
  unsigned __int64 EndAddress; // r10
  int v16; // r11d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 *v25; // rax
  int v26; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    goto LABEL_10;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    RtlProtectHeap(LdrpMrdataHeap, 0);
  if ( v7 == -1 )
  {
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    ProcessHeap = LdrpMrdataHeap;
  else
LABEL_10:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, 0x88uLL);
  v10 = (__int64)Heap;
  if ( !Heap )
  {
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v11 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v11 - 1;
      if ( v11 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = (__int64)FunctionTable;
  Heap[10].HighPart = EntryCount;
  ZwQuerySystemTime(Heap + 3);
  BeginAddress = FunctionTable->BeginAddress;
  v13 = FunctionTable + 1;
  *(_QWORD *)(v10 + 32) = BeginAddress;
  v14 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v10 + 80) = 0;
  *(_QWORD *)(v10 + 40) = EndAddress;
  *(_QWORD *)(v10 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v16 = 0;
    do
    {
      if ( !v16 && v13->BeginAddress < FunctionTable[v14 - 1].BeginAddress )
      {
        v16 = 1;
        *(_DWORD *)(v10 + 80) = 1;
      }
      v17 = v13->BeginAddress;
      if ( v17 < BeginAddress )
      {
        BeginAddress = (unsigned int)v17;
        *(_QWORD *)(v10 + 32) = v17;
      }
      v18 = v13->EndAddress;
      if ( v18 > EndAddress )
      {
        EndAddress = (unsigned int)v18;
        *(_QWORD *)(v10 + 40) = v18;
      }
      ++v13;
      ++v14;
    }
    while ( v14 < EntryCount );
  }
  *(_QWORD *)(v10 + 32) += BaseAddress;
  *(_QWORD *)(v10 + 40) += BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v19 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v20) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_35;
  while ( *(_QWORD *)(v10 + 32) >= *(v19 - 7) )
  {
    v21 = (_QWORD *)v19[1];
    if ( !v21 )
    {
      LOBYTE(v20) = 1;
      goto LABEL_35;
    }
LABEL_33:
    v19 = v21;
  }
  v21 = (_QWORD *)*v19;
  if ( *v19 )
    goto LABEL_33;
  LOBYTE(v20) = 0;
LABEL_35:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v19, v20, v10 + 88);
  v22 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v23) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_42;
  while ( 2 )
  {
    if ( *(_QWORD *)(v10 + 40) >= *(v22 - 10) )
    {
      v24 = (_QWORD *)v22[1];
      if ( !v24 )
      {
        LOBYTE(v23) = 1;
        goto LABEL_42;
      }
      goto LABEL_40;
    }
    v24 = (_QWORD *)*v22;
    if ( *v22 )
    {
LABEL_40:
      v22 = v24;
      continue;
    }
    break;
  }
  LOBYTE(v23) = 0;
LABEL_42:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v22, v23, v10 + 112);
  v25 = (__int64 *)qword_180163280;
  if ( *(__int64 **)qword_180163280 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v10 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v10 + 8) = v25;
  *v25 = v10;
  qword_180163280 = v10;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
    if ( v26 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
