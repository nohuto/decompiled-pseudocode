/*
 * XREFs of PspLockProcessListExclusive @ 0x140076068
 * Callers:
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall PspLockProcessListExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PspActiveProcessLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&PspActiveProcessLock, result, &PspActiveProcessLock);
  if ( v2 )
  {
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(v2 + 26) |= 1u;
  }
  return result;
}
