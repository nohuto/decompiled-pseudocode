/*
 * XREFs of PspLockProcessListShared @ 0x14009257C
 * Callers:
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x14050B020 (PsChangeQuantumTable.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

signed __int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  __int64 v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(&PspActiveProcessLock, v1, (ULONG_PTR)&PspActiveProcessLock);
  if ( v1 )
  {
    result = *(_QWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 26) |= 1u;
  }
  return result;
}
