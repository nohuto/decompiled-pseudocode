/*
 * XREFs of KeReleaseSpinLockFromDpcLevel @ 0x1401091F0
 * Callers:
 *     sub_14017D0A4 @ 0x14017D0A4 (sub_14017D0A4.c)
 *     KeSynchronizeExecution @ 0x140183760 (KeSynchronizeExecution.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x140748B00 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseSpinLockFromDpcLevelNoReboot @ 0x140748BAC (VerifierKeReleaseSpinLockFromDpcLevelNoReboot.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __stdcall KeReleaseSpinLockFromDpcLevel(PKSPIN_LOCK SpinLock)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(SpinLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)SpinLock, 0LL);
}
