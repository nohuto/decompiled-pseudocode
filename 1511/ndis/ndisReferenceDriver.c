/*
 * XREFs of ndisReferenceDriver @ 0x1C0025210
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00CC430 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C00E4E20 (ndisNotifyMiniports.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceDriver(__int64 a1)
{
  return ndisReferenceRef((PKSPIN_LOCK)(a1 + 392));
}
