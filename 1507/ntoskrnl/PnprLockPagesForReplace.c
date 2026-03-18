/*
 * XREFs of PnprLockPagesForReplace @ 0x140690668
 * Callers:
 *     PnprQuiesce @ 0x1401FCC54 (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x1404012DC (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140010490 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
