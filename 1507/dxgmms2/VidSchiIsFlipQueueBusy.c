/*
 * XREFs of VidSchiIsFlipQueueBusy @ 0x1C00052A4
 * Callers:
 *     VidSchiWaitForSchedulerEvents @ 0x1C0032900 (VidSchiWaitForSchedulerEvents.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 VidSchiIsFlipQueueBusy()
{
  return VidSchiIsMmIoFlipPending();
}
