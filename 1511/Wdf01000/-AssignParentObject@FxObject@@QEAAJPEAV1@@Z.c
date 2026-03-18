/*
 * XREFs of ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0023424
 * Callers:
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0015900 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C001BBAC (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C0021DA4 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0021FEC (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0022200 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0029134 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C002AC4C (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     FxCmResourceListInsertDescriptor @ 0x1C00718EC (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C00719D0 (FxIoResourceListInsertDescriptor.c)
 * Callees:
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C006EA24 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

__int64 __fastcall FxObject::AssignParentObject(FxObject *this, FxObject *ParentObject)
{
  unsigned __int64 *p_m_Lock; // rbp
  KIRQL v5; // r14
  unsigned int v6; // ebx
  KIRQL v7; // r12
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_ChildEntry; // rax

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  if ( this->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventAssignParentObject);
LABEL_12:
    v6 = -1073741738;
    goto LABEL_8;
  }
  v6 = 0;
  if ( this->m_ParentObject )
  {
    v6 = -1071644147;
    goto LABEL_8;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&ParentObject->m_SpinLock.m_Lock);
  if ( ParentObject->m_ObjectState != 1 )
  {
    FxObject::TraceDroppedEvent(ParentObject, FxObjectDroppedEventAddChildObjectInternal);
    KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v7);
    goto LABEL_12;
  }
  Blink = ParentObject->m_ChildListHead.Blink;
  p_m_ChildEntry = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &ParentObject->m_ChildListHead;
  this->m_ChildEntry.Blink = Blink;
  if ( Blink->Flink != &ParentObject->m_ChildListHead )
    __fastfail(3u);
  Blink->Flink = p_m_ChildEntry;
  ParentObject->m_ChildListHead.Blink = p_m_ChildEntry;
  if ( !this->m_DeviceBase )
    this->m_DeviceBase = ParentObject->m_DeviceBase;
  KeReleaseSpinLock(&ParentObject->m_SpinLock.m_Lock, v7);
  this->m_ParentObject = ParentObject;
LABEL_8:
  KeReleaseSpinLock(p_m_Lock, v5);
  return v6;
}
