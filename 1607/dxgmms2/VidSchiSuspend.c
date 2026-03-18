/*
 * XREFs of VidSchiSuspend @ 0x1C00689A8
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C006894C (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0068A24 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiEmptyAllHwQueues @ 0x1C0068AE8 (VidSchiEmptyAllHwQueues.c)
 */

__int64 __fastcall VidSchiSuspend(__int64 a1)
{
  if ( !VidSchIsTDRPending(a1) )
    VidSchiEmptyAllHwQueues(a1);
  if ( !VidSchIsTDRPending(a1) )
    VidSchiWaitForDrainFlipQueue(a1);
  return VidSchiSetSchedulerStatus(a1, 3LL, 1LL);
}
