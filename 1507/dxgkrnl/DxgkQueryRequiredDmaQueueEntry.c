/*
 * XREFs of DxgkQueryRequiredDmaQueueEntry @ 0x1C00B1898
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DxgkQueryRequiredDmaQueueEntry()
{
  return VidSchQueryRequiredDmaQueueEntry();
}
