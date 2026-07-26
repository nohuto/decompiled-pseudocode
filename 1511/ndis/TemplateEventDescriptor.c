/*
 * XREFs of TemplateEventDescriptor @ 0x1C0049D58
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C004B250 (ndisWnfPdcCallback.c)
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
