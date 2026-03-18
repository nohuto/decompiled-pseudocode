/*
 * XREFs of VidSchiSuspend @ 0x1C006186C
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C006182C (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0061938 (VidSchiWaitForDrainFlipQueue.c)
 *     VidSchiEmptyAllHwQueues @ 0x1C00619FC (VidSchiEmptyAllHwQueues.c)
 */

__int64 __fastcall VidSchiSuspend(__int64 a1)
{
  if ( !VidSchIsTDRPending(a1) )
    VidSchiEmptyAllHwQueues(a1);
  if ( !VidSchIsTDRPending(a1) )
    VidSchiWaitForDrainFlipQueue(a1);
  return VidSchiSetSchedulerStatus(a1, 3LL, 1LL);
}
