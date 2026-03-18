/*
 * XREFs of KeAcquireGuardedMutex @ 0x140102D90
 * Callers:
 *     VerifierKeAcquireGuardedMutex @ 0x1407420D0 (VerifierKeAcquireGuardedMutex.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v1; // r9
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si

  v3 = KeAbPreAcquire((ULONG_PTR)Mutex, 0LL, 0LL, v1);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Mutex, v3);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
