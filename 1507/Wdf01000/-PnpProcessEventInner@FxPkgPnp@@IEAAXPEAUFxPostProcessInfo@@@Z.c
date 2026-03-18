/*
 * XREFs of ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C001A860
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0029560 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C005BD40 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_PNP_NOTIFICATION_DATA@@@Z @ 0x1C0099A94 (-Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWD.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C009B514 (WPP_IFR_SF_qqLLL.c)
 */

void __fastcall FxPkgPnp::PnpProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  const PNP_STATE_TABLE *v4; // rdi
  KIRQL v5; // r8
  FxPnpEvent v6; // ebp
  int m_QueueDepth; // ecx
  int v8; // edx
  unsigned __int8 v9; // dl
  __int64 v10; // rdx
  _WDF_DEVICE_PNP_STATE _a3; // esi
  _WDF_DEVICE_PNP_STATE _a4; // edi
  FxDeviceBase *v13; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPnpStateCallback *m_PnpStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  int v18; // edx
  FxPnpStateCallback *v19; // rcx
  _WDF_DEVICE_PNP_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPnpStateCallback *v21; // rcx
  unsigned __int8 m_QueueFlags; // cl
  const PNP_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  __int64 v24; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v27; // edx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  const void *v29; // rax
  FxDeviceBase *v30; // r9
  WDFDEVICE__ *v31; // r9
  FxDeviceBase *v32; // r9
  WDFDEVICE__ *v33; // r9
  FxDeviceBase *v34; // r9
  WDFDEVICE__ *v35; // r9
  unsigned int globals; // ecx
  FxDeviceBase *v37; // rax
  unsigned int v38; // edx
  _DEVICE_OBJECT *v39; // r8
  const void *v40; // rax
  _IRP *m_PendingPnPIrp; // rax
  _WDF_DEVICE_PNP_NOTIFICATION_DATA NotificationData; // [rsp+50h] [rbp-58h] BYREF

  while ( 1 )
  {
    v4 = &FxPkgPnp::m_WdfPnpStates[((__int64)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable & 0xFFFF7FFF)
                                 - 256];
    v5 = KeAcquireSpinLockRaiseToDpc(&this->m_PnpMachine.m_QueueLock.m_Lock);
    if ( this->m_PnpMachine.m_QueueHead == this->m_PnpMachine.m_QueueTail )
      break;
    v6 = this->m_PnpMachine.m_Queue[this->m_PnpMachine.m_QueueHead];
    if ( (v6 & 0x3C3000) == 0 && (*(_DWORD *)&v4->StateInfo.Bits & 1) == 0 )
      goto LABEL_26;
    m_QueueDepth = this->m_PnpMachine.m_QueueDepth;
    v8 = this->m_PnpMachine.m_QueueHead + 1;
    if ( m_QueueDepth == 8 )
      v9 = v8 % 8;
    else
      v9 = v8 % m_QueueDepth;
    this->m_PnpMachine.m_QueueHead = v9;
    KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v5);
    if ( v4->FirstTargetState.PnpEvent == v6 )
    {
      _a3 = v4->FirstTargetState.TargetState;
      goto LABEL_8;
    }
    OtherTargetStates = v4->OtherTargetStates;
    if ( !OtherTargetStates || (v10 = 0LL, OtherTargetStates->PnpEvent == PnpEventNull) )
    {
LABEL_40:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v27 = (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
        m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
        if ( m_DeviceBase->m_ObjectSize )
          v29 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v29 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0xCu, 0xCu, WPP_PnpStateMachine_cpp_Traceguids, v29, m_DeviceObject, v27, v6);
      }
      globals = *(_DWORD *)&v4->StateInfo.Bits >> 1;
      if ( (globals & v6) == 0 )
      {
        v37 = this->m_DeviceBase;
        v38 = (unsigned int)v37[1].FxNonPagedObject::FxObject::__vftable;
        v39 = v37->m_DeviceObject.m_DeviceObject;
        if ( v37->m_ObjectSize )
          v40 = (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v40 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          (unsigned int)v39,
          0xDu,
          WPP_PnpStateMachine_cpp_Traceguids,
          v40,
          v39,
          v38,
          v6,
          globals);
      }
      if ( (v6 & 0xDF4) != 0 )
        FxPkgPnp::PnpFinishProcessingIrp(this, v10);
    }
    else
    {
      v24 = 0LL;
      while ( OtherTargetStates[v24].PnpEvent != v6 )
      {
        v10 = (unsigned int)(v10 + 1);
        v24 = v10;
        if ( OtherTargetStates[v10].PnpEvent == PnpEventNull )
          goto LABEL_40;
      }
      _a3 = OtherTargetStates[v10].TargetState;
LABEL_8:
      if ( _a3 == WdfDevStatePnpNull )
        goto LABEL_40;
      _a4 = (_WDF_DEVICE_PNP_STATE)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
      do
      {
        v13 = this->m_DeviceBase;
        _a2 = v13->m_DeviceObject.m_DeviceObject;
        if ( v13->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x15u, 0xEu, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, _a3, _a4);
        m_PnpStateCallbacks = this->m_PnpStateCallbacks;
        if ( m_PnpStateCallbacks )
        {
          v30 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          if ( v30->m_ObjectSize )
            v31 = (WDFDEVICE__ *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v31 = 0LL;
          FxPnpStateCallback::Invoke(m_PnpStateCallbacks, _a4, StateNotificationLeaveState, v31, &NotificationData);
        }
        m_HistoryIndex = this->m_PnpMachine.m_HistoryIndex;
        v18 = m_HistoryIndex + 1;
        if ( this->m_PnpMachine.m_QueueDepth == 8 )
          LOBYTE(v18) = v18 % 8;
        else
          v18 %= (int)this->m_PnpMachine.m_QueueDepth;
        this->m_PnpMachine.m_HistoryIndex = v18;
        this->m_PnpMachine.m_States.History[m_HistoryIndex] = _a3;
        v19 = this->m_PnpStateCallbacks;
        if ( v19 )
        {
          v32 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          if ( v32->m_ObjectSize )
            v33 = (WDFDEVICE__ *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v33 = 0LL;
          FxPnpStateCallback::Invoke(v19, _a3, StateNotificationEnterState, v33, &NotificationData);
        }
        _a4 = _a3;
        LODWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
        StateFunc = FxPkgPnp::m_WdfPnpStates[(_a3 & 0xFFFF7FFF) - 256].StateFunc;
        if ( StateFunc )
          _a3 = StateFunc(this);
        else
          _a3 = WdfDevStatePnpNull;
        v21 = this->m_PnpStateCallbacks;
        if ( v21 )
        {
          v34 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          if ( v34->m_ObjectSize )
            v35 = (WDFDEVICE__ *)((unsigned __int64)v34 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v35 = 0LL;
          FxPnpStateCallback::Invoke(v21, _a4, StateNotificationPostProcessState, v35, &NotificationData);
        }
      }
      while ( _a3 != WdfDevStatePnpNull );
    }
  }
  m_QueueFlags = this->m_PnpMachine.m_QueueFlags;
  if ( (m_QueueFlags & 1) == 0
    && !this->m_PnpMachine.m_WorkItemRunningCount
    && this->m_PnpMachine.m_QueueHead == this->m_PnpMachine.m_QueueTail )
  {
    if ( (m_QueueFlags & 4) != 0 )
    {
      this->m_PnpMachine.m_QueueFlags = m_QueueFlags & 0xFB;
      Info->m_DeleteObject = 1;
    }
    if ( (this->m_PnpMachine.m_QueueFlags & 2) != 0 )
    {
      Info->m_Event = this->m_PnpMachine.m_WorkItemFinished;
      this->m_PnpMachine.m_WorkItemFinished = 0LL;
    }
  }
  if ( this->m_PnpMachine.m_FireAndForget )
  {
    m_PendingPnPIrp = this->m_PendingPnPIrp;
    this->m_PendingPnPIrp = 0LL;
    this->m_PnpMachine.m_FireAndForget = 0;
    Info->m_FireAndForgetIrp = m_PendingPnPIrp;
  }
  Info->m_SetRemovedEvent = this->m_SetDeviceRemoveProcessed;
  this->m_SetDeviceRemoveProcessed = 0;
LABEL_26:
  KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v5);
}
