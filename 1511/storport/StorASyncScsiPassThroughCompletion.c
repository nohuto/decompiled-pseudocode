/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0027000
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0058C50 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C00591D8 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
