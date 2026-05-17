/*
 * XREFs of RtlReleasePath @ 0x18002F730
 * Callers:
 *     LdrpReleaseDllPath @ 0x1800112AC (LdrpReleaseDllPath.c)
 *     LdrpResolveDelayloadAddress @ 0x1800323F0 (LdrpResolveDelayloadAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlReleasePath(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  signed __int64 result; // rax

  v4 = a1 - 112;
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpCachedPathLock, a2, a3, a4);
  --*(_QWORD *)(v4 + 80);
  v5 = 0LL;
  if ( !*(_QWORD *)(v4 + 80) )
    v5 = v4;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v5 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return result;
}
