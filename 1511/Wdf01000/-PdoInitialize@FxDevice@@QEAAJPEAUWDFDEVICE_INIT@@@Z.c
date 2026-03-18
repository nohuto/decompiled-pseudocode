/*
 * XREFs of ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001C128
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000D260 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0011CB8 (--0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ?RegisterCallbacks@FxPkgPdo@@QEAAXPEAU_WDF_PDO_EVENT_CALLBACKS@@@Z @ 0x1C0011D7C (-RegisterCallbacks@FxPkgPdo@@QEAAXPEAU_WDF_PDO_EVENT_CALLBACKS@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x1C001823C (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C001BBAC (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001BBE4 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001D014 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ @ 0x1C002AEAC (-PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ.c)
 */

int __fastcall FxDevice::PdoInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v5; // al
  FxDevice *Parent; // rcx
  FxPkgPdo *v7; // rax
  FxPkgPdo *v8; // rax
  FxPkgPdo *v9; // rbx
  int result; // eax
  int Device; // ecx

  m_Globals = this->m_Globals;
  if ( !DeviceInit->Pdo.Static )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    this->m_ObjectFlags |= 2u;
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v5);
  }
  if ( !DeviceInit->DeviceName && (DeviceInit->Characteristics & 0x80u) == 0 )
    return -1073741773;
  Parent = DeviceInit->Pdo.Parent;
  this->m_ParentDevice = Parent;
  FxObject::AddRef(Parent, this, 252, "minkernel\\wdf\\framework\\shared\\core\\km\\fxdevicekm.cpp");
  v7 = (FxPkgPdo *)FxObjectHandleAlloc(m_Globals, ExDefaultNonPagedPoolType, 0x5F8uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( v7 )
  {
    FxPkgPdo::FxPkgPdo(v7, m_Globals, this);
    v9 = v8;
  }
  else
  {
    v9 = 0LL;
  }
  this->m_PkgPnp = v9;
  if ( !v9 )
    return -1073741670;
  FxDevice::InstallPackage(this, v9);
  result = this->m_PkgPnp->Initialize(this->m_PkgPnp, DeviceInit);
  if ( result >= 0 )
  {
    if ( DeviceInit->Pdo.EventCallbacks.Size )
      FxPkgPdo::RegisterCallbacks(v9, &DeviceInit->Pdo.EventCallbacks);
    Device = FxDevice::CreateDevice(this, DeviceInit);
    if ( Device < 0 )
      return Device;
    this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
    if ( DeviceInit->Pdo.Raw )
      v9->m_RawOK = 1;
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
      v9->m_AllowForwardRequestToParent = 1;
    }
    result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
    if ( result >= 0 )
    {
      result = FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
      if ( result >= 0 )
      {
        Device = FxPkgPnp::PostCreateDeviceInitialize(v9);
        if ( Device >= 0 )
          this->m_DeviceObject.m_DeviceObject->Flags &= ~0x80u;
        return Device;
      }
    }
  }
  return result;
}
