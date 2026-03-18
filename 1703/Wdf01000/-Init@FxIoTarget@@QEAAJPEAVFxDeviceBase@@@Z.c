/*
 * XREFs of ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C002A78C
 * Callers:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020D30 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x1C008ACEC (FxUsbTargetDeviceCreate.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C009024C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C009165C (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqqqq @ 0x1C0088C04 (WPP_IFR_SF_qqqqq.c)
 */

__int64 __fastcall FxIoTarget::Init(FxIoTarget *this, FxDeviceBase *Device)
{
  _DEVICE_OBJECT *v4; // rax
  _DEVICE_OBJECT *_a3; // r11
  _DEVICE_OBJECT **p_m_TargetPdo; // r8
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _DEVICE_OBJECT *_a4; // rdx
  FxDriver *globals; // r10
  unsigned int Flags; // eax
  unsigned __int8 v11; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rdi

  this->m_DeviceBase = Device;
  this->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  v4 = (_DEVICE_OBJECT *)((__int64 (__fastcall *)(FxIoTarget *))this->GetTargetDeviceObject)(this);
  _a3 = this->m_InStackDevice;
  p_m_TargetPdo = &this->m_TargetPdo;
  this->m_TargetDevice = v4;
  m_DeviceObject = Device->m_PhysicalDevice.m_DeviceObject;
  _a4 = v4;
  this->m_TargetPdo = m_DeviceObject;
  globals = Device->m_Driver;
  this->m_Driver = globals;
  if ( _a3 && globals && v4 && m_DeviceObject )
  {
    this->m_TargetStackSize = v4->StackSize;
    Flags = v4->Flags;
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
      m_ObjectSize = this->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
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
