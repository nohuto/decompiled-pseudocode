/*
 * XREFs of FxIsEqualGuid @ 0x1C002F130
 * Callers:
 *     FxIFR @ 0x1C000A230 (FxIFR.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C002F000 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0030C3C (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C006EEB4 (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     imp_WdfWmiProviderCreate @ 0x1C006F460 (imp_WdfWmiProviderCreate.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C007F140 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0083360 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsEqualGuid(const _GUID *Lhs, const _GUID *Rhs)
{
  return RtlCompareMemory(Lhs, Rhs, 0x10uLL) == 16;
}
