/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x14010B044
 * Callers:
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiAttachToOwningSession @ 0x14010C45C (MiAttachToOwningSession.c)
 * Callees:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14010B068 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(__int64 a1)
{
  return (unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327740, a1) != 0;
}
