/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x18006F120
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 *     RtlStringCbCopyW @ 0x180040FC4 (RtlStringCbCopyW.c)
 *     RtlAvlInsertNodeEx @ 0x18006F950 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     ZwQuerySystemTime @ 0x1800A6F60 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  ULONG_PTR v12; // rax
  int v13; // ebx
  SIZE_T v14; // r8
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 *v24; // rax
  int v25; // edx
  int v27; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  v12 = LdrSystemDllInitBlock.Wow64SharedInformation[9];
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v13 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    v12 = LdrSystemDllInitBlock.Wow64SharedInformation[9];
  }
  v14 = v10 + 136;
  if ( v12 )
  {
    if ( v14 >= 0xFF000 )
      goto LABEL_45;
    ProcessHeap = LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, v14);
  v17 = (__int64)Heap;
  if ( !Heap )
  {
    v12 = LdrSystemDllInitBlock.Wow64SharedInformation[9];
LABEL_45:
    if ( v12 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v27 - 1;
      if ( v27 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = TableIdentifier;
  ZwQuerySystemTime(Heap + 3);
  *(_QWORD *)(v17 + 32) = BaseAddress;
  *(_QWORD *)(v17 + 40) = BaseAddress + v6;
  *(_QWORD *)(v17 + 64) = Context;
  *(_QWORD *)(v17 + 48) = BaseAddress;
  *(_QWORD *)(v17 + 56) = Callback;
  *(_DWORD *)(v17 + 80) = 2;
  *(_QWORD *)(v17 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v17 + 72) = v17 + 136;
    RtlStringCbCopyW((_WORD *)(v17 + 136), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v18 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  LOBYTE(v19) = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_28;
  while ( *(_QWORD *)(v17 + 32) >= *(v18 - 7) )
  {
    v20 = (_QWORD *)v18[1];
    if ( !v20 )
    {
      LOBYTE(v19) = 1;
      goto LABEL_28;
    }
LABEL_26:
    v18 = v20;
  }
  v20 = (_QWORD *)*v18;
  if ( *v18 )
    goto LABEL_26;
  LOBYTE(v19) = 0;
LABEL_28:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMin, v18, v19, v17 + 88);
  v21 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  LOBYTE(v22) = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_35;
  while ( 2 )
  {
    if ( *(_QWORD *)(v17 + 40) >= *(v21 - 10) )
    {
      v23 = (_QWORD *)v21[1];
      if ( !v23 )
      {
        LOBYTE(v22) = 1;
        goto LABEL_35;
      }
      goto LABEL_33;
    }
    v23 = (_QWORD *)*v21;
    if ( *v21 )
    {
LABEL_33:
      v21 = v23;
      continue;
    }
    break;
  }
  LOBYTE(v22) = 0;
LABEL_35:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMax, v21, v22, v17 + 112);
  v24 = (__int64 *)qword_180163280;
  if ( *(__int64 **)qword_180163280 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v17 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v17 + 8) = v24;
  *v24 = v17;
  qword_180163280 = v17;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v25 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v25 - 1;
    if ( v25 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
