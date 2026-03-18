/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1406111A0
 * Callers:
 *     PnprCompleteWake @ 0x1401C0B3C (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1400EBD44 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
