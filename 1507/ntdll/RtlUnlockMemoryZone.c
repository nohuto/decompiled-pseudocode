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

NTSTATUS __cdecl RtlUnlockMemoryZone(PVOID MemoryZone)
{
  _RTL_SRWLOCK *v1; // rsi
  int v3; // eax
  NTSTATUS v4; // ebx
  int v5; // eax
  ULONG_PTR *i; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_RTL_SRWLOCK *)((char *)MemoryZone + 32);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryZone + 4);
  v3 = *((_DWORD *)MemoryZone + 10);
  v4 = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    *((_DWORD *)MemoryZone + 10) = v5;
    if ( !v5 )
    {
      for ( i = (ULONG_PTR *)*((_QWORD *)MemoryZone + 6); i; i = (ULONG_PTR *)*i )
      {
        BaseAddress = i;
        RegionSize = i[1];
        ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
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
