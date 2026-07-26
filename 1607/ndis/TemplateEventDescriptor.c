/*
 * XREFs of TemplateEventDescriptor @ 0x1C004E718
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C004FC70 (ndisWnfPdcCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS TemplateEventDescriptor()
{
  return EtwWrite(
           Microsoft_Windows_NDISHandle,
           &EnteringConnectedStandby,
           &GUID_00000000_0000_0000_0000_000000000000,
           0,
           0LL);
}
