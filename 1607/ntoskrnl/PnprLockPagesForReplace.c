/*
 * XREFs of PnprLockPagesForReplace @ 0x140644D00
 * Callers:
 *     PnprQuiesce @ 0x1401D05D4 (PnprQuiesce.c)
 *     PnprQuiesceWorker @ 0x1403DCD24 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140014884 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
