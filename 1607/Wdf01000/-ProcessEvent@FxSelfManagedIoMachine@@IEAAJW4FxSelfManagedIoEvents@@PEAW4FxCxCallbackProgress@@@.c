/*
 * XREFs of ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002DBBC
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0013450 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C001C4E0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C00258D0 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0092864 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C0093380 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0094F60 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095590 (-PowerInitialSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095960 (-PowerStartSelfManagedIoFailedStarted@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095990 (-PowerStartSelfManagedIoFailedStartedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00959C0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0023D30 (WPP_IFR_SF_qqLL.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002CA48 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::ProcessEvent(
        FxSelfManagedIoMachine *this,
        _FX_DRIVER_GLOBALS *Event,
        FxCxCallbackProgress *Progress)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi
  int v6; // ebp
  unsigned int _a3; // ebx
  __int64 v8; // rax
  unsigned int TargetStatesCount; // r8d
  int v10; // ecx
  const FxSelfManagedIoTargetState *TargetStates; // rdx
  FxPkgPnp *m_PkgPnp; // r10
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rcx
  char v16; // al
  FxSelfManagedIoStates (__fastcall *StateFunc)(FxSelfManagedIoMachine *, int *, FxCxCallbackProgress *); // rax
  int status; // [rsp+88h] [rbp+10h] BYREF

  p_m_StateMachineLock = &this->m_StateMachineLock;
  v6 = (int)Event;
  FxWaitLockInternal::AcquireLock(&this->m_StateMachineLock, Event, 0LL);
  _a3 = 15;
  this->m_Events.History[this->m_EventHistoryIndex] = v6;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v8 = this->m_CurrentState - 1;
  if ( Progress )
    *Progress = FxCxCallbackProgressInitialized;
  TargetStatesCount = FxSelfManagedIoMachine::m_StateTable[v8].TargetStatesCount;
  v10 = 0;
  if ( TargetStatesCount )
  {
    TargetStates = FxSelfManagedIoMachine::m_StateTable[v8].TargetStates;
    while ( TargetStates[v10].SelfManagedIoEvent != v6 )
    {
      if ( ++v10 >= TargetStatesCount )
        goto LABEL_7;
    }
    _a3 = TargetStates[v10].SelfManagedIoState;
  }
LABEL_7:
  status = 0;
  while ( _a3 != 15 )
  {
    m_PkgPnp = this->m_PkgPnp;
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qqLL(
      m_PkgPnp->m_Globals,
      4u,
      0xCu,
      0xCu,
      WPP_SelfManagedIoStateMachine_cpp_Traceguids,
      _a1,
      _a2,
      _a3,
      this->m_CurrentState);
    this->m_States.History[this->m_StateHistoryIndex] = _a3;
    v16 = this->m_StateHistoryIndex + 1;
    this->m_CurrentState = _a3;
    this->m_StateHistoryIndex = v16 & 7;
    StateFunc = FxSelfManagedIoMachine::m_StateTable[(unsigned __int8)_a3 - 1].StateFunc;
    if ( StateFunc )
      _a3 = StateFunc(this, &status, Progress);
    else
      _a3 = 15;
  }
  p_m_StateMachineLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)status;
}
