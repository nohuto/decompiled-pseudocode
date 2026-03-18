/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1400D5674
 * Callers:
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiAttachToOwningSession @ 0x1400D55A4 (MiAttachToOwningSession.c)
 * Callees:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400D5698 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(__int64 a1)
{
  return (unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, a1) != 0;
}
