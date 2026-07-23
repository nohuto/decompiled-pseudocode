/*
 * XREFs of ViIrpDatabaseReleaseLockShared @ 0x140223AFC
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x140716988 (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140716A10 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     <none>
 */

void __fastcall ViIrpDatabaseReleaseLockShared(KIRQL a1)
{
  ExReleaseSpinLockShared(&ViIrpDatabaseLock, a1);
}
