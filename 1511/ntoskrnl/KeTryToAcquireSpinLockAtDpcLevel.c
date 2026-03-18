/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x1400EA5B4
 * Callers:
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1406C71AC (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  return KxTryToAcquireSpinLock(SpinLock);
}
