/*
 * XREFs of RtlpRegisterLockedMemoryZone @ 0x18007541C
 * Callers:
 *     RtlLockMemoryZone @ 0x180075370 (RtlLockMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLockModuleSection @ 0x1800756D0 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x1800757D0 (RtlUnlockModuleSection.c)
 */

__int64 __fastcall RtlpRegisterLockedMemoryZone(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // eax
  int v7; // ebx
  __int64 (__fastcall **v8)(); // rdi

  v4 = 0;
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock, a2, a3, a4);
  v5 = RtlpLockedMemoryZoneCount;
  if ( RtlpLockedMemoryZoneCount )
  {
LABEL_2:
    RtlpLockedMemoryZoneCount = v5 + 1;
  }
  else
  {
    v7 = 0;
    v8 = &RtlpMemoryZoneCriticalRoutines;
    while ( 1 )
    {
      v4 = RtlLockModuleSection(*v8);
      if ( v4 < 0 )
        break;
      ++v7;
      ++v8;
      if ( v7 )
      {
        v5 = RtlpLockedMemoryZoneCount;
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
  return (unsigned int)v4;
}
