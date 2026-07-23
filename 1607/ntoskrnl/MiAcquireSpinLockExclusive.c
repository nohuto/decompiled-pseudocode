/*
 * XREFs of MiAcquireSpinLockExclusive @ 0x1401DE254
 * Callers:
 *     MiTrimSection @ 0x14008EC74 (MiTrimSection.c)
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KIRQL __stdcall MiAcquireSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  return ExAcquireSpinLockExclusive(SpinLock);
}
