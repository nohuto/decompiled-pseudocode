/*
 * XREFs of NdisMInitializeScatterGatherDma @ 0x1C00CCFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisMInitializeScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        BOOLEAN Dma64BitAddresses,
        ULONG MaximumPhysicalMapping)
{
  return ndisMInitializeScatterGatherDma(
           (unsigned __int16 *)MiniportAdapterHandle,
           Dma64BitAddresses,
           2u,
           MaximumPhysicalMapping);
}
