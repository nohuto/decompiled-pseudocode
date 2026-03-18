/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x14020BED8
 * Callers:
 *     IovpCompleteRequest2 @ 0x1406BF180 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1406BFC10 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1406C0FB8 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1406C121C (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1406C8110 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1406C81E4 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 */

struct _KTHREAD *__fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  struct _KTHREAD *result; // rax

  *a1 = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  result = KeGetCurrentThread();
  ViIrpDatabaseExclusiveLockOwner = (__int64)result;
  return result;
}
