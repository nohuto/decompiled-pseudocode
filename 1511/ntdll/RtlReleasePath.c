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

void __cdecl RtlReleasePath(PWSTR Path)
{
  PWSTR v1; // rbx
  PWSTR v2; // rdi

  v1 = Path - 56;
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  --*((_QWORD *)v1 + 10);
  v2 = 0LL;
  if ( !*((_QWORD *)v1 + 10) )
    v2 = v1;
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
}
