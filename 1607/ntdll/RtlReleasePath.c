/*
 * XREFs of RtlReleasePath @ 0x180009190
 * Callers:
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrGetProcedureAddressForCaller @ 0x180031D50 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x180033830 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

void __cdecl RtlReleasePath(PWSTR Path)
{
  PWSTR v1; // rbx
  bool v2; // zf
  PWSTR v3; // rdi

  v1 = Path - 56;
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v2 = (*((_QWORD *)v1 + 10))-- == 1LL;
  v3 = 0LL;
  if ( v2 )
    v3 = v1;
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
}
