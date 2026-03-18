/*
 * XREFs of PnprCompleteWake @ 0x1401C0B3C
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1403AF974 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1403B0C00 (PnprQuiesceWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
