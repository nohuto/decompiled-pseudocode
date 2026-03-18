/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x1406CD358
 * Callers:
 *     VfSettingsCheckForChanges @ 0x1406C7D8C (VfSettingsCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x1406CC018 (VfDeadlockInitialize.c)
 * Callees:
 *     ViRaiseIrqlToDpcLevel @ 0x14020C210 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1406CD3A4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1406CD3D8 (ViDeadlockDetectionUnlock.c)
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
