/*
 * XREFs of RestartCtxtPassive @ 0x1C001F650
 * Callers:
 *     <none>
 * Callees:
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 */

void __fastcall RestartCtxtPassive(PSLIST_ENTRY ListEntry)
{
  byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  InsertReadyQueue(ListEntry, ((__int64)ListEntry[4].Next & 0x100) == 0);
  KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
}
