/*
 * XREFs of PspLockJobListExclusive @ 0x1404A2590
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1404A20AC (NtCreateJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

_BYTE *__fastcall PspLockJobListExclusive(__int64 a1)
{
  _BYTE *result; // rax
  _BYTE *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobListLock, 0LL) )
    result = (_BYTE *)ExfAcquirePushLockExclusiveEx(&PspJobListLock, result, (ULONG_PTR)&PspJobListLock);
  if ( v2 )
  {
    result = (_BYTE *)*((_QWORD *)v2 + 4);
    v2[26] |= 1u;
  }
  return result;
}
