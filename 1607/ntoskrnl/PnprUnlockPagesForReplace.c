/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1406455AC
 * Callers:
 *     PnprCompleteWake @ 0x1401D008C (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1400AC6FC (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
