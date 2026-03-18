/*
 * XREFs of PspLockProcessListExclusive @ 0x14001B4A8
 * Callers:
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockProcessListExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock);
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
