/*
 * XREFs of RtlDestroyMemoryZone @ 0x180002930
 * Callers:
 *     RtlDestroyMemoryBlockLookaside @ 0x1800028D0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180083420 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x1800F8AE8 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlpUnregisterLockedMemoryZone @ 0x180001D00 (RtlpUnregisterLockedMemoryZone.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyMemoryZone(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 32);
  if ( *(_DWORD *)(a1 + 40) )
    RtlpUnregisterLockedMemoryZone();
  v2 = *(_QWORD **)(a1 + 48);
  while ( v2 )
  {
    v5 = v2;
    v4 = v2[1];
    v2 = (_QWORD *)*v2;
    ZwFreeVirtualMemory(-1LL, &v5, &v4, 0x8000LL);
  }
  return 0LL;
}
