/*
 * XREFs of ?Destroy@FxDevice@@QEAAXXZ @ 0x1C006A82C
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C00267B8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C006B108 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C006B430 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C008847C (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C005D374 (WPP_IFR_SF_qqq.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C006A7DC (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxDevice::Destroy(FxDevice *this)
{
  _DEVICE_OBJECT *m_DeviceObject; // rax
  _DEVICE_OBJECT *_a3; // rcx
  const void *_a2; // rax
  _DEVICE_OBJECT *v5; // rcx
  _DEVICE_OBJECT *v6; // rcx
  unsigned __int16 *Buffer; // rcx
  unsigned __int16 *v8; // rcx

  m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
  if ( m_DeviceObject )
    m_DeviceObject->DeviceExtension = 0LL;
  _a3 = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( this->m_ObjectSize )
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a2 = 0LL;
  WPP_IFR_SF_qqq(
    this->m_Globals,
    4u,
    0x12u,
    0xBu,
    WPP_FxDeviceKm_cpp_Traceguids,
    this->m_DeviceObject.m_DeviceObject,
    _a2,
    _a3);
  v5 = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( v5 )
  {
    IoDetachDevice(v5);
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  }
  if ( this->m_DeviceObject.m_DeviceObject )
  {
    FxDevice::DeleteSymbolicLink(this);
    v6 = this->m_DeviceObject.m_DeviceObject;
    if ( this->m_DeviceObjectDeleted )
      ObfDereferenceObject(v6);
    else
      IoDeleteDevice(v6);
    this->m_DeviceObject.m_DeviceObject = 0LL;
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    *(_QWORD *)&this->m_DeviceName.Length = 0LL;
    this->m_DeviceName.Buffer = 0LL;
  }
  v8 = this->m_MofResourceName.Buffer;
  if ( v8 )
  {
    FxPoolFree(v8);
    *(_QWORD *)&this->m_MofResourceName.Length = 0LL;
    this->m_MofResourceName.Buffer = 0LL;
  }
}
