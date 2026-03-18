/*
 * XREFs of PspLockJobListExclusive @ 0x140487794
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x140487354 (NtCreateJobObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockJobListExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&PspJobListLock, result, (ULONG_PTR)&PspJobListLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
