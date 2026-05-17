/*
 * XREFs of RtlAddFunctionTable @ 0x180072810
 * Callers:
 *     <none>
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     ZwQuerySystemTime @ 0x180093EA0 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  unsigned __int64 BeginAddress; // r8
  PRUNTIME_FUNCTION v17; // rdx
  __int64 v18; // r9
  unsigned __int64 EndAddress; // r10
  char *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 **v23; // rax
  char *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  char *v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // edx
  int v32; // r11d
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( !qword_1801572F0 )
    goto LABEL_17;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v6, v7, v8);
  v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    RtlProtectHeap(LdrpMrdataHeap, 0);
  if ( v9 == -1 )
  {
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  if ( qword_1801572F0 )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
LABEL_17:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 88LL);
  v15 = Heap;
  if ( !Heap )
  {
    if ( qword_1801572F0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v12, v13, v14);
      v35 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v35 - 1;
      if ( v35 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v17 = FunctionTable + 1;
  *(_QWORD *)(v15 + 32) = BeginAddress;
  v18 = 1LL;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v15 + 80) = 0;
  *(_QWORD *)(v15 + 40) = EndAddress;
  *(_QWORD *)(v15 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v32 = 0;
    do
    {
      if ( !v32 && v17->BeginAddress < FunctionTable[(unsigned int)(v18 - 1)].BeginAddress )
      {
        v32 = 1;
        *(_DWORD *)(v15 + 80) = 1;
      }
      v33 = v17->BeginAddress;
      if ( v33 < BeginAddress )
      {
        BeginAddress = (unsigned int)v33;
        *(_QWORD *)(v15 + 32) = v33;
      }
      v34 = v17->EndAddress;
      if ( v34 > EndAddress )
      {
        EndAddress = (unsigned int)v34;
        *(_QWORD *)(v15 + 40) = v34;
      }
      ++v17;
      v18 = (unsigned int)(v18 + 1);
    }
    while ( (unsigned int)v18 < EntryCount );
  }
  *(_QWORD *)(v15 + 32) += BaseAddress;
  *(_QWORD *)(v15 + 40) += BaseAddress;
  LdrProtectMrdata(0, (char *)v17, BeginAddress, v18);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v20, v21, v22);
  v23 = (__int64 **)qword_180157270;
  *(_QWORD *)v15 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v15 + 8) = v23;
  if ( *v23 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *v23 = (__int64 *)v15;
  qword_180157270 = v15;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1, v24, v25, v26);
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v27, v28, v29);
    v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v30 - 1;
    if ( v30 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
