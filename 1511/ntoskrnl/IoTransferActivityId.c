/*
 * XREFs of IoTransferActivityId @ 0x140105BC4
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteTransfer @ 0x14009250C (EtwWriteTransfer.c)
 *     IopIsActivityTracingEventEnabled @ 0x140105BF4 (IopIsActivityTracingEventEnabled.c)
 */

NTSTATUS __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  NTSTATUS result; // eax

  result = IopIsActivityTracingEventEnabled(&IoTrace_ActivityIdTransfer);
  if ( (_BYTE)result )
    return EtwWriteTransfer(IoTraceHandle, &IoTrace_ActivityIdTransfer, ActivityId, RelatedActivityId, 0, 0LL);
  return result;
}
