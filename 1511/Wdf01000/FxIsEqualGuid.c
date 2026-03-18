/*
 * XREFs of FxIsEqualGuid @ 0x1C0010DF4
 * Callers:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0010E10 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002AC4C (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfWmiProviderCreate @ 0x1C0060D40 (imp_WdfWmiProviderCreate.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C0072630 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C00753C0 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsEqualGuid(const _GUID *Lhs, const _GUID *Rhs)
{
  return RtlCompareMemory(Lhs, Rhs, 0x10uLL) == 16;
}
