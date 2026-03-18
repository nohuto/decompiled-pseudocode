/*
 * XREFs of KeAcquireGuardedMutex @ 0x14002C0A0
 * Callers:
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601C64 (CmpVERemoveHiveFromSIDMappingTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400C7E28 (ExpAcquireFastMutexContended.c)
 */

void __stdcall KeAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // si

  v2 = KeAbPreAcquire((ULONG_PTR)Mutex);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&Mutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)Mutex);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  Mutex->Owner = KeGetCurrentThread();
  Mutex->OldIrql = CurrentIrql;
}
