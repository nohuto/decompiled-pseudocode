/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x1800D2234
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180081A3C (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpInvalidatePathCache @ 0x180084570 (RtlpInvalidatePathCache.c)
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
