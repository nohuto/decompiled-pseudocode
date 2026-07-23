/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x14011236C
 * Callers:
 *     IoReuseIrp @ 0x1400CF080 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x14011233C (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1401C4E8C (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
