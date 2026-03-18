/*
 * XREFs of IoTransferActivityId @ 0x140133EEC
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     EtwWriteTransfer @ 0x1400EFF50 (EtwWriteTransfer.c)
 */

void __fastcall IoTransferActivityId(LPCGUID ActivityId, LPCGUID RelatedActivityId)
{
  REGHANDLE v2; // rbx

  v2 = IoTraceHandle;
  if ( IoTraceHandle )
  {
    if ( EtwEventEnabled(IoTraceHandle, &IoTrace_ActivityIdTransfer) )
      EtwWriteTransfer(v2, &IoTrace_ActivityIdTransfer, ActivityId, RelatedActivityId, 0, 0LL);
  }
}
