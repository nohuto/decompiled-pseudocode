/*
 * XREFs of ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001F96C
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0022EA0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001BF8C (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C001F484 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001F4BC (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020924 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C002826C (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?RegisterCallbacks@FxPkgPdo@@QEAAXPEAU_WDF_PDO_EVENT_CALLBACKS@@@Z @ 0x1C002C068 (-RegisterCallbacks@FxPkgPdo@@QEAAXPEAU_WDF_PDO_EVENT_CALLBACKS@@@Z.c)
 *     ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C002C0BC (--0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0030F04 (-PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ.c)
 */

int __fastcall FxDevice::PdoInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxDevice *Parent; // rcx
  FxPkgPdo *v6; // rax
  FxPkgPdo *v7; // rax
  FxPkgPdo *v8; // rsi
  int result; // eax
  NTSTATUS Device; // ecx

  m_Globals = this->m_Globals;
  if ( !DeviceInit->Pdo.Static )
    FxObject::MarkNoDeleteDDI(this, ObjectLock);
  if ( !DeviceInit->DeviceName && (DeviceInit->Characteristics & 0x80u) == 0 )
    return -1073741773;
  Parent = DeviceInit->Pdo.Parent;
  this->m_ParentDevice = Parent;
  FxObject::AddRef(Parent, this, 252, "minkernel\\wdf\\framework\\shared\\core\\km\\fxdevicekm.cpp");
  v6 = (FxPkgPdo *)FxObjectHandleAlloc(m_Globals, ExDefaultNonPagedPoolType, 0x6C0uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v6 )
  {
    FxPkgPdo::FxPkgPdo(v6, m_Globals, this);
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
  }
  this->m_PkgPnp = v8;
  if ( !v8 )
    return -1073741670;
  FxDevice::InstallPackage(this, v8);
  result = this->m_PkgPnp->Initialize(this->m_PkgPnp, DeviceInit);
  if ( result >= 0 )
  {
    if ( DeviceInit->Pdo.EventCallbacks.Size )
      FxPkgPdo::RegisterCallbacks(v8, &DeviceInit->Pdo.EventCallbacks);
    Device = FxDevice::CreateDevice(this, DeviceInit);
    if ( Device < 0 )
      return Device;
    this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
    if ( DeviceInit->Pdo.Raw )
      v8->m_RawOK = 1;
    if ( DeviceInit->PowerPageable )
    {
      this->m_DeviceObject.m_DeviceObject->Flags |= 0x2000u;
    }
    else if ( DeviceInit->Inrush )
    {
      this->m_DeviceObject.m_DeviceObject->Flags |= 0x4000u;
    }
    if ( DeviceInit->Pdo.ForwardRequestToParent )
    {
      this->m_DeviceObject.m_DeviceObject->StackSize += DeviceInit->Pdo.Parent->m_DeviceObject.m_DeviceObject->StackSize;
      v8->m_AllowForwardRequestToParent = 1;
    }
    result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
    if ( result >= 0 )
    {
      result = FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
      if ( result >= 0 )
      {
        Device = FxPkgPnp::PostCreateDeviceInitialize(v8);
        if ( Device >= 0 )
          this->m_DeviceObject.m_DeviceObject->Flags &= ~0x80u;
        return Device;
      }
    }
  }
  return result;
}
