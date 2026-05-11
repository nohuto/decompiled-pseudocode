/*
 * XREFs of TemplateEventDescriptor @ 0x1C0001750
 * Callers:
 *     DeviceStart @ 0x1C0013250 (DeviceStart.c)
 *     DeviceStop @ 0x1C00133F0 (DeviceStop.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  return EtwWrite(ExBusAudHandle, a2, 0LL, 0, 0LL);
}
