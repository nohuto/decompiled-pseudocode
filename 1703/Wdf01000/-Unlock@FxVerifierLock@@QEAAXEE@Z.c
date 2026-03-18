/*
 * XREFs of ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003F608
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
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0009E80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000F470 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0011A70 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x1C001D540 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
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
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0033548 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0033610 (-_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0033C60 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0034380 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0035650 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     imp_WdfCmResourceListGetCount @ 0x1C0039330 (imp_WdfCmResourceListGetCount.c)
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1C007B2B0 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C0081E6C (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C0081FD0 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 */

void __fastcall FxVerifierLock::Unlock(FxVerifierLock *this, KIRQL PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v7; // r13
  FxVerifierThreadTableEntry *_a2; // rdi
  _LARGE_INTEGER *p_sleepTime; // r8
  unsigned __int8 m_UseMutex; // al
  FxVerifierLock *PerThreadPassiveLockList; // rcx
  FxVerifierLock *i; // rsi
  unsigned __int16 v13; // r9
  FxVerifierLock *j; // rsi
  _LARGE_INTEGER Interval; // [rsp+40h] [rbp-48h] BYREF
  _LARGE_INTEGER sleepTime; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  _a1 = KeGetCurrentThread();
  m_Globals = this->m_Globals;
  if ( _a1 != this->m_OwningThread )
  {
    WPP_IFR_SF_qqq(m_Globals, 2u, 0x12u, 0xBu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, this->m_ParentObject);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&m_Globals->ThreadTableLock.m_Lock);
  _a2 = FxVerifierLock::GetThreadTableEntry(this->m_OwningThread, this, 1u);
  if ( !_a2 )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_cpp_Traceguids, _a1);
    this->m_OwningThread = 0LL;
    KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
    if ( !this->m_UseMutex )
    {
      KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
      if ( KeGetCurrentIrql() )
        return;
      sleepTime.QuadPart = 0LL;
      p_sleepTime = &sleepTime;
      goto LABEL_36;
    }
LABEL_33:
    ExReleaseFastMutexUnsafe(&this->m_Mutex.m_Lock);
    KeLeaveCriticalRegion();
    return;
  }
  m_UseMutex = this->m_UseMutex;
  if ( m_UseMutex )
  {
    if ( !_a2->PerThreadPassiveLockList )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
      goto LABEL_33;
    }
  }
  else if ( !_a2->PerThreadDispatchLockList )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xFu, WPP_FxVerifierLock_cpp_Traceguids);
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
    FxVerifierDbgBreakPoint(m_Globals);
    this->m_OwningThread = 0LL;
    KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
    KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
    if ( KeGetCurrentIrql() )
      return;
    v17 = 0LL;
    p_sleepTime = (_LARGE_INTEGER *)&v17;
    goto LABEL_36;
  }
  if ( m_UseMutex )
  {
    PerThreadPassiveLockList = _a2->PerThreadPassiveLockList;
    if ( PerThreadPassiveLockList == this )
    {
      _a2->PerThreadPassiveLockList = this->m_OwnedLink;
LABEL_24:
      this->m_OwnedLink = 0LL;
      FxVerifierLock::ReleaseOrReplaceThreadTableEntry(_a1, this);
      goto LABEL_32;
    }
    for ( i = PerThreadPassiveLockList->m_OwnedLink; i; i = i->m_OwnedLink )
    {
      if ( i == this )
        goto LABEL_21;
      PerThreadPassiveLockList = i;
    }
    v13 = 17;
  }
  else
  {
    PerThreadPassiveLockList = _a2->PerThreadDispatchLockList;
    if ( PerThreadPassiveLockList == this )
    {
      _a2->PerThreadDispatchLockList = this->m_OwnedLink;
      goto LABEL_24;
    }
    for ( j = PerThreadPassiveLockList->m_OwnedLink; j; j = j->m_OwnedLink )
    {
      if ( j == this )
      {
LABEL_21:
        PerThreadPassiveLockList->m_OwnedLink = this->m_OwnedLink;
        this->m_OwnedLink = 0LL;
        FxVerifierLock::ReleaseOrReplaceThreadTableEntry(_a1, this);
        goto LABEL_32;
      }
      PerThreadPassiveLockList = j;
    }
    v13 = 18;
  }
  WPP_IFR_SF_qqq(m_Globals, 2u, 0x12u, v13, WPP_FxVerifierLock_cpp_Traceguids, this, _a2, this->m_OwningThread);
  FxVerifierDbgBreakPoint(m_Globals);
LABEL_32:
  this->m_OwningThread = 0LL;
  KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
  if ( this->m_UseMutex )
    goto LABEL_33;
  KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
  if ( KeGetCurrentIrql() )
    return;
  Interval.QuadPart = 0LL;
  p_sleepTime = &Interval;
LABEL_36:
  KeDelayExecutionThread(0, 1u, p_sleepTime);
}
