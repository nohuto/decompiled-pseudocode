/*
 * XREFs of ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C001E2C0
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0022700 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x1C001E0A4 (-ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00367F0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_dqd @ 0x1C006C118 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C0088C04 (WPP_IFR_SF_qqqqq.c)
 */

__int64 __fastcall FxIoQueue::Initialize(
        FxIoQueue *this,
        _WDF_IO_QUEUE_CONFIG *pConfig,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        unsigned __int8 InitialPowerStateOn)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  __int64 result; // rax
  _WDF_IO_QUEUE_DISPATCH_TYPE DispatchType; // edx
  unsigned int NumberOfPresentedRequests; // ecx
  _WDF_TRI_STATE PowerManaged; // ecx
  __int32 v14; // ecx
  _FX_DRIVER_GLOBALS *v15; // rcx
  _FX_IO_QUEUE_STATE m_QueueState; // eax
  int _a1; // eax
  unsigned int v18; // esi
  unsigned __int16 v19; // ax
  const void *v20; // rbx
  unsigned __int16 v21; // ax
  const void *v22; // rbx
  const void *globals; // rcx
  const void *v24; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // rbx

  m_Globals = this->m_Globals;
  KeInitializeEvent(&this->m_PowerIdle.m_Event, NotificationEvent, 0);
  this->m_PowerIdle.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_FinishDisposing.m_Event, NotificationEvent, 0);
  this->m_FinishDisposing.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x800u;
  result = FxIoQueue::ConfigureConstraints(this, QueueAttributes, Caller);
  if ( (int)result < 0 )
    return result;
  DispatchType = pConfig->DispatchType;
  if ( (unsigned int)(DispatchType - 1) > 2 )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_dqd(m_Globals, 2u, 0xDu, 0xCu, WPP_FxIoQueue_cpp_Traceguids, DispatchType, _a2, -1073741811);
    return 3221225485LL;
  }
  if ( DispatchType == WdfIoQueueDispatchManual )
  {
    if ( pConfig->EvtIoDefault
      || pConfig->EvtIoRead
      || pConfig->EvtIoWrite
      || pConfig->EvtIoDeviceControl
      || pConfig->EvtIoInternalDeviceControl )
    {
      v19 = this->m_ObjectSize;
      v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v19 )
        v20 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x10u, WPP_FxIoQueue_cpp_Traceguids, v20, -1073741811);
      return 3221225485LL;
    }
  }
  else if ( !pConfig->EvtIoDefault
         && !pConfig->EvtIoRead
         && !pConfig->EvtIoWrite
         && !pConfig->EvtIoDeviceControl
         && !pConfig->EvtIoInternalDeviceControl )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xFu, WPP_FxIoQueue_cpp_Traceguids, -1071644149);
    return 3223323147LL;
  }
  if ( pConfig->Size > 0x50 )
  {
    NumberOfPresentedRequests = pConfig->Settings.Parallel.NumberOfPresentedRequests;
    if ( NumberOfPresentedRequests && ((DispatchType - 1) & 0xFFFFFFFD) == 0 )
    {
      v21 = this->m_ObjectSize;
      v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v21 )
        v22 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x11u, WPP_FxIoQueue_cpp_Traceguids, v22, -1073741811);
      return 3221225485LL;
    }
    this->m_MaxParallelQueuePresentedRequests = NumberOfPresentedRequests;
  }
  if ( this->m_PassiveLevel )
  {
    _a1 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_SystemWorkItem);
    v18 = _a1;
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0x12u, WPP_FxIoQueue_cpp_Traceguids, _a1);
      return v18;
    }
  }
  this->m_Type = pConfig->DispatchType;
  PowerManaged = pConfig->PowerManaged;
  if ( PowerManaged == WdfFalse )
    goto LABEL_26;
  v14 = PowerManaged - 1;
  if ( !v14 )
  {
LABEL_16:
    this->m_PowerManaged = 1;
    goto LABEL_17;
  }
  if ( v14 == 1 )
  {
    if ( !BYTE1(this->m_DeviceBase[1].m_Globals) )
      goto LABEL_16;
LABEL_26:
    this->m_PowerManaged = 0;
  }
LABEL_17:
  if ( BYTE5(this->m_DeviceBase[1].m_Globals) )
    this->m_PowerManaged = 0;
  if ( !this->m_PowerManaged || InitialPowerStateOn )
    this->m_PowerState = FxIoQueuePowerOn;
  else
    this->m_PowerState = FxIoQueuePowerOff;
  this->m_AllowZeroLengthRequests = pConfig->AllowZeroLengthRequests;
  if ( m_Globals->FxVerboseOn )
  {
    globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      globals = 0LL;
    WPP_IFR_SF_qqqqq(
      m_Globals,
      DispatchType,
      0xDu,
      0x13u,
      WPP_FxIoQueue_cpp_Traceguids,
      pConfig->EvtIoDefault,
      pConfig->EvtIoRead,
      pConfig->EvtIoWrite,
      pConfig->EvtIoDeviceControl,
      globals);
  }
  v15 = this->m_Globals;
  this->m_IoDefault.Method = pConfig->EvtIoDefault;
  this->m_IoStop.Method = pConfig->EvtIoStop;
  this->m_IoResume.Method = pConfig->EvtIoResume;
  this->m_IoRead.Method = pConfig->EvtIoRead;
  this->m_IoWrite.Method = pConfig->EvtIoWrite;
  this->m_IoDeviceControl.Method = pConfig->EvtIoDeviceControl;
  this->m_IoInternalDeviceControl.Method = pConfig->EvtIoInternalDeviceControl;
  this->m_IoCanceledOnQueue.Method = pConfig->EvtIoCanceledOnQueue;
  m_QueueState = this->m_QueueState;
  if ( (m_QueueState & 0x10000) != 0 )
  {
    v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v24 = 0LL;
    WPP_IFR_SF_q(v15, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, v24);
  }
  else
  {
    this->m_QueueState = m_QueueState | 1;
  }
  this->m_QueueState |= 2u;
  result = 0LL;
  this->m_CancelDispatchedRequests = 0;
  this->m_Configured = 1;
  return result;
}
