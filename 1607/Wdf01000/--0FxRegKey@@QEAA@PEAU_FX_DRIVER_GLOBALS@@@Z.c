/*
 * XREFs of ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0007B40
 * Callers:
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x1C0001920 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0073A30 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfRegistryCreateKey @ 0x1C007FBB0 (imp_WdfRegistryCreateKey.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0008B0C (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRegKey::FxRegKey(FxRegKey *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject::FxObject(this, 0x1006u, 0x80u, FxDriverGlobals);
  this->m_Lock = 0LL;
  this->m_ObjectFlags |= 0x11u;
  this->m_Key = 0LL;
  this->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
  this->m_Globals = FxDriverGlobals;
}
