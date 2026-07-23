/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x1800019D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLockMemoryZone @ 0x180001A40 (RtlLockMemoryZone.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x180001B7C (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180001C70 (RtlUnlockMemoryZone.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 */

NTSTATUS __cdecl RtlLockMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  int locked; // edi
  void *v4; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  if ( *((_DWORD *)MemoryBlockLookaside + 11) )
    goto LABEL_5;
  locked = RtlLockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
    if ( locked < 0 )
    {
      v4 = (void *)*((_QWORD *)MemoryBlockLookaside + 1);
    }
    else
    {
      locked = RtlpRegisterLockedMemoryBlockLookaside();
      if ( locked >= 0 )
      {
LABEL_5:
        ++*((_DWORD *)MemoryBlockLookaside + 11);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      v4 = (void *)*((_QWORD *)MemoryBlockLookaside + 2);
    }
    RtlUnlockMemoryZone(v4);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return locked;
}
