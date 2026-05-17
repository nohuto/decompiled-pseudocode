/*
 * XREFs of RtlUnlockMemoryZone @ 0x180075510
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180075300 (RtlLockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x1800754B0 (RtlUnlockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800755A0 (RtlpUnregisterLockedMemoryZone.c)
 *     ZwUnlockVirtualMemory @ 0x1800953E0 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockMemoryZone(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD *i; // rdi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = (volatile signed __int64 *)(a1 + 32);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 40);
  v7 = 0;
  if ( v6 )
  {
    v8 = v6 - 1;
    *(_DWORD *)(a1 + 40) = v8;
    if ( !v8 )
    {
      for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
      {
        v12 = i;
        v11 = i[1];
        ZwUnlockVirtualMemory(-1LL, &v12, &v11, 1LL);
      }
      RtlpUnregisterLockedMemoryZone();
    }
  }
  else
  {
    v7 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v4);
  return v7;
}
