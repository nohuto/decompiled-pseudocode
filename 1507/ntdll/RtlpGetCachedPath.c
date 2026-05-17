/*
 * XREFs of RtlpGetCachedPath @ 0x180036C64
 * Callers:
 *     LdrpGetDllPath @ 0x180036A08 (LdrpGetDllPath.c)
 *     RtlGetSearchPath @ 0x180075A90 (RtlGetSearchPath.c)
 *     RtlGetExePath @ 0x180077210 (RtlGetExePath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpComputeDllPathWithOptions @ 0x180067C30 (RtlpComputeDllPathWithOptions.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpGetCachedPath(unsigned __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  char v8; // si
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  char *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi

  if ( a3 || a4 )
  {
    v8 = 0;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, a2, 0LL, 0LL);
    v9 = *a1;
    if ( *a1 && (*(_BYTE *)(v9 + 100) || *(_QWORD *)(v9 + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_QWORD *)(v9 + 80);
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v9;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  }
  if ( a2 == (char *)RtlpComputeDllPathWithOptions )
    result = RtlpComputeDllPathWithOptions(a3, a4);
  else
    result = ((__int64 (__fastcall *)(__int64, __int64))a2)(a3, a4);
  v14 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      v15 = 0LL;
      RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, v11, v12, v13);
      if ( *a1 == v9 )
      {
        *a1 = v14;
        ++*(_QWORD *)(v14 + 80);
        if ( v9 )
        {
          if ( !--*(_QWORD *)(v9 + 80) )
            v15 = v9;
        }
      }
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      if ( v15 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
    }
    return v14;
  }
  return result;
}
