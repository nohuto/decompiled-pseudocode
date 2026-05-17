/*
 * XREFs of RtlReleasePath @ 0x1800091A0
 * Callers:
 *     LdrpReleaseDllPath @ 0x18001216C (LdrpReleaseDllPath.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x180033840 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlReleasePath(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = a1 - 112;
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v2 = (*(_QWORD *)(v1 + 80))-- == 1LL;
  v3 = 0LL;
  if ( v2 )
    v3 = v1;
  result = RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v3 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v3);
  return result;
}
