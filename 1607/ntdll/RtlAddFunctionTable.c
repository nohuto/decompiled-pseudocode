/*
 * XREFs of RtlAddFunctionTable @ 0x18006F460
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlAvlInsertNodeEx @ 0x18006F960 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x1800A6F60 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  char *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  char *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  int v17; // ecx
  unsigned __int64 BeginAddress; // r8
  PRUNTIME_FUNCTION v19; // rdx
  ULONG v20; // r9d
  unsigned __int64 EndAddress; // r10
  int v22; // r11d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  char *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 *v34; // rax
  char *v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( !qword_180163310 )
    goto LABEL_10;
  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
  v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    RtlProtectHeap(LdrpMrdataHeap, 0);
  if ( v10 == -1 )
  {
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  *(_DWORD *)LdrpMrdataHeapUnprotected = v10 + 1;
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  if ( qword_180163310 )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
LABEL_10:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 0x88uLL);
  v16 = Heap;
  if ( !Heap )
  {
    if ( qword_180163310 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v13, v14, v15);
      v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v17 - 1;
      if ( v17 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v19 = FunctionTable + 1;
  *(_QWORD *)(v16 + 32) = BeginAddress;
  v20 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v16 + 80) = 0;
  *(_QWORD *)(v16 + 40) = EndAddress;
  *(_QWORD *)(v16 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v22 = 0;
    do
    {
      if ( !v22 && v19->BeginAddress < FunctionTable[v20 - 1].BeginAddress )
      {
        v22 = 1;
        *(_DWORD *)(v16 + 80) = 1;
      }
      v23 = v19->BeginAddress;
      if ( v23 < BeginAddress )
      {
        BeginAddress = (unsigned int)v23;
        *(_QWORD *)(v16 + 32) = v23;
      }
      v24 = v19->EndAddress;
      if ( v24 > EndAddress )
      {
        EndAddress = (unsigned int)v24;
        *(_QWORD *)(v16 + 40) = v24;
      }
      ++v19;
      ++v20;
    }
    while ( v20 < EntryCount );
  }
  *(_QWORD *)(v16 + 32) += BaseAddress;
  *(_QWORD *)(v16 + 40) += BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v25, v26, v27);
  v28 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v29) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_35;
  while ( *(_QWORD *)(v16 + 32) >= *(v28 - 7) )
  {
    v30 = (_QWORD *)v28[1];
    if ( !v30 )
    {
      LOBYTE(v29) = 1;
      goto LABEL_35;
    }
LABEL_33:
    v28 = v30;
  }
  v30 = (_QWORD *)*v28;
  if ( *v28 )
    goto LABEL_33;
  LOBYTE(v29) = 0;
LABEL_35:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v28, v29, v16 + 88);
  v31 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v32) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_42;
  while ( 2 )
  {
    if ( *(_QWORD *)(v16 + 40) >= *(v31 - 10) )
    {
      v33 = (_QWORD *)v31[1];
      if ( !v33 )
      {
        LOBYTE(v32) = 1;
        goto LABEL_42;
      }
      goto LABEL_40;
    }
    v33 = (_QWORD *)*v31;
    if ( *v31 )
    {
LABEL_40:
      v31 = v33;
      continue;
    }
    break;
  }
  LOBYTE(v32) = 0;
LABEL_42:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v31, v32, v16 + 112);
  v34 = (__int64 *)qword_180163280;
  if ( *(__int64 **)qword_180163280 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v16 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v16 + 8) = v34;
  *v34 = v16;
  qword_180163280 = v16;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v35, v36, v37);
    v38 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v38 - 1;
    if ( v38 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
