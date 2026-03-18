/*
 * XREFs of ??0FxIoQueue@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxPkgIo@@@Z @ 0x1C001DFA0
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001CCA0 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxIoQueue::FxIoQueue(FxIoQueue *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxPkgIo *PkgIo)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  FxDeviceBase *m_DeviceBase; // rax
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxVerifierLock *VerifierLock; // [rsp+50h] [rbp+8h] BYREF

  this->m_Globals = FxDriverGlobals;
  this->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxObject::`vftable';
  *(_DWORD *)&this->FxNonPagedObject::FxObject::m_Type = 61870083;
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
  this->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxNonPagedObject::`vftable';
  this->m_NPLock.m_Lock = 0LL;
  this->m_NPLock.m_DbgFlagIsInitialized = 1;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    v10 = this->m_Globals;
    if ( v10->FxVerifierLock )
    {
      VerifierLock = 0LL;
      FxVerifierLock::CreateAndInitialize(&VerifierLock, v10, this);
      this[-1].m_IoPkgListNode.m_ListEntry.Blink = (_LIST_ENTRY *)VerifierLock;
    }
  }
  this->FxNonPagedObject::FxObject::__vftable = (FxIoQueue_vtbl *)&FxIoQueue::`vftable'{for `FxNonPagedObject'};
  this->IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)&FxIoQueue::`vftable'{for `IFxHasCallbacks'};
  this->m_FinishDisposing.m_DbgFlagIsInitialized = 0;
  this->m_Queue.m_Queue.Blink = &this->m_Queue.m_Queue;
  this->m_Queue.m_Queue.Flink = &this->m_Queue.m_Queue;
  this->m_Queue.m_LockObject = 0LL;
  this->m_Queue.m_CancelCallback = 0LL;
  this->m_Queue.m_RequestCount = 0;
  this->m_DriverCancelable.m_Queue.Blink = &this->m_DriverCancelable.m_Queue;
  this->m_DriverCancelable.m_Queue.Flink = &this->m_DriverCancelable.m_Queue;
  this->m_DriverCancelable.m_LockObject = 0LL;
  this->m_DriverCancelable.m_CancelCallback = 0LL;
  this->m_DriverCancelable.m_RequestCount = 0;
  this->m_IoDefault.m_CallbackLock = 0LL;
  this->m_IoDefault.Method = 0LL;
  this->m_IoStop.m_CallbackLock = 0LL;
  this->m_IoStop.Method = 0LL;
  this->m_IoResume.m_CallbackLock = 0LL;
  this->m_IoResume.Method = 0LL;
  this->m_IoRead.m_CallbackLock = 0LL;
  this->m_IoRead.Method = 0LL;
  this->m_IoWrite.m_CallbackLock = 0LL;
  this->m_IoWrite.Method = 0LL;
  this->m_IoDeviceControl.m_CallbackLock = 0LL;
  this->m_IoDeviceControl.Method = 0LL;
  this->m_IoInternalDeviceControl.m_CallbackLock = 0LL;
  this->m_IoInternalDeviceControl.Method = 0LL;
  this->m_IoCanceledOnQueue.m_CallbackLock = 0LL;
  this->m_IoCanceledOnQueue.Method = 0LL;
  this->m_IdleComplete.m_CallbackLock = 0LL;
  this->m_IdleComplete.Method = 0LL;
  this->m_PurgeComplete.m_CallbackLock = 0LL;
  this->m_PurgeComplete.Method = 0LL;
  this->m_ReadyNotify.m_CallbackLock = 0LL;
  this->m_ReadyNotify.Method = 0LL;
  this->m_CallbackSpinLock.m_Globals = FxDriverGlobals;
  this->m_CallbackSpinLock.__vftable = (FxCallbackSpinLock_vtbl *)&FxCallbackSpinLock::`vftable';
  this->m_CallbackSpinLock.m_OwnerThread = 0LL;
  this->m_CallbackSpinLock.m_RecursionCount = 0;
  this->m_CallbackSpinLock.m_Verifier = 0LL;
  this->m_CallbackSpinLock.m_Lock.m_Lock = 0LL;
  this->m_CallbackSpinLock.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_CallbackMutexLock.m_Globals = FxDriverGlobals;
  this->m_CallbackMutexLock.m_OwnerThread = 0LL;
  this->m_CallbackMutexLock.m_RecursionCount = 0;
  this->m_CallbackMutexLock.m_Verifier = 0LL;
  this->m_CallbackMutexLock.__vftable = (FxCallbackMutexLock_vtbl *)&FxCallbackMutexLock::`vftable';
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 0;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Count = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Owner = 0LL;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Contention = 0;
  KeInitializeEvent(&this->m_CallbackMutexLock.m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Count = 1;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Owner = 0LL;
  this->m_CallbackMutexLock.m_Lock.m_Lock.Contention = 0;
  KeInitializeEvent(&this->m_CallbackMutexLock.m_Lock.m_Lock.Event, SynchronizationEvent, 0);
  this->m_CallbackMutexLock.m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_PowerIdle.m_DbgFlagIsInitialized = 0;
  this->m_IoPkgListNode.m_Type = FxIoQueueNodeTypeQueue;
  this->m_IoPkgListNode.m_ListEntry.Blink = &this->m_IoPkgListNode.m_ListEntry;
  this->m_IoPkgListNode.m_ListEntry.Flink = &this->m_IoPkgListNode.m_ListEntry;
  this->m_Configured = 0;
  this->m_Disposing = 0;
  this->m_PowerManaged = 0;
  this->m_PowerState = FxIoQueuePowerOn;
  this->m_PowerReferenced = 0;
  this->m_AllowZeroLengthRequests = 0;
  this->m_IsDevicePowerPolicyOwner = 0;
  this->m_Type = WdfIoQueueDispatchSequential;
  this->m_QueueState = 0;
  this->m_Queue.m_CancelCallback = FxIoQueue::_IrpCancelForQueue;
  this->m_Queue.m_LockObject = this;
  this->m_DriverCancelable.m_CancelCallback = FxIoQueue::_IrpCancelForDriver;
  this->m_DriverCancelable.m_LockObject = this;
  this->m_Cancelled.Blink = &this->m_Cancelled;
  this->m_Cancelled.Flink = &this->m_Cancelled;
  this->m_CanceledOnQueueList.Blink = &this->m_CanceledOnQueueList;
  this->m_CanceledOnQueueList.Flink = &this->m_CanceledOnQueueList;
  this->m_DriverOwned.Blink = &this->m_DriverOwned;
  this->m_DriverOwned.Flink = &this->m_DriverOwned;
  this->m_PowerNotify.Blink = &this->m_PowerNotify;
  this->m_PowerNotify.Flink = &this->m_PowerNotify;
  this->m_PowerDriverNotified.Blink = &this->m_PowerDriverNotified;
  this->m_PowerDriverNotified.Flink = &this->m_PowerDriverNotified;
  this->m_PowerSListEntry.Next = 0LL;
  this->m_PkgIo = PkgIo;
  this->m_CxDeviceInfo = 0LL;
  m_DeviceBase = PkgIo->m_DeviceBase;
  this->m_DeviceBase = m_DeviceBase;
  v8 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
  v9 = v8 && *(_QWORD *)(v8 + 880);
  this->m_IsDevicePowerPolicyOwner = v9;
  this->m_Dispatching = 0;
  this->m_TransitionFromEmpty = 0;
  this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
  this->m_DriverIoCount = 0;
  this->m_TwoPhaseCompletions = 0;
  this->m_SystemWorkItem = 0LL;
  this->m_IdleComplete.Method = 0LL;
  this->m_IdleCompleteContext = 0LL;
  this->m_PurgeComplete.Method = 0LL;
  this->m_PurgeCompleteContext = 0LL;
  this->m_ReadyNotify.Method = 0LL;
  this->m_ReadyNotifyContext = 0LL;
  this->m_CallbackLockPtr = 0LL;
  this->m_CallbackLockObjectPtr = 0LL;
  KeInitializeDpc(&this->m_Dpc, FxIoQueue::_DeferredDispatchDpcThunk, this);
  this->m_ObjectFlags |= 0x10u;
  *(_WORD *)&this->m_DpcQueued = 0;
  this->m_RequeueDeferredDispatcher = 0;
  this->m_Deleted = 0;
  this->m_SupportForwardProgress = 0;
  this->m_PassiveLevel = 0;
  this->m_ExecutionLevel = WdfExecutionLevelInheritFromParent;
  this->m_SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  this->m_FwdProgContext = 0LL;
  this->m_MaxParallelQueuePresentedRequests = -1;
}
