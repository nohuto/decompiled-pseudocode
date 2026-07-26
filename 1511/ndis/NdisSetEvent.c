/*
 * XREFs of NdisSetEvent @ 0x1C0010070
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00AA734 (ndisPnPStartDevice.c)
 *     ndisDevicePowerOn @ 0x1C00DF3D0 (ndisDevicePowerOn.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetEvent(PNDIS_EVENT Event)
{
  KeSetEvent(&Event->Event, 0, 0);
}
