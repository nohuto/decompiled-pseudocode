/*
 * XREFs of RtlpUnregisterLockedMemoryBlockLookaside @ 0x180075670
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800754B0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180078C90 (RtlDestroyMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x1800757D0 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall RtlpUnregisterLockedMemoryBlockLookaside(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 (__fastcall **v5)(); // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock, a2, a3, a4);
  if ( !--RtlpLockedMemoryBlockLookasideCount )
  {
    v5 = RtlpMemoryBlockLookasideCriticalRoutines;
    v6 = 4LL;
    do
    {
      RtlUnlockModuleSection(*v5++);
      --v6;
    }
    while ( v6 );
  }
  return RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
}
