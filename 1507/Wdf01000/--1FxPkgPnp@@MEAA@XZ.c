/*
 * XREFs of ??1FxPkgPnp@@MEAA@XZ @ 0x1C009CA20
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C009907C (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1C009CC30 (--_EFxPkgPnp@@MEAAPEAXI@Z.c)
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x1C009F984 (--1FxPkgFdo@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C007F908 (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C00808E8 (--1FxTransactionedList@@QEAA@XZ.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C009914C (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C009CC00 (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 *     ??_GFxSelfManagedIoMachine@@QEAAPEAXI@Z @ 0x1C009CC6C (--_GFxSelfManagedIoMachine@@QEAAPEAXI@Z.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C009FD64 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 *     ??1FxThreadedEventQueue@@QEAA@XZ @ 0x1C00A2FE0 (--1FxThreadedEventQueue@@QEAA@XZ.c)
 */

void __fastcall FxPkgPnp::~FxPkgPnp(FxPkgPnp *this, unsigned int a2)
{
  _SINGLE_LIST_ENTRY *Next; // rdi
  FxDeviceInterface *v4; // rcx
  FxSpinLockTransactionedList *m_DmaEnablerList; // rdi
  FxRelatedDeviceList *m_RemovalDeviceList; // rcx
  FxRelatedDeviceList *m_UsageDependentDeviceList; // rcx
  FxPnpStateCallback *m_PnpStateCallbacks; // rcx
  FxPowerStateCallback *m_PowerStateCallbacks; // rcx
  FxPowerPolicyStateCallback *m_PowerPolicyStateCallbacks; // rcx
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  FxEnumerationInfo *m_EnumInfo; // rcx
  FxCmResList *m_Resources; // rcx
  FxCmResList *m_ResourcesRaw; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  unsigned int v16; // edx
  unsigned int v17; // r8d
  struct _IO_WORKITEM *m_WorkItem; // rcx

  Next = this->m_DeviceInterfaceHead.Next;
  this->__vftable = (FxPkgPnp_vtbl *)&FxPkgPnp::`vftable';
  while ( Next )
  {
    v4 = (FxDeviceInterface *)&Next[-6];
    Next = Next->Next;
    v4->m_Entry.Next = 0LL;
    FxDeviceInterface::`scalar deleting destructor'(v4);
  }
  m_DmaEnablerList = this->m_DmaEnablerList;
  this->m_DeviceInterfaceHead.Next = 0LL;
  if ( m_DmaEnablerList )
  {
    m_DmaEnablerList->m_ListLock.m_DbgFlagIsInitialized = 0;
    FxTransactionedList::~FxTransactionedList(m_DmaEnablerList);
    FxPoolFree(m_DmaEnablerList);
    this->m_DmaEnablerList = 0LL;
  }
  m_RemovalDeviceList = this->m_RemovalDeviceList;
  if ( m_RemovalDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_RemovalDeviceList);
    this->m_RemovalDeviceList = 0LL;
  }
  m_UsageDependentDeviceList = this->m_UsageDependentDeviceList;
  if ( m_UsageDependentDeviceList )
  {
    FxRelatedDeviceList::`scalar deleting destructor'(m_UsageDependentDeviceList);
    this->m_UsageDependentDeviceList = 0LL;
  }
  m_PnpStateCallbacks = this->m_PnpStateCallbacks;
  if ( m_PnpStateCallbacks )
    FxPoolFree(m_PnpStateCallbacks);
  m_PowerStateCallbacks = this->m_PowerStateCallbacks;
  if ( m_PowerStateCallbacks )
    FxPoolFree(m_PowerStateCallbacks);
  m_PowerPolicyStateCallbacks = this->m_PowerPolicyStateCallbacks;
  if ( m_PowerPolicyStateCallbacks )
    FxPoolFree(m_PowerPolicyStateCallbacks);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    FxSelfManagedIoMachine::`scalar deleting destructor'(m_SelfManagedIoMachine, a2);
    this->m_SelfManagedIoMachine = 0LL;
  }
  m_EnumInfo = this->m_EnumInfo;
  if ( m_EnumInfo )
  {
    FxEnumerationInfo::`scalar deleting destructor'(m_EnumInfo, a2);
    this->m_EnumInfo = 0LL;
  }
  m_Resources = this->m_Resources;
  if ( m_Resources )
  {
    m_Resources->Release(m_Resources, this, 271, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_Resources = 0LL;
  }
  m_ResourcesRaw = this->m_ResourcesRaw;
  if ( m_ResourcesRaw )
  {
    m_ResourcesRaw->Release(
      m_ResourcesRaw,
      this,
      276,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_ResourcesRaw = 0LL;
  }
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(this->m_PowerPolicyMachine.m_Owner);
    FxPoolFree(m_Owner);
    this->m_PowerPolicyMachine.m_Owner = 0LL;
  }
  FxThreadedEventQueue::~FxThreadedEventQueue(&this->m_PowerPolicyMachine);
  this->m_PowerMachine.m_WaitWakeLock.m_DbgFlagIsInitialized = 0;
  FxThreadedEventQueue::~FxThreadedEventQueue(&this->m_PowerMachine);
  m_WorkItem = this->m_PnpMachine.m_WorkItem.m_WorkItem;
  if ( m_WorkItem )
  {
    IoFreeWorkItem(m_WorkItem);
    this->m_PnpMachine.m_WorkItem.m_WorkItem = 0LL;
  }
  this->m_PnpMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this, v16, v17);
}
