/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x14020BF40
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x1406C7FE4 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1406C806C (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     <none>
 */

void __fastcall ViIrpDatabaseReleaseLockShared(KIRQL a1)
{
  ExReleaseSpinLockShared(&ViIrpDatabaseLock, a1);
}
