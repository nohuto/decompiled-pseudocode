/*
 * XREFs of ?Destroy@FxDevice@@QEAAXXZ @ 0x1C007CE70
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002D1A4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C007D644 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C007D960 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C009AF1C (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C007CE1C (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxDevice::Destroy(FxDevice *this)
{
  _DEVICE_OBJECT *m_DeviceObject; // rax
  const void *_a2; // rdx
  bool v4; // zf
  _DEVICE_OBJECT *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _DEVICE_OBJECT *v7; // rcx
  _DEVICE_OBJECT *v8; // rcx
  wchar_t *Buffer; // rcx
  wchar_t *v10; // rcx
  _DEVICE_OBJECT *_a3; // [rsp+38h] [rbp-10h]

  m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceObject )
    m_DeviceObject->DeviceExtension = 0LL;
  _a3 = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v4 = this->m_ObjectSize == 0;
  _a1 = this->m_DeviceObject.m_DeviceObject;
  m_Globals = this->m_Globals;
  if ( v4 )
    _a2 = 0LL;
  WPP_IFR_SF_qqq(m_Globals, 4u, 0x12u, 0xBu, WPP_FxDeviceKm_cpp_Traceguids, _a1, _a2, _a3);
  v7 = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( v7 )
  {
    IoDetachDevice(v7);
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  }
  if ( this->m_DeviceObject.m_DeviceObject )
  {
    FxDevice::DeleteSymbolicLink(this);
    v8 = this->m_DeviceObject.m_DeviceObject;
    if ( this->m_DeviceObjectDeleted )
      ObfDereferenceObject(v8);
    else
      IoDeleteDevice(v8);
    this->m_DeviceObject.m_DeviceObject = 0LL;
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    *(_QWORD *)&this->m_DeviceName.Length = 0LL;
    this->m_DeviceName.Buffer = 0LL;
  }
  v10 = this->m_MofResourceName.Buffer;
  if ( v10 )
  {
    FxPoolFree(v10);
    *(_QWORD *)&this->m_MofResourceName.Length = 0LL;
    this->m_MofResourceName.Buffer = 0LL;
  }
}
