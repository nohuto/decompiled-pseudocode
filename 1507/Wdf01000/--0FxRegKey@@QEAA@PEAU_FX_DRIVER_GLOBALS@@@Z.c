/*
 * XREFs of ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017C20
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C002A420 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C00713F0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007D2B0 (imp_WdfRegistryCreateKey.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001576C (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRegKey::FxRegKey(FxRegKey *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject::FxObject(this, (_FX_DRIVER_GLOBALS *)0x1006, 0x80u, FxDriverGlobals);
  this->m_Lock = 0LL;
  this->m_ObjectFlags |= 0x11u;
  this->m_Key = 0LL;
  this->__vftable = (FxRegKey_vtbl *)&FxRegKey::`vftable';
  this->m_Globals = FxDriverGlobals;
}
