/*
 * XREFs of PspLockJobAssignment @ 0x1404871F4
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x140486B2C (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockJobAssignment(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((ULONG_PTR)&PspJobAssignmentLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobAssignmentLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&PspJobAssignmentLock, result, (ULONG_PTR)&PspJobAssignmentLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
