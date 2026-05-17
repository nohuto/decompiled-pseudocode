/*
 * XREFs of RtlDestroyMemoryZone @ 0x180078CF0
 * Callers:
 *     RtlCreateMemoryBlockLookaside @ 0x180072B40 (RtlCreateMemoryBlockLookaside.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x180078C90 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlpInitializeStackTraceLog @ 0x1800EF07C (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x1800755A0 (RtlpUnregisterLockedMemoryZone.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlDestroyMemoryZone(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  char *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rbx
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32), a2, a3, a4);
  if ( *(_DWORD *)(a1 + 40) )
    RtlpUnregisterLockedMemoryZone(v6, v5, v7, v8);
  v9 = *(_QWORD **)(a1 + 48);
  while ( v9 )
  {
    v12 = v9;
    v11 = v9[1];
    v9 = (_QWORD *)*v9;
    ZwFreeVirtualMemory(-1LL, &v12, &v11, 0x8000LL);
  }
  return 0LL;
}
