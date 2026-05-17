/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x180001EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnlockMemoryZone @ 0x180001F10 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001FE0 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlUnlockMemoryBlockLookaside(__int64 a1)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // ecx

  RtlAcquireSRWLockExclusive(a1);
  v2 = *(_DWORD *)(a1 + 44);
  v3 = 0;
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_DWORD *)(a1 + 44) = v4;
    if ( !v4 )
    {
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 16));
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v3 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(a1);
  return v3;
}
