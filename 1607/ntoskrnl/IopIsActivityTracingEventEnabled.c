/*
 * XREFs of IopIsActivityTracingEventEnabled @ 0x140111E08
 * Callers:
 *     IoReuseIrp @ 0x1400D11E0 (IoReuseIrp.c)
 *     IoTransferActivityId @ 0x140111DD8 (IoTransferActivityId.c)
 *     IopInitActivityIdIrp @ 0x1401C4FA8 (IopInitActivityIdIrp.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 */

bool __fastcall IopIsActivityTracingEventEnabled(PCEVENT_DESCRIPTOR EventDescriptor)
{
  char v1; // bl

  v1 = 0;
  if ( IoTraceHandle )
    return EtwEventEnabled(IoTraceHandle, EventDescriptor) != 0;
  return v1;
}
