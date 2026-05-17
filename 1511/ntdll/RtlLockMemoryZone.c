/*
 * XREFs of RtlLockMemoryZone @ 0x180001CE0
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180001C70 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlpRegisterLockedMemoryZone @ 0x180001D8C (RtlpRegisterLockedMemoryZone.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     NtLockVirtualMemory @ 0x1800A7090 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A86D0 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlLockMemoryZone(__int64 a1)
{
  __int64 v1; // r14
  int locked; // esi
  _QWORD *i; // rdi
  _QWORD *j; // rbx
  _QWORD *k; // rbx
  int savedregs; // [rsp+20h] [rbp+0h]
  __int64 savedregs_8; // [rsp+28h] [rbp+8h]
  __int64 v10; // [rsp+50h] [rbp+30h] BYREF
  _QWORD *v11; // [rsp+58h] [rbp+38h] BYREF

  v1 = a1 + 32;
  locked = 0;
  RtlAcquireSRWLockExclusive(a1 + 32);
  if ( *(_DWORD *)(a1 + 40) )
  {
LABEL_7:
    ++*(_DWORD *)(a1 + 40);
  }
  else
  {
    for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
    {
      v11 = i;
      v10 = i[1];
      locked = NtLockVirtualMemory(-1LL, &v11, &v10, 1LL, savedregs, savedregs_8);
      if ( locked < 0 )
      {
        for ( j = *(_QWORD **)(a1 + 48); j != i; j = (_QWORD *)*j )
        {
          v11 = j;
          v10 = j[1];
          ZwUnlockVirtualMemory(-1LL, &v11, &v10, 1LL);
        }
        goto LABEL_8;
      }
    }
    locked = RtlpRegisterLockedMemoryZone();
    if ( locked >= 0 )
      goto LABEL_7;
    for ( k = *(_QWORD **)(a1 + 48); k; k = (_QWORD *)*k )
    {
      v11 = k;
      v10 = k[1];
      ZwUnlockVirtualMemory(-1LL, &v11, &v10, 1LL);
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive(v1);
  return (unsigned int)locked;
}
