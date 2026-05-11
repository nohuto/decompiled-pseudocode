/*
 * XREFs of TemplateEventDescriptor @ 0x1C0001740
 * Callers:
 *     DeviceStart @ 0x1C0014250 (DeviceStart.c)
 *     DeviceStop @ 0x1C00143F0 (DeviceStop.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwWrite(ExBusAudHandle, a2, 0LL, 0, 0LL);
}
