/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C002A680
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0060374 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C006094C (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
