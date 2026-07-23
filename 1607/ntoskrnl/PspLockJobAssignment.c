/*
 * XREFs of PspLockJobAssignment @ 0x1404D59DC
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1404D5830 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall PspLockJobAssignment(__int64 a1)
{
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PspJobAssignmentLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobAssignmentLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&PspJobAssignmentLock, result, (ULONG_PTR)&PspJobAssignmentLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
