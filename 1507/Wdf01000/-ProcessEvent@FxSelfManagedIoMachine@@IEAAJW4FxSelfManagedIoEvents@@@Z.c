/*
 * XREFs of ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z @ 0x1C002903C
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0006AB0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000ACB0 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x1C0019904 (-PowerGotoDx@FxPkgPnp@@IEAAXXZ.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0099ACC (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C009A6D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009BAF0 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C009C510 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x1C0017E30 (WPP_IFR_SF_qqLL.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C00291EC (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

__int64 __fastcall FxSelfManagedIoMachine::ProcessEvent(FxSelfManagedIoMachine *this, _FX_DRIVER_GLOBALS *Event)
{
  int v3; // ebp
  unsigned int _a3; // ebx
  int v5; // ecx
  __int64 v6; // rax
  unsigned int TargetStatesCount; // r8d
  const FxSelfManagedIoTargetState *TargetStates; // rdx
  FxPkgPnp *m_PkgPnp; // r10
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *_a2; // rdx
  const void *_a1; // rcx
  char v13; // al
  FxSelfManagedIoStates (__fastcall *StateFunc)(FxSelfManagedIoMachine *, int *); // rax
  int status; // [rsp+78h] [rbp+10h] BYREF

  v3 = (int)Event;
  FxWaitLockInternal::AcquireLock(&this->m_StateMachineLock, Event, 0LL);
  _a3 = 13;
  v5 = 0;
  this->m_Events.History[this->m_EventHistoryIndex] = v3;
  this->m_EventHistoryIndex = (this->m_EventHistoryIndex + 1) & 7;
  v6 = this->m_CurrentState - 1;
  TargetStatesCount = FxSelfManagedIoMachine::m_StateTable[v6].TargetStatesCount;
  if ( TargetStatesCount )
  {
    TargetStates = FxSelfManagedIoMachine::m_StateTable[v6].TargetStates;
    while ( TargetStates[v5].SelfManagedIoEvent != v3 )
    {
      if ( ++v5 >= TargetStatesCount )
        goto LABEL_5;
    }
    _a3 = TargetStates[v5].SelfManagedIoState;
  }
LABEL_5:
  status = 0;
  while ( _a3 != 13 )
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
    v13 = this->m_StateHistoryIndex + 1;
    this->m_CurrentState = _a3;
    this->m_StateHistoryIndex = v13 & 7;
    StateFunc = FxSelfManagedIoMachine::m_StateTable[(unsigned __int8)_a3 - 1].StateFunc;
    if ( StateFunc )
      _a3 = StateFunc(this, &status);
    else
      _a3 = 13;
  }
  this->m_StateMachineLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_StateMachineLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)status;
}
