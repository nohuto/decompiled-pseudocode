/*
 * XREFs of PspLockProcessListShared @ 0x1400C764C
 * Callers:
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x1405455D4 (PsChangeQuantumTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  __int64 v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((ULONG_PTR)&PspActiveProcessLock, 0LL, 0);
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
