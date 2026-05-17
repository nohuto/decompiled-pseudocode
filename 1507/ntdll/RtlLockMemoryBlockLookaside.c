/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x180075300
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlLockMemoryZone @ 0x180075370 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x180075510 (RtlUnlockMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800755E0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 */

__int64 __fastcall RtlLockMemoryBlockLookaside(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int locked; // edi
  __int64 v7; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 44) )
    goto LABEL_5;
  locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 8));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*(_QWORD *)(a1 + 16));
    if ( locked < 0 )
    {
      v7 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      locked = RtlpRegisterLockedMemoryBlockLookaside();
      if ( locked >= 0 )
      {
LABEL_5:
        ++*(_DWORD *)(a1 + 44);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      v7 = *(_QWORD *)(a1 + 16);
    }
    RtlUnlockMemoryZone(v7);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return (unsigned int)locked;
}
