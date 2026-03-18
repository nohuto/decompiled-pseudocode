/*
 * XREFs of DxgkQueryRequiredDmaQueueEntry @ 0x1C00DBBD8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00E981C (DpiFdoStartAdapter.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DxgkQueryRequiredDmaQueueEntry()
{
  return VidSchQueryRequiredDmaQueueEntry();
}
