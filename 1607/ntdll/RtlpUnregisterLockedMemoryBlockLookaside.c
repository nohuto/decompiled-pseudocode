/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001D40
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180001C10 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x1800028D0 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlUnlockModuleSection @ 0x180001EA0 (RtlUnlockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 RtlpUnregisterLockedMemoryBlockLookaside()
{
  __int64 (__fastcall **v1)(); // rbx
  __int64 v2; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v1 = RtlpMemoryBlockLookasideCriticalRoutines;
    v2 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v1++);
      --v2;
    }
    while ( v2 );
  }
  return RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
