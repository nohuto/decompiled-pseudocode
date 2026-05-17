/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800C9754
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180074FC8 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180059D70 (RtlpInvalidatePathCache.c)
 */

signed __int64 __fastcall RtlpSignalSystemDirsModification(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  signed __int64 result; // rax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, a2, a3, a4);
  v4 = RtlpInvalidatePathCache(&RtlpDllSearchPath);
  v5 = RtlpInvalidatePathCache((__int64 *)&RtlpExeSearchPath);
  v6 = RtlpInvalidatePathCache((__int64 *)&RtlpSearchPath);
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v4 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  if ( v5 )
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  if ( v6 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return result;
}
