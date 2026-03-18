/*
 * XREFs of KeAcquireGuardedMutex @ 0x140043570
 * Callers:
 *     VerifierKeAcquireGuardedMutex @ 0x1406C08DC (VerifierKeAcquireGuardedMutex.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire((ULONG_PTR)Mutex, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Mutex, v2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
