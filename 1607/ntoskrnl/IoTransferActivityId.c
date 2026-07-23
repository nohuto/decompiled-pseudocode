/*
 * XREFs of IoTransferActivityId @ 0x14011233C
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteTransfer @ 0x14000A1B0 (EtwWriteTransfer.c)
 *     IopIsActivityTracingEventEnabled @ 0x14011236C (IopIsActivityTracingEventEnabled.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = IopIsActivityTracingEventEnabled(&IoTrace_ActivityIdTransfer);
  if ( (_BYTE)result )
    return EtwWriteTransfer(IoTraceHandle, &IoTrace_ActivityIdTransfer, ActivityId, RelatedActivityId, 0, 0LL);
  return result;
}
