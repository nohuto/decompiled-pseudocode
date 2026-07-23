/*
 * XREFs of RtlLockMemoryZone @ 0x180075370
 * Callers:
 *     RtlLockMemoryBlockLookaside @ 0x180075300 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpRegisterLockedMemoryZone @ 0x18007541C (RtlpRegisterLockedMemoryZone.c)
 *     NtLockVirtualMemory @ 0x1800948C0 (NtLockVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800953E0 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS __cdecl RtlLockMemoryZone(PVOID MemoryZone)
{
  _RTL_SRWLOCK *v1; // r14
  int locked; // esi
  ULONG_PTR *i; // rdi
  ULONG_PTR *j; // rbx
  ULONG_PTR *k; // rbx
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+38h] BYREF

  v1 = (_RTL_SRWLOCK *)((char *)MemoryZone + 32);
  locked = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  if ( *((_DWORD *)MemoryZone + 10) )
  {
LABEL_7:
    ++*((_DWORD *)MemoryZone + 10);
  }
  else
  {
    for ( i = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); i; i = (ULONG_PTR *)*i )
    {
      BaseAddress = i;
      RegionSize = i[1];
      locked = NtLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
      if ( locked < 0 )
      {
        for ( j = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); j != i; j = (ULONG_PTR *)*j )
        {
          BaseAddress = j;
          RegionSize = j[1];
          ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
        }
        goto LABEL_8;
      }
    }
    locked = RtlpRegisterLockedMemoryZone();
    if ( locked >= 0 )
      goto LABEL_7;
    for ( k = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); k; k = (ULONG_PTR *)*k )
    {
      BaseAddress = k;
      RegionSize = k[1];
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    }
  }
LABEL_8:
  RtlReleaseSRWLockExclusive(v1);
  return locked;
}
