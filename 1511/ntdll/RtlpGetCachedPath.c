/*
 * XREFs of RtlpGetCachedPath @ 0x18002FB34
 * Callers:
 *     LdrpGetDllPath @ 0x18002F8D8 (LdrpGetDllPath.c)
 *     RtlGetExePath @ 0x180082CC0 (RtlGetExePath.c)
 *     RtlGetSearchPath @ 0x180082FB0 (RtlGetSearchPath.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpGetCachedPath(__int64 *a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rsi
  void *v12; // rdi

  if ( a3 || a4 )
  {
    v8 = 0;
    v9 = 0LL;
  }
  else
  {
    v8 = 1;
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v9 = *a1;
    if ( *a1 && (*(_BYTE *)(v9 + 100) || *(_QWORD *)(v9 + 88) == NtCurrentPeb()->ProcessParameters->EnvironmentVersion) )
    {
      ++*(_QWORD *)(v9 + 80);
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      return v9;
    }
    RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  }
  result = a2(a3, a4);
  v11 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = 1LL;
    if ( v8 )
    {
      v12 = 0LL;
      RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
      if ( *a1 == v9 )
      {
        *a1 = v11;
        ++*(_QWORD *)(v11 + 80);
        if ( v9 )
        {
          if ( !--*(_QWORD *)(v9 + 80) )
            v12 = (void *)v9;
        }
      }
      RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
      if ( v12 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
    }
    return v11;
  }
  return result;
}
