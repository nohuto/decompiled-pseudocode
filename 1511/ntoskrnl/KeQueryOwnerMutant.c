/*
 * XREFs of KeQueryOwnerMutant @ 0x1400EEFCC
 * Callers:
 *     NtQueryMutant @ 0x1404BBC94 (NtQueryMutant.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 */

void __stdcall KeQueryOwnerMutant(PKMUTANT Mutant, PCLIENT_ID ClientId)
{
  __int64 v2; // r8
  unsigned __int8 CurrentIrql; // si
  _KTHREAD *OwnerThread; // rax

  ClientId->UniqueProcess = 0LL;
  ClientId->UniqueThread = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(&Mutant->Header.Lock, (__int64)ClientId, v2);
  OwnerThread = Mutant->OwnerThread;
  if ( OwnerThread )
    *ClientId = *(PCLIENT_ID)&OwnerThread[1].CurrentRunTime;
  _InterlockedAnd(&Mutant->Header.Lock, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
}
