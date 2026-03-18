/*
 * XREFs of ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003F450
 * Callers:
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0001010 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00016B0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     imp_WdfRequestSend @ 0x1C0003AA0 (imp_WdfRequestSend.c)
 *     imp_WdfCollectionGetItem @ 0x1C0004320 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionGetCount @ 0x1C00048E0 (imp_WdfCollectionGetCount.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C0004A90 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00059B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0006760 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006A40 (-DispatchWithLock@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007930 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008030 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008F60 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00096E0 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000F1A0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0011A70 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Lock@FxCallbackMutexLock@@UEAAXPEAE@Z @ 0x1C001D5A0 (-Lock@FxCallbackMutexLock@@UEAAXPEAE@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0022350 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C0022564 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0022700 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C0025414 (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1C00260A0 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C0026DA0 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C0027100 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0029800 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0029E20 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C002B780 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     imp_WdfCmResourceListGetDescriptor @ 0x1C0030820 (imp_WdfCmResourceListGetDescriptor.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0033548 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0033610 (-_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0033C60 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0034380 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0035650 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfCmResourceListGetCount @ 0x1C0039330 (imp_WdfCmResourceListGetCount.c)
 *     ?Lock@FxCallbackSpinLock@@UEAAXPEAE@Z @ 0x1C007B210 (-Lock@FxCallbackSpinLock@@UEAAXPEAE@Z.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C0081D28 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C0081E6C (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     WPP_IFR_SF_qqqq @ 0x1C0082320 (WPP_IFR_SF_qqqq.c)
 */

void __fastcall FxVerifierLock::Lock(FxVerifierLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  KIRQL v7; // r15
  FxObject *m_ParentObject; // rdx
  const void *v9; // rcx
  FxObject *v10; // r8
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v12; // r8
  KIRQL v13; // al
  unsigned __int64 *p_m_Lock; // rdi
  FxVerifierThreadTableEntry *ThreadTableEntry; // rax
  FxVerifierThreadTableEntry *v16; // rbp
  unsigned __int64 *v17; // rcx
  FxVerifierLock *PerThreadPassiveLockList; // rsi
  _LARGE_INTEGER sleepTime; // [rsp+80h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  m_Globals = this->m_Globals;
  v7 = 0;
  if ( this->m_OwningThread == CurrentThread )
  {
    m_ParentObject = this->m_ParentObject;
    v9 = (const void *)((unsigned __int64)m_ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ParentObject->m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qqqq(
      m_Globals,
      1u,
      0x12u,
      0xAu,
      WPP_FxVerifierLock_cpp_Traceguids,
      CurrentThread,
      this,
      m_ParentObject,
      v9);
    v10 = this->m_ParentObject;
    m_ObjectSize = v10->m_ObjectSize;
    v12 = (unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v12 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_RECURSIVE_LOCK, v12, (unsigned __int64)this);
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
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
    *PreviousIrql = v13;
    this->m_OldIrql = v13;
  }
  p_m_Lock = &m_Globals->ThreadTableLock.m_Lock;
  if ( this->m_UseMutex )
    v7 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  else
    KeAcquireSpinLockAtDpcLevel(p_m_Lock);
  this->m_OwningThread = CurrentThread;
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry(CurrentThread, this, 0);
  v16 = ThreadTableEntry;
  if ( ThreadTableEntry )
  {
    if ( this->m_UseMutex )
      PerThreadPassiveLockList = ThreadTableEntry->PerThreadPassiveLockList;
    else
      PerThreadPassiveLockList = ThreadTableEntry->PerThreadDispatchLockList;
    if ( PerThreadPassiveLockList )
    {
      if ( this->m_Order < PerThreadPassiveLockList->m_Order )
        FxVerifierLock::DumpDetails(this, CurrentThread, PerThreadPassiveLockList);
      this->m_OwnedLink = PerThreadPassiveLockList;
    }
    else
    {
      this->m_OwnedLink = 0LL;
    }
    v17 = p_m_Lock;
    if ( this->m_UseMutex )
    {
      v16->PerThreadPassiveLockList = this;
LABEL_28:
      KeReleaseSpinLock(v17, v7);
      return;
    }
    v16->PerThreadDispatchLockList = this;
  }
  else
  {
    v17 = p_m_Lock;
    if ( this->m_UseMutex )
      goto LABEL_28;
  }
  KeReleaseSpinLockFromDpcLevel(v17);
}
