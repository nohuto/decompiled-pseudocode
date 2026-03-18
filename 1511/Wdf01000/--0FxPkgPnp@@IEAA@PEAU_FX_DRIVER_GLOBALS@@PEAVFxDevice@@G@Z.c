/*
 * XREFs of ??0FxPkgPnp@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@G@Z @ 0x1C00172A0
 * Callers:
 *     ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C0011CB8 (--0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ??0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x1C00191C4 (--0FxPkgFdo@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxPkgPnp::FxPkgPnp(
        FxPkgPnp *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *Device,
        unsigned __int16 Type)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 m_HistoryIndex; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxVerifierLock *VerifierLock; // [rsp+40h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->__vftable = (FxPkgPnp_vtbl *)&FxObject::`vftable';
  this->m_ObjectSize = 0;
  this->m_Type = Type;
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, FxDriverGlobals, 0);
  this->__vftable = (FxPkgPnp_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v10 = this->m_Globals;
    if ( v10->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v10, this);
      this[-1].m_DeviceQueryStop.m_Method = (int (__fastcall *)(WDFDEVICE__ *))VerifierLock;
    }
  }
  this->m_DeviceBase = Device;
  this->__vftable = (FxPkgPnp_vtbl *)&FxPkgPnp::`vftable';
  this->m_QueryInterfaceLock.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_QueryInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_QueryInterfaceLock.m_OwningThread = 0LL;
  this->m_DeviceInterfaceLock.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_DeviceInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_DeviceInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_DeviceInterfaceLock.m_OwningThread = 0LL;
  this->m_PnpMachine.m_QueueLock.m_Lock = 0LL;
  this->m_PnpMachine.m_QueueLock.m_DbgFlagIsInitialized = 1;
  this->m_PnpMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_PnpMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_PnpMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_PnpMachine.m_StateMachineLock.m_OwningThread = 0LL;
  this->m_PnpMachine.m_PkgPnp = 0LL;
  this->m_PnpMachine.m_EventWorker = 0LL;
  *(_DWORD *)&this->m_PnpMachine.m_QueueHead = 0x80000;
  this->m_PnpMachine.m_WorkItemFinished = 0LL;
  *(_WORD *)&this->m_PnpMachine.m_QueueFlags = 0;
  this->m_PnpMachine.m_WorkItem.m_WorkItem = 0LL;
  memset(this->m_PnpMachine.m_Queue, 0, sizeof(this->m_PnpMachine.m_Queue));
  *(_QWORD *)&this->m_PnpMachine.m_States.S = 0LL;
  *(_QWORD *)&this->m_PnpMachine.m_States.History[4] = 0LL;
  m_HistoryIndex = this->m_PnpMachine.m_HistoryIndex;
  this->m_PnpMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1) % this->m_PnpMachine.m_QueueDepth;
  this->m_PnpMachine.m_States.History[m_HistoryIndex] = 256;
  this->m_PnpMachine.m_FireAndForget = 0;
  this->m_PowerMachine.m_QueueLock.m_Lock = 0LL;
  this->m_PowerMachine.m_QueueLock.m_DbgFlagIsInitialized = 1;
  this->m_PowerMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_PowerMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_PowerMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_PowerMachine.m_StateMachineLock.m_OwningThread = 0LL;
  this->m_PowerMachine.m_PkgPnp = 0LL;
  this->m_PowerMachine.m_EventWorker = 0LL;
  *(_DWORD *)&this->m_PowerMachine.m_QueueHead = 0x80000;
  this->m_PowerMachine.m_WorkItemFinished = 0LL;
  *(_WORD *)&this->m_PowerMachine.m_QueueFlags = 0;
  this->m_PowerMachine.m_WorkItem.m_WorkItem = 0LL;
  this->m_PowerMachine.m_EventWorkQueueItem.WorkerRoutine = FxThreadedEventQueue::_WorkerThreadRoutine;
  this->m_PowerMachine.m_EventWorkQueueItem.Parameter = &this->m_PowerMachine;
  this->m_PowerMachine.m_EventWorkQueueItem.List.Flink = 0LL;
  this->m_PowerMachine.m_WaitWakeLock.m_Lock = 0LL;
  this->m_PowerMachine.m_WaitWakeLock.m_DbgFlagIsInitialized = 1;
  this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Blink = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
  this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList.Flink = &this->m_PowerMachine.m_WaitWakeIrpToBeProcessedList;
  *(_QWORD *)&this->m_PowerMachine.m_Queue.E = 0LL;
  *(_QWORD *)&this->m_PowerMachine.m_Queue.Events[4] = 0LL;
  *(_QWORD *)&this->m_PowerMachine.m_States.S = 0LL;
  *(_QWORD *)&this->m_PowerMachine.m_States.History[4] = 0LL;
  v8 = this->m_PowerMachine.m_HistoryIndex;
  this->m_PowerMachine.m_HistoryIndex = ((int)v8 + 1) % this->m_PowerMachine.m_QueueDepth;
  this->m_PowerMachine.m_States.History[v8] = 768;
  *(_DWORD *)&this->m_PowerMachine.m_SingularEventsPresent = 0;
  this->m_PowerPolicyMachine.m_QueueLock.m_Lock = 0LL;
  this->m_PowerPolicyMachine.m_QueueLock.m_DbgFlagIsInitialized = 1;
  this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_DbgFlagIsInitialized = 1;
  this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
  this->m_PowerPolicyMachine.m_PkgPnp = 0LL;
  this->m_PowerPolicyMachine.m_EventWorker = 0LL;
  *(_DWORD *)&this->m_PowerPolicyMachine.m_QueueHead = 0x80000;
  this->m_PowerPolicyMachine.m_WorkItemFinished = 0LL;
  *(_WORD *)&this->m_PowerPolicyMachine.m_QueueFlags = 0;
  this->m_PowerPolicyMachine.m_WorkItem.m_WorkItem = 0LL;
  this->m_PowerPolicyMachine.m_EventWorkQueueItem.WorkerRoutine = FxThreadedEventQueue::_WorkerThreadRoutine;
  this->m_PowerPolicyMachine.m_EventWorkQueueItem.Parameter = &this->m_PowerPolicyMachine;
  this->m_PowerPolicyMachine.m_EventWorkQueueItem.List.Flink = 0LL;
  this->m_PowerPolicyMachine.m_Owner = 0LL;
  memset(this->m_PowerPolicyMachine.m_Queue, 0, sizeof(this->m_PowerPolicyMachine.m_Queue));
  *(_QWORD *)&this->m_PowerPolicyMachine.m_States.S = 0LL;
  *(_QWORD *)&this->m_PowerPolicyMachine.m_States.History[4] = 0LL;
  v9 = this->m_PowerPolicyMachine.m_HistoryIndex;
  this->m_PowerPolicyMachine.m_HistoryIndex = ((int)v9 + 1) % this->m_PowerPolicyMachine.m_QueueDepth;
  this->m_PowerPolicyMachine.m_States.History[v9] = 1280;
  this->m_PowerPolicyMachine.m_SingularEventsPresent = 0;
  this->m_DeviceUsageNotification.m_Method = 0LL;
  this->m_DeviceUsageNotificationEx.m_Method = 0LL;
  this->m_DeviceRelationsQuery.m_Method = 0LL;
  this->m_DeviceD0Entry.m_Method = 0LL;
  this->m_DeviceD0EntryPostInterruptsEnabled.m_Method = 0LL;
  this->m_DeviceD0ExitPreInterruptsDisabled.m_Method = 0LL;
  this->m_DeviceD0Exit.m_Method = 0LL;
  this->m_DevicePrepareHardware.m_Method = 0LL;
  this->m_DeviceReleaseHardware.m_Method = 0LL;
  this->m_DeviceQueryStop.m_Method = 0LL;
  this->m_DeviceQueryRemove.m_Method = 0LL;
  this->m_DeviceSurpriseRemoval.m_Method = 0LL;
  this->m_DmaEnablerList = 0LL;
  this->m_RemovalDeviceList = 0LL;
  this->m_UsageDependentDeviceList = 0LL;
  this->m_PnpStateAndCaps.Value = 715827882;
  *(_QWORD *)&this->m_PnpCapsAddress = -1LL;
  *(_QWORD *)&this->m_PowerCaps.Caps = 117770922LL;
  *(_QWORD *)&this->m_PowerCaps.D1Latency = -1LL;
  this->m_PowerCaps.D3Latency = -1;
  this->m_PowerCaps.States = 5;
  this->m_PowerCaps.States = 85;
  this->m_PowerCaps.States = 1365;
  this->m_PowerCaps.States = 21845;
  this->m_PowerCaps.States = 349525;
  this->m_PowerCaps.States = 5592405;
  this->m_PowerCaps.States = 89478485;
  memset(&this->m_D3ColdInterface, 0, sizeof(this->m_D3ColdInterface));
  *(_DWORD *)this->m_SpecialSupport = 0;
  *(_QWORD *)this->m_SpecialFileCount = 0LL;
  *(_QWORD *)&this->m_SpecialFileCount[2] = 0LL;
  this->m_PowerThreadInterface.Interface.InterfaceReference = FxPkgPnp::_PowerThreadInterfaceReference;
  this->m_PowerThreadInterface.Interface.InterfaceDereference = FxPkgPnp::_PowerThreadInterfaceDereference;
  this->m_PowerThreadInterface.PowerThreadEnqueue = FxPkgPnp::_PowerThreadEnqueue;
  *(_DWORD *)&this->m_PowerThreadInterface.Interface.Size = 65576;
  this->m_PowerThreadInterface.Interface.Context = this;
  this->m_PowerThread = 0LL;
  *(_DWORD *)&this->m_SystemPowerAction = 0;
  this->m_PowerThreadInterfaceReferenceCount = 1;
  this->m_PowerThreadEvent = 0LL;
  this->m_DeviceStopCount = 0;
  *(_WORD *)&this->m_FailedAction = 0;
  this->m_PendingChildCount = 0;
  this->m_QueryInterfaceHead.Next = 0LL;
  this->m_DeviceInterfaceHead.Next = 0LL;
  this->m_DeviceInterfacesCanBeEnabled = 0;
  *(_DWORD *)&this->m_Failed = 84214016;
  this->m_PendingPnPIrp = 0LL;
  this->m_PendingSystemPowerIrp = 0LL;
  this->m_PendingDevicePowerIrp = 0LL;
  this->m_PnpStateCallbacks = 0LL;
  this->m_PowerStateCallbacks = 0LL;
  this->m_PowerPolicyStateCallbacks = 0LL;
  this->m_SelfManagedIoMachine = 0LL;
  this->m_EnumInfo = 0LL;
  this->m_Resources = 0LL;
  this->m_ResourcesRaw = 0LL;
  this->m_InterruptListHead.Blink = &this->m_InterruptListHead;
  this->m_InterruptListHead.Flink = &this->m_InterruptListHead;
  this->m_InterruptObjectCount = 0;
  *(_QWORD *)&this->m_WakeInterruptCount = 0LL;
  *(_WORD *)&this->m_SystemWokenByWakeInterrupt = 0;
  this->m_AchievedStart = 0;
  this->m_SharedPower.m_WaitWakeIrp = 0LL;
  *(_WORD *)&this->m_SharedPower.m_WaitWakeOwner = 0;
  this->m_DeviceRemoveProcessed = 0LL;
  this->m_IoConnectInterruptEx = FxLibraryGlobals.IoConnectInterruptEx;
  this->m_IoDisconnectInterruptEx = FxLibraryGlobals.IoDisconnectInterruptEx;
  this->m_IoReportInterruptActive = FxLibraryGlobals.IoReportInterruptActive;
  this->m_IoReportInterruptInactive = FxLibraryGlobals.IoReportInterruptInactive;
  this->m_ObjectFlags |= 0x800u;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = 0;
}
