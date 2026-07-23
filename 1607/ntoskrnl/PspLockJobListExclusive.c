/*
 * XREFs of PspLockJobListExclusive @ 0x14051A99C
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     NtCreateJobObject @ 0x14051A4B8 (NtCreateJobObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
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
