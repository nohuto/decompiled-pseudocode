/*
 * XREFs of MiAcquireSpinLockExclusive @ 0x1401DE428
 * Callers:
 *     MiTrimSection @ 0x14008F514 (MiTrimSection.c)
 *     MiProcessDereferenceList @ 0x14012259C (MiProcessDereferenceList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KIRQL __stdcall MiAcquireSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  return ExAcquireSpinLockExclusive(SpinLock);
}
