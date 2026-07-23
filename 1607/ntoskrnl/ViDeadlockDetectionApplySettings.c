/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140715140
 * Callers:
 *     VfDeadlockInitialize @ 0x140713DF4 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x140716730 (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViRaiseIrqlToDpcLevel @ 0x140223A80 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1407151C0 (ViDeadlockDetectionUnlock.c)
 */

__int64 ViDeadlockDetectionApplySettings()
{
  unsigned __int8 v0; // bl

  if ( (MmVerifierData & 0x20) == 0 )
    return ViDeadlockEmptyDatabase();
  v0 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v0);
}
