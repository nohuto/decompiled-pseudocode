/*
 * XREFs of VidSchiSuspend @ 0x1C00777C0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00768E0 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00051E0 (VidSchIsTDRPending.c)
 *     VidSchiEmptyAllHwQueues @ 0x1C0076880 (VidSchiEmptyAllHwQueues.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C007791C (VidSchiWaitForDrainFlipQueue.c)
 */

LONG __fastcall VidSchiSuspend(struct _VIDSCH_GLOBAL *a1)
{
  if ( !VidSchIsTDRPending((__int64)a1) )
    VidSchiEmptyAllHwQueues((__int64)a1);
  if ( !VidSchIsTDRPending((__int64)a1) )
    VidSchiWaitForDrainFlipQueue(a1);
  return VidSchiSetSchedulerStatus((__int64)a1, 3, 1);
}
