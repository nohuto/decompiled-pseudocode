/*
 * XREFs of NdisMRegisterMiniportDriver @ 0x1C00ADDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NDIS_STATUS __stdcall NdisMRegisterMiniportDriver(
        PDRIVER_OBJECT DriverObject,
        PUNICODE_STRING RegistryPath,
        NDIS_HANDLE MiniportDriverContext,
        PNDIS_MINIPORT_DRIVER_CHARACTERISTICS MiniportDriverCharacteristics,
        PNDIS_HANDLE NdisMiniportDriverHandle)
{
  return ndisInternalRegisterMiniportDriver(
           DriverObject,
           RegistryPath,
           MiniportDriverContext,
           MiniportDriverCharacteristics,
           NdisMiniportDriverHandle);
}
