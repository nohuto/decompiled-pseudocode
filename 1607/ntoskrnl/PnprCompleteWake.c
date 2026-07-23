/*
 * XREFs of PnprCompleteWake @ 0x1401CFEB8
 * Callers:
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1403DCD24 (PnprQuiesceWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PnprCompleteWake()
{
  return PnprUnlockPagesForReplace();
}
