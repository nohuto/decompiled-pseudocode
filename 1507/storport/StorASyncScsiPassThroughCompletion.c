/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0024F20
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C0054D60 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C005530C (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
