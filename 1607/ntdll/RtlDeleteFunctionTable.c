/*
 * XREFs of RtlDeleteFunctionTable @ 0x18006E9D0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x1800190A8 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x18006ED80 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  unsigned __int64 v2; // rdi
  BOOLEAN v3; // si
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *i; // rbx
  int v11; // esi
  __int64 *v12; // rcx
  __int64 *v13; // rsi
  __int64 v14; // rcx
  __int64 **v15; // rax
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rcx
  int v20; // edx

  v2 = 0LL;
  v3 = 0;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v4, v5, v6);
  for ( i = (__int64 *)RtlpDynamicFunctionTable; i != &RtlpDynamicFunctionTable; i = (__int64 *)*i )
  {
    v2 = (unsigned __int64)i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      if ( qword_180163310 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v7, v8, v9);
        v11 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap(LdrpMrdataHeap, 0);
        if ( v11 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v11 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      if ( *((_DWORD *)i + 20) != 3 )
      {
        if ( *((_DWORD *)i + 20) == 2 )
        {
          v12 = &RtlpDynamicCallbackTableTreeMin;
          v13 = &RtlpDynamicCallbackTableTreeMax;
        }
        else
        {
          v12 = &RtlpDynamicFunctionTableTreeMin;
          v13 = &RtlpDynamicFunctionTableTreeMax;
        }
        RtlAvlRemoveNode(v12, i + 11);
        RtlAvlRemoveNode(v13, i + 14);
        v14 = *i;
        v15 = (__int64 **)i[1];
        if ( *(__int64 **)(*i + 8) != i || *v15 != i )
          __fastfail(3u);
        *v15 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
      }
      v3 = 1;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v2 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v19 = qword_180163310 ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v19, 0, v2);
    }
    if ( qword_180163310 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v16, v17, v18);
      v20 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v20 - 1;
      if ( v20 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return v3;
}
