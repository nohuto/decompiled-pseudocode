/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x140223AAC
 * Callers:
 *     IovpCompleteRequest2 @ 0x14070B208 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14070BC98 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x14070D050 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x14070D2B4 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140716AB4 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
