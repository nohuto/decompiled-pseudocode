/*
 * XREFs of ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0054F08
 * Callers:
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0067450 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0071140 (imp_WdfRegistryCreateKey.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0023254 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
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
