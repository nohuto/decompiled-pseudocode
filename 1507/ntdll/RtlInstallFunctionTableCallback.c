/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x180074270
 * Callers:
 *     <none>
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlStringCbCopyW @ 0x18001F684 (RtlStringCbCopyW.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18003611C (LdrProtectMrdata.c)
 *     ZwQuerySystemTime @ 0x180093EA0 (ZwQuerySystemTime.c)
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
  char *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 **v27; // rax
  char *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
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
  v15 = qword_1801572F0;
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v12, v13, v14);
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
    v15 = qword_1801572F0;
  }
  v17 = v10 + 88;
  if ( v15 )
  {
    if ( v17 >= 0xFF000 )
      goto LABEL_32;
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
    v15 = qword_1801572F0;
LABEL_32:
    if ( v15 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v12, v17, v14);
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
    *(_QWORD *)(v20 + 72) = v20 + 88;
    RtlStringCbCopyW((_WORD *)(v20 + 88), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0, v21, v22, v23);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock, v24, v25, v26);
  v27 = (__int64 **)qword_180157270;
  *(_QWORD *)v20 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v20 + 8) = v27;
  if ( *v27 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *v27 = (__int64 *)v20;
  qword_180157270 = v20;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1, v28, v29, v30);
  if ( qword_1801572F0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock, v31, v32, v33);
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
