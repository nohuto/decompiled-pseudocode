/*
 * XREFs of ndisReferenceDriver @ 0x1C001BD38
 * Callers:
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2CA0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPRemoveDevice @ 0x1C00E63F0 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C00EAC48 (ndisNotifyMiniports.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReferenceDriver(__int64 a1, unsigned __int8 a2)
{
  return ndisReferenceRef((PKSPIN_LOCK)(a1 + 392), a2);
}
