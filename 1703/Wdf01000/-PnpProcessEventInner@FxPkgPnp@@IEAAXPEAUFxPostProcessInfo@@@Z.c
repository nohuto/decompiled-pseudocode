/*
 * XREFs of ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x1C0026220
 * Callers:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C0031EC0 (-_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023080 (WPP_IFR_SF_qqLL.c)
 *     __security_check_cookie @ 0x1C003E280 (__security_check_cookie.c)
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C0065924 (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     WPP_IFR_SF_qqLLL @ 0x1C00983D4 (WPP_IFR_SF_qqLLL.c)
 *     ?Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWDFDEVICE__@@PEBU_WDF_DEVICE_PNP_NOTIFICATION_DATA@@@Z @ 0x1C0098514 (-Invoke@FxPnpStateCallback@@QEAAXW4_WDF_DEVICE_PNP_STATE@@W4_WDF_STATE_NOTIFICATION_TYPE@@PEAUWD.c)
 */

void __fastcall FxPkgPnp::PnpProcessEventInner(FxPkgPnp *this, FxPostProcessInfo *Info)
{
  const PNP_STATE_TABLE *v4; // rdi
  KIRQL v5; // r8
  FxPnpEvent v6; // r14d
  __int64 v7; // rdx
  _WDF_DEVICE_PNP_STATE _a3; // esi
  _WDF_DEVICE_PNP_STATE _a4; // edi
  FxDeviceBase *v10; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxPnpStateCallback *m_PnpStateCallbacks; // rcx
  __int64 m_HistoryIndex; // r8
  FxPnpStateCallback *v15; // rcx
  _WDF_DEVICE_PNP_STATE (__fastcall *StateFunc)(FxPkgPnp *); // rax
  FxPnpStateCallback *v17; // rcx
  unsigned __int8 m_QueueFlags; // cl
  const PNP_EVENT_TARGET_STATE *OtherTargetStates; // rcx
  __int64 v20; // rax
  FxDeviceBase *v21; // r9
  unsigned __int16 v22; // ax
  WDFDEVICE__ *v23; // r9
  FxDeviceBase *v24; // r9
  unsigned __int16 v25; // ax
  WDFDEVICE__ *v26; // r9
  FxDeviceBase *v27; // r9
  unsigned __int16 v28; // ax
  WDFDEVICE__ *v29; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  unsigned int v32; // edx
  _DEVICE_OBJECT *m_DeviceObject; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v35; // r10
  unsigned int globals; // r10d
  FxDeviceBase *v37; // r8
  unsigned int v38; // ecx
  _DEVICE_OBJECT *v39; // rdx
  unsigned __int16 v40; // ax
  const void *v41; // r8
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
      goto LABEL_22;
    this->m_PnpMachine.m_QueueHead = ((unsigned int)this->m_PnpMachine.m_QueueHead + 1)
                                   % this->m_PnpMachine.m_QueueDepth;
    KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v5);
    if ( v4->FirstTargetState.PnpEvent == v6 )
    {
      _a3 = v4->FirstTargetState.TargetState;
      goto LABEL_6;
    }
    OtherTargetStates = v4->OtherTargetStates;
    if ( !OtherTargetStates || (LODWORD(v7) = 0, OtherTargetStates->PnpEvent == PnpEventNull) )
    {
LABEL_46:
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerboseOn )
      {
        m_DeviceBase = this->m_DeviceBase;
        v32 = (unsigned int)m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
        m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        v35 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          v35 = 0LL;
        WPP_IFR_SF_qqLL(m_Globals, 5u, 0xCu, 0xCu, WPP_PnpStateMachine_cpp_Traceguids, v35, m_DeviceObject, v32, v6);
      }
      globals = *(_DWORD *)&v4->StateInfo.Bits >> 1;
      if ( (globals & v6) == 0 )
      {
        v37 = this->m_DeviceBase;
        v38 = (unsigned int)v37[1].FxNonPagedObject::FxObject::__vftable;
        v39 = v37->m_DeviceObject.m_DeviceObject;
        v40 = v37->m_ObjectSize;
        v41 = (const void *)((unsigned __int64)v37 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v40 )
          v41 = 0LL;
        WPP_IFR_SF_qqLLL(
          this->m_Globals,
          3u,
          (unsigned int)v41,
          0xDu,
          WPP_PnpStateMachine_cpp_Traceguids,
          v41,
          v39,
          v38,
          v6,
          globals);
      }
      if ( (v6 & 0xDF4) != 0 )
        FxPkgPnp::PnpFinishProcessingIrp(this, v7);
    }
    else
    {
      v20 = 0LL;
      while ( OtherTargetStates[v20].PnpEvent != v6 )
      {
        v7 = (unsigned int)(v7 + 1);
        v20 = v7;
        if ( OtherTargetStates[v7].PnpEvent == PnpEventNull )
          goto LABEL_46;
      }
      _a3 = OtherTargetStates[(unsigned int)v7].TargetState;
LABEL_6:
      if ( _a3 == WdfDevStatePnpNull )
        goto LABEL_46;
      _a4 = (_WDF_DEVICE_PNP_STATE)this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable;
      do
      {
        v10 = this->m_DeviceBase;
        _a2 = v10->m_DeviceObject.m_DeviceObject;
        if ( v10->m_ObjectSize )
          _a1 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          _a1 = 0LL;
        WPP_IFR_SF_qqLL(this->m_Globals, 4u, 0x15u, 0xEu, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, _a3, _a4);
        m_PnpStateCallbacks = this->m_PnpStateCallbacks;
        if ( m_PnpStateCallbacks )
        {
          v21 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationLeaveState;
          NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v22 = v21->m_ObjectSize;
          v23 = (WDFDEVICE__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v22 )
            v23 = 0LL;
          FxPnpStateCallback::Invoke(m_PnpStateCallbacks, _a4, StateNotificationLeaveState, v23, &NotificationData);
        }
        m_HistoryIndex = this->m_PnpMachine.m_HistoryIndex;
        this->m_PnpMachine.m_HistoryIndex = ((int)m_HistoryIndex + 1) % (unsigned int)this->m_PnpMachine.m_QueueDepth;
        this->m_PnpMachine.m_States.History[m_HistoryIndex] = _a3;
        v15 = this->m_PnpStateCallbacks;
        if ( v15 )
        {
          v24 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationEnterState;
          NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)__PAIR64__(_a3, _a4);
          v25 = v24->m_ObjectSize;
          v26 = (WDFDEVICE__ *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v25 )
            v26 = 0LL;
          FxPnpStateCallback::Invoke(v15, _a3, StateNotificationEnterState, v26, &NotificationData);
        }
        _a4 = _a3;
        LODWORD(this->m_DeviceBase[1].FxNonPagedObject::FxObject::__vftable) = _a3;
        StateFunc = FxPkgPnp::m_WdfPnpStates[(_a3 & 0xFFFF7FFF) - 256].StateFunc;
        if ( StateFunc )
          _a3 = StateFunc(this);
        else
          _a3 = WdfDevStatePnpNull;
        v17 = this->m_PnpStateCallbacks;
        if ( v17 )
        {
          v27 = this->m_DeviceBase;
          NotificationData.Type = StateNotificationPostProcessState;
          NotificationData.Data = (_WDF_DEVICE_PNP_NOTIFICATION_DATA::<unnamed_type_Data>)(unsigned int)_a4;
          v28 = v27->m_ObjectSize;
          v29 = (WDFDEVICE__ *)((unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v28 )
            v29 = 0LL;
          FxPnpStateCallback::Invoke(v17, _a4, StateNotificationPostProcessState, v29, &NotificationData);
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
LABEL_22:
  KeReleaseSpinLock(&this->m_PnpMachine.m_QueueLock.m_Lock, v5);
}
