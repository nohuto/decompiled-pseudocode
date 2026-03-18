/*
 * XREFs of PnprLockPagesForReplace @ 0x1406108F4
 * Callers:
 *     PnprQuiesce @ 0x1401C1090 (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x1403B0C00 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140035BD8 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
