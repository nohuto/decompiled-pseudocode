/*
 * XREFs of RtlReleasePath @ 0x180035A90
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x180016890 (LdrpResolveProcedureAddress.c)
 *     LdrpReleaseDllPath @ 0x1800186F4 (LdrpReleaseDllPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlReleasePath(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  signed __int64 result; // rax

  v4 = a1 - 112;
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, a2, a3, a4);
  --*(_QWORD *)(v4 + 80);
  v5 = 0LL;
  if ( !*(_QWORD *)(v4 + 80) )
    v5 = v4;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v5 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return result;
}
