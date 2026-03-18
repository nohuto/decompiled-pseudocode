/*
 * XREFs of ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710
 * Callers:
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0002150 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00023A0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     imp_WdfCollectionGetItem @ 0x1C00026C0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionGetCount @ 0x1C0002B70 (imp_WdfCollectionGetCount.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C0003000 (imp_WdfIoQueueFindRequest.c)
 *     imp_WdfRequestSend @ 0x1C0004AD0 (imp_WdfRequestSend.c)
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0005270 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B6C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B970 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000BDA0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000D120 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000DAC0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C00114E0 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C0015D00 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z.c)
 *     ?AllocateEnumInfo@FxPkgPnp@@QEAAJXZ @ 0x1C00160CC (-AllocateEnumInfo@FxPkgPnp@@QEAAJXZ.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C00169A0 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z @ 0x1C00170A0 (-HandleQueryPnpDeviceState@FxPkgPnp@@IEAAKK@Z.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0018F00 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C001DA90 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001DCA0 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C001DE30 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C002AE38 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C002B250 (imp_WdfWmiInstanceCreate.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C002C5C0 (-_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x1C0031760 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1C0069C50 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C005D374 (WPP_IFR_SF_qqq.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C006F2D0 (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C006F5D0 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 */

void __fastcall FxVerifierLock::Unlock(FxVerifierLock *this, KIRQL PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v7; // r13
  _LIST_ENTRY **_a2; // rdi
  _LARGE_INTEGER *p_sleepTime; // r8
  unsigned __int8 m_UseMutex; // al
  FxVerifierLock *v11; // rcx
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
  _a2 = FxVerifierLock::GetThreadTableEntry((unsigned __int64)this->m_OwningThread, this, 1u);
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
    if ( !_a2[1] )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
      goto LABEL_33;
    }
  }
  else if ( !_a2[2] )
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
    v11 = (FxVerifierLock *)_a2[1];
    if ( v11 == this )
    {
      _a2[1] = (_LIST_ENTRY *)this->m_OwnedLink;
LABEL_24:
      this->m_OwnedLink = 0LL;
      FxVerifierLock::ReleaseOrReplaceThreadTableEntry((unsigned __int64)_a1, this);
      goto LABEL_32;
    }
    for ( i = v11->m_OwnedLink; i; i = i->m_OwnedLink )
    {
      if ( i == this )
        goto LABEL_21;
      v11 = i;
    }
    v13 = 17;
  }
  else
  {
    v11 = (FxVerifierLock *)_a2[2];
    if ( v11 == this )
    {
      _a2[2] = (_LIST_ENTRY *)this->m_OwnedLink;
      goto LABEL_24;
    }
    for ( j = v11->m_OwnedLink; j; j = j->m_OwnedLink )
    {
      if ( j == this )
      {
LABEL_21:
        v11->m_OwnedLink = this->m_OwnedLink;
        this->m_OwnedLink = 0LL;
        FxVerifierLock::ReleaseOrReplaceThreadTableEntry((unsigned __int64)_a1, this);
        goto LABEL_32;
      }
      v11 = j;
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
