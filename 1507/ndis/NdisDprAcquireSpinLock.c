/*
 * XREFs of NdisDprAcquireSpinLock @ 0x1C0054F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisDprAcquireSpinLock(PKSPIN_LOCK SpinLock)
{
  KeAcquireSpinLockAtDpcLevel(SpinLock);
}
