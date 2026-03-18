/*
 * XREFs of ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C000C1A4
 * Callers:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C000B290 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 * Callees:
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C000BEE0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x1C000BF9C (-ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_dqd @ 0x1C0063BE8 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qqqqq @ 0x1C0084EA0 (WPP_IFR_SF_qqqqq.c)
 */

__int64 __fastcall FxIoQueue::Initialize(
        FxIoQueue *this,
        _WDF_IO_QUEUE_CONFIG *pConfig,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        FxDriver *Caller,
        unsigned __int8 InitialPowerStateOn)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  MxEvent *p_m_PowerIdle; // rbx
  __int64 result; // rax
  unsigned int NumberOfPresentedRequests; // edx
  const void *globals; // rbx
  _WDF_IO_QUEUE_DISPATCH_TYPE DispatchType; // ecx
  _WDF_TRI_STATE PowerManaged; // ecx
  __int32 v16; // ecx
  int _a1; // eax
  unsigned int v18; // edi
  const void *v19; // rbp
  unsigned int v20; // ebx
  unsigned __int16 v21; // r9
  const void *_a2; // rbp

  m_Globals = this->m_Globals;
  p_m_PowerIdle = &this->m_PowerIdle;
  KeInitializeEvent(&this->m_PowerIdle.m_Event, NotificationEvent, 0);
  p_m_PowerIdle->m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_FinishDisposing.m_Event, NotificationEvent, 0);
  this->m_FinishDisposing.m_DbgFlagIsInitialized = 1;
  this->m_ObjectFlags |= 0x800u;
  result = FxIoQueue::ConfigureConstraints(this, QueueAttributes, Caller);
  globals = 0LL;
  if ( (int)result >= 0 )
  {
    DispatchType = pConfig->DispatchType;
    if ( (unsigned int)(DispatchType - 1) > 2 )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      v20 = -1073741811;
      WPP_IFR_SF_dqd(
        m_Globals,
        2u,
        0xDu,
        0xCu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        DispatchType,
        _a2,
        -1073741811);
      return v20;
    }
    if ( DispatchType == WdfIoQueueDispatchManual )
    {
      if ( pConfig->EvtIoDefault
        || pConfig->EvtIoRead
        || pConfig->EvtIoWrite
        || pConfig->EvtIoDeviceControl
        || pConfig->EvtIoInternalDeviceControl )
      {
        if ( this->m_ObjectSize )
          v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v19 = 0LL;
        v21 = 14;
        goto LABEL_42;
      }
    }
    else if ( !pConfig->EvtIoDefault
           && !pConfig->EvtIoRead
           && !pConfig->EvtIoWrite
           && !pConfig->EvtIoDeviceControl
           && !pConfig->EvtIoInternalDeviceControl )
    {
      v20 = -1071644149;
      WPP_IFR_SF_d(
        m_Globals,
        2u,
        0xDu,
        0xDu,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        -1071644149);
      return v20;
    }
    if ( pConfig->Size > 0x50 )
    {
      NumberOfPresentedRequests = pConfig->Settings.Parallel.NumberOfPresentedRequests;
      if ( NumberOfPresentedRequests && ((DispatchType - 1) & 0xFFFFFFFD) == 0 )
      {
        if ( this->m_ObjectSize )
          v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v19 = 0LL;
        v21 = 15;
LABEL_42:
        v20 = -1073741811;
        WPP_IFR_SF_qd(
          m_Globals,
          2u,
          0xDu,
          v21,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v19,
          -1073741811);
        return v20;
      }
      this->m_MaxParallelQueuePresentedRequests = NumberOfPresentedRequests;
    }
    if ( this->m_PassiveLevel
      && (_a1 = FxSystemWorkItem::_Create(
                  m_Globals,
                  this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
                  &this->m_SystemWorkItem),
          v18 = _a1,
          _a1 < 0) )
    {
      WPP_IFR_SF_d(
        m_Globals,
        2u,
        0xDu,
        0x10u,
        (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
        _a1);
      return v18;
    }
    else
    {
      this->m_Type = pConfig->DispatchType;
      PowerManaged = pConfig->PowerManaged;
      if ( PowerManaged )
      {
        v16 = PowerManaged - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            this->m_PowerManaged = BYTE1(this->m_DeviceBase[1].m_Globals) == 0;
        }
        else
        {
          this->m_PowerManaged = 1;
        }
      }
      else
      {
        this->m_PowerManaged = 0;
      }
      if ( BYTE5(this->m_DeviceBase[1].m_Globals) )
        this->m_PowerManaged = 0;
      if ( this->m_PowerManaged )
        this->m_PowerState = 2 - (InitialPowerStateOn != 0);
      else
        this->m_PowerState = FxIoQueuePowerOn;
      this->m_AllowZeroLengthRequests = pConfig->AllowZeroLengthRequests;
      if ( m_Globals->FxVerboseOn )
      {
        if ( this->m_ObjectSize )
          globals = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qqqqq(
          m_Globals,
          NumberOfPresentedRequests,
          0xDu,
          0x11u,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          pConfig->EvtIoDefault,
          pConfig->EvtIoRead,
          pConfig->EvtIoWrite,
          pConfig->EvtIoDeviceControl,
          globals);
      }
      this->m_IoDefault.Method = pConfig->EvtIoDefault;
      this->m_IoStop.Method = pConfig->EvtIoStop;
      this->m_IoResume.Method = pConfig->EvtIoResume;
      this->m_IoRead.Method = pConfig->EvtIoRead;
      this->m_IoWrite.Method = pConfig->EvtIoWrite;
      this->m_IoDeviceControl.Method = pConfig->EvtIoDeviceControl;
      this->m_IoInternalDeviceControl.Method = pConfig->EvtIoInternalDeviceControl;
      this->m_IoCanceledOnQueue.Method = pConfig->EvtIoCanceledOnQueue;
      FxIoQueue::SetState(this, FxIoQueueSetDispatchRequests|0x1);
      result = 0LL;
      this->m_Configured = 1;
    }
  }
  return result;
}
