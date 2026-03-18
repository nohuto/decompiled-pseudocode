/*
 * XREFs of KeAcquireGuardedMutexUnsafe @ 0x14017DFD4
 * Callers:
 *     VerifierKeAcquireGuardedMutexUnsafe @ 0x1407420D8 (VerifierKeAcquireGuardedMutexUnsafe.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 */

void __stdcall KeAcquireGuardedMutexUnsafe(PKGUARDED_MUTEX FastMutex)
{
  __int64 v1; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v4 = KeAbPreAcquire((ULONG_PTR)FastMutex, 0LL, 0LL, v1);
  v5 = v4;
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  FastMutex->Owner = CurrentThread;
}
