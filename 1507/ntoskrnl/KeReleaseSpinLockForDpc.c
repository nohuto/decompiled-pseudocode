/*
 * XREFs of KeReleaseSpinLockForDpc @ 0x140200E54
 * Callers:
 *     VerifierKeReleaseSpinLockForDpc @ 0x1407422A8 (VerifierKeReleaseSpinLockForDpc.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLockForDpc(PKSPIN_LOCK SpinLock, KIRQL OldIrql)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(SpinLock, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
    __writecr8(OldIrql);
  }
  else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
  }
}
