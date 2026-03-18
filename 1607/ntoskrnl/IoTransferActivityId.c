/*
 * XREFs of IoTransferActivityId @ 0x140111DD8
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteTransfer @ 0x14000A630 (EtwWriteTransfer.c)
 *     IopIsActivityTracingEventEnabled @ 0x140111E08 (IopIsActivityTracingEventEnabled.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = IopIsActivityTracingEventEnabled(&IoTrace_ActivityIdTransfer);
  if ( (_BYTE)result )
    return EtwWriteTransfer(IoTraceHandle, &IoTrace_ActivityIdTransfer, ActivityId, RelatedActivityId, 0, 0LL);
  return result;
}
