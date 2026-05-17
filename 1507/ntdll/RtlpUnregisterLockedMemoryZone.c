/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x1800755A0
 * Callers:
 *     RtlUnlockMemoryZone @ 0x180075510 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180078CF0 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800757D0 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall RtlpUnregisterLockedMemoryZone(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock, a2, a3, a4);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
