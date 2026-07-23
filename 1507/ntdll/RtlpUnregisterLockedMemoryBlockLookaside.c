/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180075670
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800754B0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180078C90 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800757D0 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryBlockLookaside()
{
  PVOID *v0; // rbx
  __int64 v1; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v0 = (PVOID *)RtlpMemoryBlockLookasideCriticalRoutines;
    v1 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v0++);
      --v1;
    }
    while ( v1 );
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
