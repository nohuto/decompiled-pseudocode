/*
 * XREFs of PnprCompleteWake @ 0x1401FC730
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1404012DC (PnprQuiesceWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
