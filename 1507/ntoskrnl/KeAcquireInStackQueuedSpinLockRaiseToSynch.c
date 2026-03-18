/*
 * XREFs of KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1402009B4
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140747BFC (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot @ 0x140747CF4 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynchNoReboot.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 */

__int64 __fastcall KeAcquireInStackQueuedSpinLockRaiseToSynch(volatile __int64 *a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = a1;
  result = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  *(_BYTE *)(a2 + 16) = result;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a2, a1);
  v4 = (_QWORD *)_InterlockedExchange64(a1, a2);
  if ( v4 )
    return KxWaitForLockOwnerShip(a2, v4);
  return result;
}
