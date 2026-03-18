/*
 * XREFs of ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900
 * Callers:
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002FB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00033A0 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0004280 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004990 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0005F40 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000BD10 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000E300 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000E410 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfRequestSend @ 0x1C000EAA0 (imp_WdfRequestSend.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C000FD30 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000FF80 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00105C0 (imp_WdfRequestForwardToIoQueue.c)
 *     imp_WdfCollectionGetItem @ 0x1C0010AE0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionGetCount @ 0x1C0010E00 (imp_WdfCollectionGetCount.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C0011080 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z @ 0x1C001C800 (-AddIoQueue@FxPkgIo@@AEAAXPEAVFxIoQueue@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C001C900 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001CB10 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?Lock@FxCallbackMutexLock@@UEAAXPEAE@Z @ 0x1C001D040 (-Lock@FxCallbackMutexLock@@UEAAXPEAE@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0025CD4 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00266B0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C00272B8 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C00279B0 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C002A030 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C002B8B0 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0030E90 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0030F40 (-_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C00314A0 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0031BB0 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?Lock@FxCallbackSpinLock@@UEAAXPEAE@Z @ 0x1C00773D0 (-Lock@FxCallbackSpinLock@@UEAAXPEAE@Z.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C007C6D8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C007D820 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C007D95C (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     WPP_IFR_SF_qqqq @ 0x1C007DDE0 (WPP_IFR_SF_qqqq.c)
 */

void __fastcall FxVerifierLock::Lock(FxVerifierLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  KIRQL v7; // r15
  FxObject *_a3; // rcx
  const void *_a4; // rax
  FxObject *m_ParentObject; // r8
  unsigned __int64 v11; // r8
  KIRQL v12; // al
  unsigned __int64 *p_m_Lock; // rdi
  FxVerifierThreadTableEntry *ThreadTableEntry; // rax
  FxVerifierThreadTableEntry *v15; // rbp
  unsigned __int64 *v16; // rcx
  FxVerifierLock *PerThreadPassiveLockList; // rsi
  _LARGE_INTEGER sleepTime; // [rsp+80h] [rbp+8h] BYREF

  _a1 = KeGetCurrentThread();
  m_Globals = this->m_Globals;
  v7 = 0;
  if ( this->m_OwningThread == _a1 )
  {
    _a3 = this->m_ParentObject;
    if ( _a3->m_ObjectSize )
      _a4 = (const void *)((unsigned __int64)_a3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a4 = 0LL;
    WPP_IFR_SF_qqqq(m_Globals, 1u, 0x12u, 0xAu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, _a3, _a4);
    m_ParentObject = this->m_ParentObject;
    if ( m_ParentObject->m_ObjectSize )
      v11 = (unsigned __int64)m_ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_RECURSIVE_LOCK, v11, (unsigned __int64)this);
  }
  if ( this->m_UseMutex )
  {
    KeEnterCriticalRegion();
    ExAcquireFastMutexUnsafe(&this->m_Mutex.m_Lock);
    *PreviousIrql = KeGetCurrentIrql();
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      sleepTime.QuadPart = 0LL;
      KeDelayExecutionThread(0, 1u, &sleepTime);
    }
    v12 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
    *PreviousIrql = v12;
    this->m_OldIrql = v12;
  }
  p_m_Lock = &m_Globals->ThreadTableLock.m_Lock;
  if ( this->m_UseMutex )
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  else
    KeAcquireSpinLockAtDpcLevel(p_m_Lock);
  this->m_OwningThread = _a1;
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry(_a1, this, 0);
  v15 = ThreadTableEntry;
  if ( ThreadTableEntry )
  {
    if ( this->m_UseMutex )
      PerThreadPassiveLockList = ThreadTableEntry->PerThreadPassiveLockList;
    else
      PerThreadPassiveLockList = ThreadTableEntry->PerThreadDispatchLockList;
    if ( PerThreadPassiveLockList )
    {
      if ( this->m_Order < PerThreadPassiveLockList->m_Order )
        FxVerifierLock::DumpDetails(this, _a1, PerThreadPassiveLockList);
      this->m_OwnedLink = PerThreadPassiveLockList;
    }
    else
    {
      this->m_OwnedLink = 0LL;
    }
    v16 = p_m_Lock;
    if ( this->m_UseMutex )
    {
      v15->PerThreadPassiveLockList = this;
LABEL_30:
      KeReleaseSpinLock(v16, v7);
      return;
    }
    v15->PerThreadDispatchLockList = this;
  }
  else
  {
    v16 = p_m_Lock;
    if ( this->m_UseMutex )
      goto LABEL_30;
  }
  KeReleaseSpinLockFromDpcLevel(v16);
}
