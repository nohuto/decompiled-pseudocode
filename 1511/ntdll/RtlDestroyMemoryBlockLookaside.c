/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180003280
 * Callers:
 *     RtlpInitializeStackTraceLog @ 0x1800F0FD4 (RtlpInitializeStackTraceLog.c)
 * Callees:
 *     RtlpUnregisterLockedMemoryBlockLookaside @ 0x180001FE0 (RtlpUnregisterLockedMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x1800032E0 (RtlDestroyMemoryZone.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlDestroyMemoryBlockLookaside(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  RtlAcquireSRWLockExclusive(a1);
  if ( *(_DWORD *)(a1 + 44) )
    RtlpUnregisterLockedMemoryBlockLookaside();
  v4 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
