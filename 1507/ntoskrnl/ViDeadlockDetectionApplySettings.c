/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x140750BF4
 * Callers:
 *     VfSettingsCheckForChanges @ 0x14074A790 (VfSettingsCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x14074F8A4 (VfDeadlockInitialize.c)
 * Callees:
 *     ViRaiseIrqlToDpcLevel @ 0x14025B4B0 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140750C40 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140750D24 (ViDeadlockDetectionUnlock.c)
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
