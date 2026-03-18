/*
 * XREFs of ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C002ABEC
 * Callers:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020A80 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0087144 (FxUsbTargetDeviceCreate.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008C328 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C008D6B4 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqqqq @ 0x1C00849B0 (WPP_IFR_SF_qqqqq.c)
 */

__int64 __fastcall FxIoTarget::Init(FxIoTarget *this, FxDeviceBase *Device)
{
  _DEVICE_OBJECT *v4; // rax
  _DEVICE_OBJECT *_a3; // r10
  _DEVICE_OBJECT *_a4; // rdx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _DEVICE_OBJECT **p_m_TargetPdo; // rax
  FxDriver *globals; // r8
  unsigned int Flags; // eax
  unsigned __int8 v11; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdi

  this->m_DeviceBase = Device;
  this->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  v4 = (_DEVICE_OBJECT *)((__int64 (__fastcall *)(FxIoTarget *))this->GetTargetDeviceObject)(this);
  _a3 = this->m_InStackDevice;
  this->m_TargetDevice = v4;
  _a4 = v4;
  m_DeviceObject = Device->m_PhysicalDevice.m_DeviceObject;
  p_m_TargetPdo = &this->m_TargetPdo;
  this->m_TargetPdo = m_DeviceObject;
  globals = Device->m_Driver;
  this->m_Driver = globals;
  if ( _a3 && globals && _a4 && m_DeviceObject )
  {
    this->m_TargetStackSize = _a4->StackSize;
    Flags = _a4->Flags;
    if ( (Flags & 4) != 0 )
      v11 = 2;
    else
      v11 = (unsigned __int8)(Flags & 0x10 | 8) >> 3;
    this->m_TargetIoType = v11;
    return 0LL;
  }
  else
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qqqqq(
        m_Globals,
        (unsigned __int8)_a4,
        0xEu,
        0x18u,
        WPP_FxIoTarget_cpp_Traceguids,
        _a2,
        _a3,
        _a4,
        *p_m_TargetPdo,
        globals);
    }
    return 3221225473LL;
  }
}
