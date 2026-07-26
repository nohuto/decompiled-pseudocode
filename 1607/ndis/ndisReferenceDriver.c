/*
 * XREFs of ndisReferenceDriver @ 0x1C001BDD0
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C00EB1F0 (ndisNotifyMiniports.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceDriver(__int64 a1, unsigned __int8 a2)
{
  return ndisReferenceRef((PKSPIN_LOCK)(a1 + 392), a2);
}
