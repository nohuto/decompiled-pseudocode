/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x18006F130
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlStringCbCopyW @ 0x180040FD4 (RtlStringCbCopyW.c)
 *     RtlAvlInsertNodeEx @ 0x18006F960 (RtlAvlInsertNodeEx.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
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
  char *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // ebx
  unsigned __int64 v17; // r8
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v20; // rbx
  char *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 *v30; // rax
  char *v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // edx
  int v36; // ecx

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
  v15 = qword_180163310;
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v12, v13, v14);
    v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v16 == -1 )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v16 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    v15 = qword_180163310;
  }
  v17 = v10 + 136;
  if ( v15 )
  {
    if ( v17 >= 0xFF000 )
      goto LABEL_45;
    ProcessHeap = (void *)LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v17);
  v20 = Heap;
  if ( !Heap )
  {
    v15 = qword_180163310;
LABEL_45:
    if ( v15 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v12, v17, v14);
      v36 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v36 - 1;
      if ( v36 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v20 + 32) = BaseAddress;
  *(_QWORD *)(v20 + 40) = BaseAddress + v6;
  *(_QWORD *)(v20 + 64) = Context;
  *(_QWORD *)(v20 + 48) = BaseAddress;
  *(_QWORD *)(v20 + 56) = Callback;
  *(_DWORD *)(v20 + 80) = 2;
  *(_QWORD *)(v20 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v20 + 72) = v20 + 136;
    RtlStringCbCopyW((_WORD *)(v20 + 136), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v21, v22, v23);
  v24 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  LOBYTE(v25) = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_28;
  while ( *(_QWORD *)(v20 + 32) >= *(v24 - 7) )
  {
    v26 = (_QWORD *)v24[1];
    if ( !v26 )
    {
      LOBYTE(v25) = 1;
      goto LABEL_28;
    }
LABEL_26:
    v24 = v26;
  }
  v26 = (_QWORD *)*v24;
  if ( *v24 )
    goto LABEL_26;
  LOBYTE(v25) = 0;
LABEL_28:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMin, v24, v25, v20 + 88);
  v27 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  LOBYTE(v28) = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_35;
  while ( 2 )
  {
    if ( *(_QWORD *)(v20 + 40) >= *(v27 - 10) )
    {
      v29 = (_QWORD *)v27[1];
      if ( !v29 )
      {
        LOBYTE(v28) = 1;
        goto LABEL_35;
      }
      goto LABEL_33;
    }
    v29 = (_QWORD *)*v27;
    if ( *v27 )
    {
LABEL_33:
      v27 = v29;
      continue;
    }
    break;
  }
  LOBYTE(v28) = 0;
LABEL_35:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMax, v27, v28, v20 + 112);
  v30 = (__int64 *)qword_180163280;
  if ( *(__int64 **)qword_180163280 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v20 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v20 + 8) = v30;
  *v30 = v20;
  qword_180163280 = v20;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( qword_180163310 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v31, v32, v33);
    v34 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v34 - 1;
    if ( v34 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
