/*
 * XREFs of KeAcquireQueuedSpinLockRaiseToSynch @ 0x140200A04
 * Callers:
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140747DC8 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

unsigned __int8 __fastcall KeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  char *v2; // r8
  _QWORD *v3; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  v2 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v2, *((_QWORD *)v2 + 1));
  }
  else
  {
    v3 = (_QWORD *)_InterlockedExchange64(*((volatile __int64 **)v2 + 1), (__int64)v2);
    if ( v3 )
      KxWaitForLockOwnerShip((__int64)v2, v3);
  }
  return CurrentIrql;
}
