/*
 * XREFs of ViIrpDatabaseAcquireLockShared @ 0x140223CA0
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140716988 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140716A10 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockShared(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockShared(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
