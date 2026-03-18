/*
 * XREFs of ViIrpDatabaseReleaseLockExclusive @ 0x14020BF28
 * Callers:
 *     IovpCompleteRequest2 @ 0x1406BF180 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1406BFC10 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1406C0FB8 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1406C121C (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1406C8110 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1406C81E4 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     <none>
 */

void __fastcall ViIrpDatabaseReleaseLockExclusive(KIRQL a1)
{
  ViIrpDatabaseExclusiveLockOwner = 0LL;
  ExReleaseSpinLockExclusive(&ViIrpDatabaseLock, a1);
}
