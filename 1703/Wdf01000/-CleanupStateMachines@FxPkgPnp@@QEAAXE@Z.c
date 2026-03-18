/*
 * XREFs of ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009AB00
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C007D644 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0096780 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C009BF08 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C009D240 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C002AF84 (--0FxCREvent@@QEAA@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C009BF74 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x1C009E12C (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     ?SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z @ 0x1C00A07D0 (-SetFinished@FxEventQueue@@QEAAEPEAUFxCREvent@@@Z.c)
 */

void __fastcall FxPkgPnp::CleanupStateMachines(FxPkgPnp *this, unsigned __int8 CleanupPnp)
{
  FxDeviceBase *m_DeviceBase; // rdx
  _DEVICE_OBJECT *_a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxDeviceBase *v8; // rdx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned __int16 v10; // ax
  const void *v11; // rdx
  FxDeviceBase *v12; // rdx
  _DEVICE_OBJECT *v13; // rcx
  unsigned __int16 v14; // ax
  const void *v15; // rdx
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx
  FxDeviceBase *v17; // r10
  _DEVICE_OBJECT *v18; // rcx
  unsigned __int16 v19; // ax
  const void *v20; // r10
  FxCREvent eventOnStack; // [rsp+40h] [rbp-20h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, CleanupPnp);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( CleanupPnp && !FxEventQueue::SetFinished(&this->m_PnpMachine, &eventOnStack) )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x23u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerPolicyMachine, &eventOnStack) )
  {
    v8 = this->m_DeviceBase;
    m_DeviceObject = v8->m_DeviceObject.m_DeviceObject;
    v10 = v8->m_ObjectSize;
    v11 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v10 )
      v11 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x24u, WPP_FxPkgPnp_cpp_Traceguids, v11, m_DeviceObject);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  KeClearEvent(&eventOnStack.m_Event.m_Event);
  if ( !FxEventQueue::SetFinished(&this->m_PowerMachine, &eventOnStack) )
  {
    v12 = this->m_DeviceBase;
    v13 = v12->m_DeviceObject.m_DeviceObject;
    v14 = v12->m_ObjectSize;
    v15 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14 )
      v15 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x25u, WPP_FxPkgPnp_cpp_Traceguids, v15, v13);
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( this->m_PowerPolicyMachine.m_Owner )
  {
    KeClearEvent(&eventOnStack.m_Event.m_Event);
    m_DevicePowerRequirementMachine = this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DevicePowerRequirementMachine;
    if ( m_DevicePowerRequirementMachine && !FxEventQueue::SetFinished(m_DevicePowerRequirementMachine, &eventOnStack) )
    {
      v17 = this->m_DeviceBase;
      v18 = v17->m_DeviceObject.m_DeviceObject;
      v19 = v17->m_ObjectSize;
      v20 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v19 )
        v20 = 0LL;
      WPP_IFR_SF_qq(this->m_Globals, 4u, 0xCu, 0x26u, WPP_FxPkgPnp_cpp_Traceguids, v20, v18);
      KeEnterCriticalRegion();
      KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
      KeLeaveCriticalRegion();
    }
    FxPowerPolicyOwnerSettings::CleanupPowerCallback(this->m_PowerPolicyMachine.m_Owner);
  }
  FxPkgPnp::ReleasePowerThread(this);
  this->ReleaseReenumerationInterface(this);
}
