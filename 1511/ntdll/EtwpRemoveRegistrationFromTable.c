/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180047F64
 * Callers:
 *     EtwNotificationUnregister @ 0x180047E50 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002DBF0 (RtlRbRemoveNode.c)
 */

signed __int64 __fastcall EtwpRemoveRegistrationFromTable(unsigned __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  RtlRbRemoveNode((unsigned __int64 *)&EtwpRegistrationTable, a1);
  EtwpProvLockOwner = 0;
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
