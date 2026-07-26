/*
 * XREFs of NdisSetEvent @ 0x1C000DB00
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00AC324 (ndisPnPStartDevice.c)
 *     ndisDevicePowerOn @ 0x1C00E5640 (ndisDevicePowerOn.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisSetEvent(PNDIS_EVENT Event)
{
  KeSetEvent(&Event->Event, 0, 0);
}
