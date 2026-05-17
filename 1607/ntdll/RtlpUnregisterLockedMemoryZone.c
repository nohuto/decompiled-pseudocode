/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x180001D00
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180001C70 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180002930 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlUnlockModuleSection @ 0x180001EA0 (RtlUnlockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
