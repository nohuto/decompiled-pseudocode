/*
 * XREFs of NdisResetEvent @ 0x1C00103F0
 * Callers:
 *     ndisSetSystemPower @ 0x1C0097BD0 (ndisSetSystemPower.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisPmHaltMiniport @ 0x1C00EF254 (ndisPmHaltMiniport.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall NdisResetEvent(PNDIS_EVENT Event)
{
  KeClearEvent(&Event->Event);
}
