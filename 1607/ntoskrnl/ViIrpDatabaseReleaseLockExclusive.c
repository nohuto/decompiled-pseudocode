/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x140223CC0
 * Callers:
 *     IovpCompleteRequest2 @ 0x14070B1D8 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14070BC68 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x14070D020 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x14070D284 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140716AB4 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     <none>
 */

void __fastcall ViIrpDatabaseReleaseLockExclusive(KIRQL a1)
{
  ExReleaseSpinLockExclusive(&ViIrpDatabaseLock, a1);
}
