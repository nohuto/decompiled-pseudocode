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
