/*
 * XREFs of ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001C300
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0014578 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0019654 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C001F484 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C001FB28 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0030C3C (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C007E790 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C007E874 (FxIoResourceListInsertDescriptor.c)
 * Callees:
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003B8A0 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

__int64 __fastcall FxObject::AssignParentObject(FxObject *this, FxObject *ParentObject)
{
  KIRQL v4; // r12
  unsigned int v5; // ebx
  KIRQL v6; // r15
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax

  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
LABEL_11:
    v5 = -1073741738;
    goto LABEL_8;
  }
  v5 = 0;
  if ( this->m_ParentObject )
  {
    v5 = -1071644147;
    goto LABEL_8;
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&ParentObject->m_SpinLock.m_Lock);
  if ( ParentObject->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(ParentObject, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v6);
    goto LABEL_11;
  }
  Blink = ParentObject->m_ChildListHead.Blink;
  p_m_ChildEntry = &this->m_ChildEntry;
  if ( Blink->Flink != &ParentObject->m_ChildListHead )
    __fastfail(3u);
  p_m_ChildEntry->Flink = &ParentObject->m_ChildListHead;
  this->m_ChildEntry.Blink = Blink;
  Blink->Flink = p_m_ChildEntry;
  ParentObject->m_ChildListHead.Blink = p_m_ChildEntry;
  if ( !this->m_DeviceBase )
    this->m_DeviceBase = ParentObject->m_DeviceBase;
  KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v6);
  this->m_ParentObject = ParentObject;
LABEL_8:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v4);
  return v5;
}
