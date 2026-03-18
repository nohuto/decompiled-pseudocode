/*
 * XREFs of ??0FxDeviceBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@GG@Z @ 0x1C003C704
 * Callers:
 *     ??0FxMpDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@PEAU_DEVICE_OBJECT@@22@Z @ 0x1C003C648 (--0FxMpDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDriver@@PEAU_DEVICE_OBJECT@@22@Z.c)
 * Callees:
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001B770 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxDeviceBase::FxDeviceBase(
        FxDeviceBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDriver *Driver,
        unsigned __int16 Type,
        unsigned __int16 Size)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)Type, Size, FxDriverGlobals);
  this->FxNonPagedObject::FxObject::__vftable = (FxDeviceBase_vtbl *)FxDeviceBase::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  this->m_DeviceObject.m_DeviceObject = 0LL;
  this->m_AttachedDevice.m_DeviceObject = 0LL;
  this->m_PhysicalDevice.m_DeviceObject = 0LL;
  this->m_ObjectFlags |= 0x10u;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  this->m_DisposeList = 0LL;
  this->m_ExecutionLevel = WdfExecutionLevelInheritFromParent;
  this->m_Driver = Driver;
  *(_QWORD *)&this->m_SynchronizationScope = 1LL;
  this->m_DeviceBase = this;
}
