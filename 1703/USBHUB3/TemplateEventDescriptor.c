/*
 * XREFs of TemplateEventDescriptor @ 0x1C0001210
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0065EF0 (HUBDRIVER_EtwEnableCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C00661A0 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 0, 0LL);
}
