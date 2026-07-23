/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001D40
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180001C10 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x1800028D0 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlUnlockModuleSection @ 0x180001EA0 (RtlUnlockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
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
