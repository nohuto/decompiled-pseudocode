/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001FE0
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x180001EB0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180003280 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlUnlockModuleSection @ 0x180002140 (RtlUnlockModuleSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
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
