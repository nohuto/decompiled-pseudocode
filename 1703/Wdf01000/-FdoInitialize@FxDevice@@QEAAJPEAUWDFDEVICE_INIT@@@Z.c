/*
 * XREFs of ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020320
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0021950 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x1C001D2F0 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB1C (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C001FD3C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0020C14 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1C0029B6C (-PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ.c)
 *     ?CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0029C08 (-CreateDefaultDeviceList@FxPkgFdo@@QEAAJPEAU_WDF_CHILD_LIST_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

int __fastcall FxDevice::FdoInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  KIRQL v5; // al
  int result; // eax
  FxPkgFdo *v7; // rax
  signed __int32 v8; // edx
  FxPkgFdo *v9; // rdi
  unsigned int v10; // edx
  KIRQL v11; // r15
  KIRQL v12; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  FxPkgIo *m_PkgIo; // rax
  unsigned __int8 Filter; // dl
  _FX_DRIVER_GLOBALS *v17; // rdi
  FxPkgPnp *m_PkgPnp; // rax
  FxPkgPnp *v19; // rcx
  _DEVICE_OBJECT *v20; // rax
  FxWmiIrpHandler *m_PkgWmi; // rdi
  PIO_WORKITEM WorkItem; // rax
  _WDF_OBJECT_ATTRIBUTES *p_ListConfigAttributes; // r8
  FxPkgPnp *v24; // rcx
  void (__fastcall *SurpriseRemoveAndReenumerateSelf)(void *); // rcx
  FxPkgFdo *pkgFdo; // [rsp+60h] [rbp+8h] BYREF

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
    FxVerifierDbgBreakPoint(m_Globals);
    return -1073741436;
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v5);
  this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = DeviceInit->Fdo.PhysicalDevice;
  this->m_PdoKnown = 1;
  result = FxPkgFdo::_Create(m_Globals, this, &pkgFdo);
  if ( result >= 0 )
  {
    v7 = pkgFdo;
    this->m_PkgPnp = pkgFdo;
    v8 = _InterlockedExchangeAdd(&v7->m_Refcnt, 1u);
    v9 = pkgFdo;
    v10 = v8 + 1;
    if ( SLOBYTE(pkgFdo->m_ObjectFlags) < 0 )
    {
      SurpriseRemoveAndReenumerateSelf = pkgFdo[-1].m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf;
      if ( SurpriseRemoveAndReenumerateSelf )
        FxTagTracker::UpdateTagHistory((FxTagTracker *)SurpriseRemoveAndReenumerateSelf, 0LL, 0, 0LL, TagAddRef, v10);
    }
    v11 = KeAcquireSpinLockRaiseToDpc(&v9->m_SpinLock.m_Lock);
    if ( v9->m_ObjectState == 1 )
    {
      if ( !v9->m_ParentObject )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
        if ( this->m_ObjectState == 1 )
        {
          Blink = this->m_ChildListHead.Blink;
          p_m_ChildEntry = &v9->m_ChildEntry;
          if ( Blink->Flink != &this->m_ChildListHead )
            __fastfail(3u);
          p_m_ChildEntry->Flink = &this->m_ChildListHead;
          v9->m_ChildEntry.Blink = Blink;
          Blink->Flink = p_m_ChildEntry;
          this->m_ChildListHead.Blink = p_m_ChildEntry;
          if ( !v9->m_DeviceBase )
            v9->m_DeviceBase = this->m_DeviceBase;
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v12);
          v9->m_ParentObject = this;
        }
        else
        {
          FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAddChildObjectInternal);
          KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v12);
        }
      }
    }
    else
    {
      FxObject::TraceDroppedEvent(v9, FxObjectDroppedEventAssignParentObject);
    }
    KeReleaseSpinLock(&v9->m_SpinLock.m_Lock, v11);
    m_PkgIo = this->m_PkgIo;
    Filter = DeviceInit->Fdo.Filter;
    v17 = m_PkgIo->m_Globals;
    if ( m_PkgIo->m_DefaultQueue )
    {
      WPP_IFR_SF_d(v17, 2u, 0xDu, 0x1Du, WPP_FxPkgIo_cpp_Traceguids, -1073741808);
      FxVerifierDbgBreakPoint(v17);
      return -1073741808;
    }
    m_PkgIo->m_Filter = Filter;
    m_PkgPnp = this->m_PkgPnp;
    if ( m_PkgPnp )
      m_PkgPnp[1].m_NPLock.m_DbgFlagIsInitialized = Filter;
    v19 = this->m_PkgPnp;
    this->m_Filter = Filter;
    result = v19->Initialize(v19, DeviceInit);
    if ( result >= 0 )
    {
      if ( !DeviceInit->Fdo.ListConfig.Size )
      {
LABEL_16:
        if ( DeviceInit->Fdo.EventCallbacks.Size )
        {
          v24 = this->m_PkgPnp;
          v24[1].m_ChildEntry.Blink = (_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterAddResourceRequirements;
          v24[1].m_DisposeSingleEntry.Next = (_SINGLE_LIST_ENTRY *)DeviceInit->Fdo.EventCallbacks.EvtDeviceFilterRemoveResourceRequirements;
          v24[1].m_DeviceBase = (FxDeviceBase *)DeviceInit->Fdo.EventCallbacks.EvtDeviceRemoveAddedResources;
        }
        result = FxDevice::CreateDevice(this, DeviceInit);
        if ( result >= 0 )
        {
          v20 = IoAttachDeviceToDeviceStack(
                  this->m_DeviceObject.m_DeviceObject,
                  this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject);
          this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = v20;
          if ( v20 )
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
      p_ListConfigAttributes = &DeviceInit->Fdo.ListConfigAttributes;
      if ( !DeviceInit->Fdo.ListConfigAttributes.Size )
        p_ListConfigAttributes = 0LL;
      result = FxPkgFdo::CreateDefaultDeviceList(
                 (FxPkgFdo *)this->m_PkgPnp,
                 &DeviceInit->Fdo.ListConfig,
                 p_ListConfigAttributes);
      if ( result >= 0 )
      {
        this->SetDeviceTelemetryInfoFlags(this, DeviceInfoHasDynamicChildren);
        goto LABEL_16;
      }
    }
  }
  return result;
}
