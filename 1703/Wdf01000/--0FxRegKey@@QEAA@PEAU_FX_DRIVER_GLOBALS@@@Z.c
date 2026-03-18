/*
 * XREFs of ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00653E0
 * Callers:
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0077870 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfRegistryCreateKey @ 0x1C0084130 (imp_WdfRegistryCreateKey.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001CEA0 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRegKey::FxRegKey(FxRegKey *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject::FxObject(this, 0x1006u, 0x80u, FxDriverGlobals);
  this->m_Lock = 0LL;
  this->m_ObjectFlags |= 0x11u;
  this->m_Key = 0LL;
  this->__vftable = (FxRegKey_vtbl *)FxRegKey::`vftable';
  this->m_Globals = FxDriverGlobals;
}
