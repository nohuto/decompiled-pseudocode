/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x18000E484
 * Callers:
 *     EtwNotificationUnregister @ 0x18000E370 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall EtwpRemoveRegistrationFromTable(void *a1)
{
  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, a1);
  EtwpProvLockOwner = 0;
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
