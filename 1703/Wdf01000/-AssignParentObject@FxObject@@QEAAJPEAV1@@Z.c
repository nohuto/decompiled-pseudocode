/*
 * XREFs of ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001CFE0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008F60 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C001FE2C (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0025C00 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C002FCD4 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0032EC4 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C00332E8 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0065470 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C0082C0C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C0082CF4 (FxIoResourceListInsertDescriptor.c)
 * Callees:
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C003F3E8 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
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
