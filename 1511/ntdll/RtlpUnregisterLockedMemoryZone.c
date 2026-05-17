/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x180001FA0
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180001F10 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x1800032E0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlUnlockModuleSection @ 0x180002140 (RtlUnlockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
