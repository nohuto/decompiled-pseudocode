/*
 * XREFs of NdisResetEvent @ 0x1C000DE00
 * Callers:
 *     ndisSetSystemPower @ 0x1C009B6DC (ndisSetSystemPower.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C00F50D4 (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisResetEvent(PNDIS_EVENT Event)
{
  KeClearEvent(&Event->Event);
}
