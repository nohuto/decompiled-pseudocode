/*
 * XREFs of RtlDeleteFunctionTable @ 0x18007B4F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x18002F3A4 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x180055E30 (RtlProtectHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18007CA10 (RtlDeleteGrowableFunctionTable.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 v5; // rbx
  BOOLEAN v6; // si
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *i; // rdi
  int v14; // esi
  __int64 v15; // rcx
  __int64 **v16; // rax
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  void *v20; // rcx
  char *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // edx

  v5 = 0LL;
  v6 = 0;
  LdrProtectMrdata(0, v1, v2, v3);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v7, v8, v9);
  for ( i = (__int64 *)RtlpDynamicFunctionTable; i != &RtlpDynamicFunctionTable; i = (__int64 *)*i )
  {
    v5 = (unsigned __int64)i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      if ( qword_1801552F0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v10, v11, v12);
        v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        if ( v14 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      v15 = *i;
      v16 = (__int64 **)i[1];
      if ( *(__int64 **)(*i + 8) != i || *v16 != i )
        __fastfail(3u);
      *v16 = (__int64 *)v15;
      v6 = 1;
      *(_QWORD *)(v15 + 8) = v16;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1, v17, v18, v19);
  if ( v6 )
  {
    if ( *(_DWORD *)(v5 + 80) == 3 )
    {
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      RtlDeleteGrowableFunctionTable(v5);
    }
    else
    {
      v20 = qword_1801552F0 ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v20, 0, v5);
    }
    if ( qword_1801552F0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v21, v22, v23);
      v24 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v24 - 1;
      if ( v24 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return v6;
}
