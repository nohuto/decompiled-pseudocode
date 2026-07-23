/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x140108DC4
 * Callers:
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiAttachToOwningSession @ 0x14010A1DC (MiAttachToOwningSession.c)
 * Callees:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140108DE8 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(__int64 a1)
{
  return (unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, a1) != 0;
}
