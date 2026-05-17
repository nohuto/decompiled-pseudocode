/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800DA5F8
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085D2C (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlpInvalidatePathCache @ 0x180008EF0 (RtlpInvalidatePathCache.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

signed __int64 __fastcall RtlpSignalSystemDirsModification(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, a2, a3, a4);
  v4 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v5 = RtlpInvalidatePathCache((__int64 *)&RtlpExeSearchPath);
  v6 = RtlpInvalidatePathCache(&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v5 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( v6 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return result;
}
