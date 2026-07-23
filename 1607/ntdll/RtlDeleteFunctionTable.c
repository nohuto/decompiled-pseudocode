/*
 * XREFs of RtlDeleteFunctionTable @ 0x18006E9C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrProtectMrdata @ 0x180019098 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBB0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x18006ED70 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 *v2; // rdi
  BOOLEAN v3; // si
  __int64 *i; // rbx
  int v5; // esi
  __int64 *v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rcx
  __int64 **v9; // rax
  PVOID v10; // rcx
  int v11; // edx

  v2 = 0LL;
  v3 = 0;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  for ( i = (__int64 *)RtlpDynamicFunctionTable; i != &RtlpDynamicFunctionTable; i = (__int64 *)*i )
  {
    v2 = i;
    if ( (PRUNTIME_FUNCTION)i[2] == FunctionTable )
    {
      if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap(LdrpMrdataHeap, 0);
        if ( v5 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      if ( *((_DWORD *)i + 20) != 3 )
      {
        if ( *((_DWORD *)i + 20) == 2 )
        {
          v6 = &RtlpDynamicCallbackTableTreeMin;
          v7 = &RtlpDynamicCallbackTableTreeMax;
        }
        else
        {
          v6 = &RtlpDynamicFunctionTableTreeMin;
          v7 = &RtlpDynamicFunctionTableTreeMax;
        }
        RtlAvlRemoveNode(v6, i + 11);
        RtlAvlRemoveNode(v7, i + 14);
        v8 = *i;
        v9 = (__int64 **)i[1];
        if ( *(__int64 **)(*i + 8) != i || *v9 != i )
          __fastfail(3u);
        *v9 = (__int64 *)v8;
        *(_QWORD *)(v8 + 8) = v9;
      }
      v3 = 1;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( *((_DWORD *)v2 + 20) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v10 = LdrSystemDllInitBlock.Wow64SharedInformation[9] ? LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v10, 0, v2);
    }
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
  }
  return v3;
}
