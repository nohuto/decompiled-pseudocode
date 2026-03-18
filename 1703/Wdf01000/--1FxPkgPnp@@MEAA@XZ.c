/*
 * XREFs of ??1FxPkgPnp@@MEAA@XZ @ 0x1C009A3F8
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C00960C0 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??_EFxPkgPnp@@MEAAPEAXI@Z @ 0x1C009A670 (--_EFxPkgPnp@@MEAAPEAXI@Z.c)
 *     ??1FxPkgFdo@@MEAA@XZ @ 0x1C009D0A8 (--1FxPkgFdo@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Free@MxWorkItem@@QEAAXXZ @ 0x1C0019364 (-Free@MxWorkItem@@QEAAXXZ.c)
 *     ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C00835BC (--_GFxDeviceInterface@@QEAAPEAXI@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C0085958 (--1FxTransactionedList@@QEAA@XZ.c)
 *     ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C0096194 (--_GFxRelatedDeviceList@@QEAAPEAXI@Z.c)
 *     ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C009A634 (--_GFxEnumerationInfo@@QEAAPEAXI@Z.c)
 *     ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C009E054 (--1FxPowerPolicyOwnerSettings@@QEAA@XZ.c)
 */

void __fastcall FxPkgPnp::~FxPkgPnp(FxPkgPnp *this, unsigned int a2)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  _SINGLE_LIST_ENTRY *Next; // rdi
  FxDeviceInterface *v5; // rcx
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
  unsigned int v17; // edx
  unsigned int v18; // r8d

  this->__vftable = (FxPkgPnp_vtbl *)FxPkgPnp::`vftable';
  KeGetCurrentIrql();
  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    if ( m_SleepStudy->ComponentPowerRef )
    {
      SleepstudyHelper_UnregisterComponent();
      this->m_SleepStudy->ComponentPowerRef = 0LL;
    }
    if ( this->m_SleepStudy->SleepStudyLibContext )
    {
      SleepstudyHelper_Uninitialize();
      this->m_SleepStudy->SleepStudyLibContext = 0LL;
    }
    ExFreePoolWithTag(this->m_SleepStudy, 0);
    this->m_SleepStudy = 0LL;
  }
  Next = this->m_DeviceInterfaceHead.Next;
  while ( Next )
  {
    v5 = (FxDeviceInterface *)&Next[-6];
    Next = Next->Next;
    v5->m_Entry.Next = 0LL;
    FxDeviceInterface::`scalar deleting destructor'(v5);
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
    FxPoolFree(m_SelfManagedIoMachine);
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
    m_Resources->Release(m_Resources, this, 287, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
    this->m_Resources = 0LL;
  }
  m_ResourcesRaw = this->m_ResourcesRaw;
  if ( m_ResourcesRaw )
  {
    m_ResourcesRaw->Release(
      m_ResourcesRaw,
      this,
      292,
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
  MxWorkItem::Free(&this->m_PowerPolicyMachine.m_WorkItem);
  this->m_PowerPolicyMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  this->m_PowerMachine.m_WaitWakeLock.m_DbgFlagIsInitialized = 0;
  MxWorkItem::Free(&this->m_PowerMachine.m_WorkItem);
  this->m_PowerMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  MxWorkItem::Free(&this->m_PnpMachine.m_WorkItem);
  this->m_PnpMachine.m_QueueLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this, v17, v18);
}
