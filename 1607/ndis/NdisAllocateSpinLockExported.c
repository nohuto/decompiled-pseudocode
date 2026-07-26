/*
 * XREFs of NdisAllocateSpinLockExported @ 0x1C00597A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisAllocateSpinLockExported(PNDIS_SPIN_LOCK SpinLock)
{
  KeInitializeSpinLock(&SpinLock->SpinLock);
}
