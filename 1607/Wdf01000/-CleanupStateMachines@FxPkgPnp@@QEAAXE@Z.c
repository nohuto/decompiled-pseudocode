/*
 * XREFs of ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00967C0
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C00798E8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0092570 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0097B20 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0098D30 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C00642E0 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C0097B88 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x1C0099738 (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     ?SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z @ 0x1C009BCF4 (-SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z.c)
 */

void __fastcall FxPkgPnp::CleanupStateMachines(FxPkgPnp *this, unsigned __int8 CleanupPnp)
{
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *_a1; // rax
  FxDeviceBase *v7; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  const void *v9; // rax
  FxDeviceBase *v10; // rax
  _DEVICE_OBJECT *v11; // rcx
  const void *v12; // rax
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx
  FxDeviceBase *v14; // rax
  _DEVICE_OBJECT *v15; // rcx
  const void *v16; // rax
  FxCREvent eventOnStack; // [rsp+40h] [rbp-20h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, CleanupPnp);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( CleanupPnp && !FxEventQueue::SetFinished(&this->m_PnpMachine, &eventOnStack) )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( m_DeviceBase->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x23u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerPolicyMachine, &eventOnStack) )
  {
    v7 = this->m_DeviceBase;
    m_DeviceObject = v7->m_DeviceObject.m_DeviceObject;
    if ( v7->m_ObjectSize )
      v9 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v9 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x24u, WPP_FxPkgPnp_cpp_Traceguids, v9, m_DeviceObject);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerMachine, &eventOnStack) )
  {
    v10 = this->m_DeviceBase;
    v11 = v10->m_DeviceObject.m_DeviceObject;
    if ( v10->m_ObjectSize )
      v12 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v12 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x25u, WPP_FxPkgPnp_cpp_Traceguids, v12, v11);
    FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
  }
  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    KeClearEvent(&eventOnStack.m_Event.m_Event);
    m_DevicePowerRequirementMachine = this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
    if ( m_DevicePowerRequirementMachine && !FxEventQueue::SetFinished(m_DevicePowerRequirementMachine, &eventOnStack) )
    {
      v14 = this->m_DeviceBase;
      v15 = v14->m_DeviceObject.m_DeviceObject;
      if ( v14->m_ObjectSize )
        v16 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v16 = 0LL;
      WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x26u, WPP_FxPkgPnp_cpp_Traceguids, v16, v15);
      FxCREvent::EnterCRAndWaitAndLeave(&eventOnStack);
    }
    FxPowerPolicyOwnerSettings::CleanupPowerCallback(this->m_PowerPolicyMachine.m_Owner);
  }
  FxPkgPnp::ReleasePowerThread(this);
  this->ReleaseReenumerationInterface(this);
}
