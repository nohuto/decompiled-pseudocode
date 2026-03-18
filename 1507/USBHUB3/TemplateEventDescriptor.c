/*
 * XREFs of TemplateEventDescriptor @ 0x1C00011EC
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0061B7C (HUBDRIVER_EtwEnableCallback.c)
 *     HUBFDO_EvtDeviceAdd @ 0x1C0061E20 (HUBFDO_EvtDeviceAdd.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall TemplateEventDescriptor(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3)
{
  return EtwWrite(Microsoft_Windows_USB_USBHUB3Handle, a2, a3, 0, 0LL);
}
