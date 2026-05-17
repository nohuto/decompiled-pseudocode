/*
 * XREFs of RtlUnlockMemoryZone @ 0x180001F10
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180001C70 (RtlLockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180001EB0 (RtlUnlockMemoryBlockLookaside.c)
 * Callees:
 *     RtlpUnregisterLockedMemoryZone @ 0x180001FA0 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     ZwUnlockVirtualMemory @ 0x1800A86D0 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockMemoryZone(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *i; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1 + 32;
  RtlAcquireSRWLockExclusive(a1 + 32);
  v3 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    *(_DWORD *)(a1 + 40) = v5;
    if ( !v5 )
    {
      for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
      {
        v9 = i;
        v8 = i[1];
        ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
      }
      RtlpUnregisterLockedMemoryZone();
    }
  }
  else
  {
    v4 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v1);
  return v4;
}
