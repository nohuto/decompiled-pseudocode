/*
 * XREFs of ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x1C002AEE0
 * Callers:
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002AC4C (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 * Callees:
 *     ??0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z @ 0x1C002B1E4 (--0FxWmiInstance@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAVFxWmiProvider@@@Z.c)
 */

void __fastcall FxWmiInstanceInternal::FxWmiInstanceInternal(
        FxWmiInstanceInternal *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxWmiInstanceInternalCallbacks *Callbacks,
        FxWmiProvider *Provider)
{
  FxWmiInstance::FxWmiInstance(this, FxDriverGlobals, 0xB0u, Provider);
  this->__vftable = (FxWmiInstanceInternal_vtbl *)&FxWmiInstanceInternal::`vftable';
  *(FxWmiInstanceInternalCallbacks *)&this->m_QueryInstance = *Callbacks;
}
