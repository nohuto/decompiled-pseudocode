/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180059814
 * Callers:
 *     EtwNotificationUnregister @ 0x180059700 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x18001C040 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall EtwpRemoveRegistrationFromTable(unsigned __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&EtwpProvLock, a2, a3, a4);
  RtlRbRemoveNode((unsigned __int64 *)&EtwpRegistrationTable, a1);
  memset(a1, 171, 24);
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
