/*
 * XREFs of NdisSetEvent @ 0x1C000FCA0
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00ACA60 (ndisPnPStartDevice.c)
 *     ndisDevicePowerOn @ 0x1C00E5000 (ndisDevicePowerOn.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetEvent(PNDIS_EVENT Event)
{
  KeSetEvent(&Event->Event, 0, 0);
}
