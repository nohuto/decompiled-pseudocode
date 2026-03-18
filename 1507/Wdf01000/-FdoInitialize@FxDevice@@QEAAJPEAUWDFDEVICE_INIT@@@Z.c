/*
 * XREFs of ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000EBA4
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C000CE70 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000E460 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C000E628 (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C000F848 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C0010E04 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C00139FC (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0013A90 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

NTSTATUS __fastcall FxDevice::FdoInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v5; // al
  NTSTATUS result; // eax
  FxPkgFdo *v7; // rax
  signed __int32 v8; // ecx
  FxPkgFdo *v9; // rbx
  unsigned int v10; // ecx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  FxPkgIo *m_PkgIo; // rcx
  unsigned __int8 Filter; // al
  _FX_DRIVER_GLOBALS *v14; // rbx
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgPnp *v16; // rcx
  _DEVICE_OBJECT *v17; // rax
  FxWmiIrpHandler *m_PkgWmi; // rbx
  PIO_WORKITEM WorkItem; // rax
  _WDF_OBJECT_ATTRIBUTES *p_ListConfigAttributes; // r8
  FxPkgPnp *v21; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+68h] [rbp+10h] BYREF
  FxPkgFdo *pkgFdo; // [rsp+70h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  if ( DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements
    && !DeviceInit->Fdo.EventCallbacks.EvtDeviceRemoveAddedResources )
  {
    WPP_IFR_SF_q(
      m_Globals,
      2u,
      0xCu,
      0xAu,
      WPP_FxDeviceKm_cpp_Traceguids,
      DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements);
    v22 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v22,
      m_Globals->Public.DriverName,
      (const char *)&v22);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741436;
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v5);
  this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = DeviceInit->Fdo.PhysicalDevice;
  this->m_PdoKnown = 1;
  result = FxPkgFdo::_Create(m_Globals, this, &pkgFdo);
  if ( result < 0 )
    return result;
  v7 = pkgFdo;
  this->m_PkgPnp = pkgFdo;
  v8 = _InterlockedExchangeAdd(&v7->m_Refcnt, 1u);
  v9 = pkgFdo;
  v10 = v8 + 1;
  if ( SLOBYTE(pkgFdo->m_ObjectFlags) < 0 )
    m_Method = pkgFdo[-1].m_DeviceFilterAddResourceRequirements.m_Method;
  else
    m_Method = 0LL;
  if ( m_Method )
    FxTagTracker::UpdateTagHistory((FxTagTracker *)m_Method, 0LL, 0, 0LL, TagAddRef, v10);
  FxObject::AssignParentObject(v9, this);
  m_PkgIo = this->m_PkgIo;
  Filter = DeviceInit->Fdo.Filter;
  v14 = m_PkgIo->m_Globals;
  if ( m_PkgIo->m_DefaultQueue )
  {
    WPP_IFR_SF_d(
      v14,
      2u,
      0xDu,
      0x1Du,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      -1073741808);
    v23 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v14->Public.DriverName,
      (const char *)&v23,
      v14->Public.DriverName,
      (const char *)&v23);
    if ( v14->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
  else
  {
    m_PkgIo->m_Filter = Filter;
    m_PkgPnp = this->m_PkgPnp;
    if ( m_PkgPnp )
      LOBYTE(m_PkgPnp[1].m_DeviceBase) = Filter;
    v16 = this->m_PkgPnp;
    this->m_Filter = Filter;
    result = v16->Initialize(v16, DeviceInit);
    if ( result >= 0 )
    {
      if ( !DeviceInit->Fdo.ListConfig.Size )
      {
LABEL_12:
        if ( DeviceInit->Fdo.EventCallbacks.Size )
        {
          v21 = this->m_PkgPnp;
          v21[1].m_ChildEntry.Flink = (_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements;
          v21[1].m_ChildEntry.Blink = (_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterRemoveResourceRequirements;
          v21[1].m_DisposeSingleEntry.Next = (_SINGLE_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceRemoveAddedResources;
        }
        result = FxDevice::CreateDevice(this, DeviceInit);
        if ( result >= 0 )
        {
          v17 = IoAttachDeviceToDeviceStack(
                  this->m_DeviceObject.m_DeviceObject,
                  this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject);
          this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = v17;
          if ( v17 )
          {
            if ( this->m_Filter )
            {
              FxDevice::SetFilterIoType(this);
              this->m_DeviceObject.m_DeviceObject->Flags |= this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->Flags & 0x6000;
              this->m_DeviceObject.m_DeviceObject->DeviceType = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->DeviceType;
              this->m_DeviceObject.m_DeviceObject->Characteristics = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject->Characteristics;
              if ( (this->m_DeviceObject.m_DeviceObject->Flags & 0x2000) != 0 )
                this->m_PowerPageableCapable = 1;
            }
            else if ( DeviceInit->PowerPageable )
            {
              this->m_DeviceObject.m_DeviceObject->Flags |= 0x2000u;
            }
            else if ( DeviceInit->Inrush )
            {
              this->m_DeviceObject.m_DeviceObject->Flags |= 0x4000u;
            }
            m_PkgWmi = this->m_PkgWmi;
            WorkItem = IoAllocateWorkItem(m_PkgWmi->m_DeviceBase->m_DeviceObject.m_DeviceObject);
            m_PkgWmi->m_WorkItem = WorkItem;
            if ( WorkItem )
            {
              result = FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
              if ( result >= 0 )
                return FxPkgFdo::PostCreateDeviceInitialize((FxPkgFdo *)this->m_PkgPnp);
            }
            else
            {
              return -1073741670;
            }
          }
          else
          {
            IoDeleteDevice(this->m_DeviceObject.m_DeviceObject);
            result = -1073741810;
            this->m_DeviceObject.m_DeviceObject = 0LL;
          }
        }
        return result;
      }
      p_ListConfigAttributes = 0LL;
      if ( DeviceInit->Fdo.ListConfigAttributes.Size )
        p_ListConfigAttributes = &DeviceInit->Fdo.ListConfigAttributes;
      result = FxPkgFdo::CreateDefaultDeviceList(
                 (FxPkgFdo *)this->m_PkgPnp,
                 &DeviceInit->Fdo.ListConfig,
                 p_ListConfigAttributes);
      if ( result >= 0 )
      {
        this->SetDeviceTelemetryInfoFlags(this, DeviceInfoHasDynamicChildren);
        goto LABEL_12;
      }
    }
  }
  return result;
}
