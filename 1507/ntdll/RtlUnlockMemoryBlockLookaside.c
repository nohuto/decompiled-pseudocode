/*
 * XREFs of RtlUnlockMemoryBlockLookaside @ 0x1800754B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlUnlockMemoryZone @ 0x180075510 (RtlUnlockMemoryZone.c)
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180075670 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 */

__int64 __fastcall RtlUnlockMemoryBlockLookaside(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1, a2, a3, a4);
  v5 = *(_DWORD *)(a1 + 44);
  v6 = 0;
  if ( v5 )
  {
    v7 = v5 - 1;
    *(_DWORD *)(a1 + 44) = v7;
    if ( !v7 )
    {
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 16));
      RtlUnlockMemoryZone(*(_QWORD *)(a1 + 8));
      RtlpUnregisterLockedMemoryBlockLookaside();
    }
  }
  else
  {
    v6 = -1073741823;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
