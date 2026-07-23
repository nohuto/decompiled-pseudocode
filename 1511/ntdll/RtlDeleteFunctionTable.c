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
  __int64 *v2; // rbx
  BOOLEAN v3; // si
  __int64 *i; // rdi
  int v5; // esi
  __int64 v6; // rcx
  __int64 **v7; // rax
  PVOID v8; // rcx
  int v9; // edx

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
      v6 = *i;
      v7 = (__int64 **)i[1];
      if ( *(__int64 **)(*i + 8) != i || *v7 != i )
        __fastfail(3u);
      *v7 = (__int64 *)v6;
      v3 = 1;
      *(_QWORD *)(v6 + 8) = v7;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( *((_DWORD *)v2 + 20) == 3 )
    {
      v2[1] = (__int64)v2;
      *v2 = (__int64)v2;
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v8 = LdrSystemDllInitBlock.Wow64SharedInformation[9] ? LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap(v8, 0, v2);
    }
    if ( LdrSystemDllInitBlock.Wow64SharedInformation[9] )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9 - 1;
      if ( v9 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return v3;
}
