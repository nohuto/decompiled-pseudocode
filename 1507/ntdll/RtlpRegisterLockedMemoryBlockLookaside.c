/*
 * XREFs of RtlpRegisterLockedMemoryBlockLookaside @ 0x1800755E0
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180075300 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x1800756D0 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x1800757D0 (RtlUnlockModuleSection.c)
 */

__int64 __fastcall RtlpRegisterLockedMemoryBlockLookaside(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // eax
  __int64 v7; // rbx
  __int64 (__fastcall **v8)(); // rdi
  __int64 (__fastcall **v9)(); // rdi

  v4 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryBlockLookasideLock, a2, a3, a4);
  v5 = RtlpLockedMemoryBlockLookasideCount;
  if ( RtlpLockedMemoryBlockLookasideCount )
  {
LABEL_2:
    RtlpLockedMemoryBlockLookasideCount = v5 + 1;
  }
  else
  {
    v7 = 0LL;
    v8 = RtlpMemoryBlockLookasideCriticalRoutines;
    while ( 1 )
    {
      v4 = RtlLockModuleSection(*v8);
      if ( v4 < 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
      ++v8;
      if ( (unsigned int)v7 >= 4 )
      {
        v5 = RtlpLockedMemoryBlockLookasideCount;
        goto LABEL_2;
      }
    }
    if ( (_DWORD)v7 )
    {
      v9 = &RtlpMemoryBlockLookasideCriticalRoutines[v7];
      do
      {
        RtlUnlockModuleSection(*--v9);
        LODWORD(v7) = v7 - 1;
      }
      while ( (_DWORD)v7 );
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryBlockLookasideLock);
  return (unsigned int)v4;
}
