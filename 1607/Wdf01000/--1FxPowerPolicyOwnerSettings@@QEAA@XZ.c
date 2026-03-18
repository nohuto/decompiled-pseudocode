/*
 * XREFs of ??1FxPowerPolicyOwnerSettings@@QEAA@XZ @ 0x1C0099674
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0095EC0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C00625C8 (--1MxTimer@@QEAA@XZ.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1C0099710 (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 *     ?CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ @ 0x1C0099738 (-CleanupPowerCallback@FxPowerPolicyOwnerSettings@@QEAAXXZ.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1C009AEBC (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::~FxPowerPolicyOwnerSettings(FxPowerPolicyOwnerSettings *this)
{
  __int64 v2; // rdx
  FxUsbIdleInfo *m_UsbIdle; // rcx
  _POX_SETTINGS *m_PoxSettings; // r8
  _PO_FX_COMPONENT_V1 *Component; // rax
  unsigned int v6; // ecx
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx
  FxTagTracker *m_TagTracker; // rcx

  FxPowerPolicyOwnerSettings::CleanupPowerCallback(this);
  m_UsbIdle = this->m_UsbIdle;
  if ( m_UsbIdle )
  {
    FxUsbIdleInfo::`scalar deleting destructor'(m_UsbIdle, v2);
    this->m_UsbIdle = 0LL;
  }
  m_PoxSettings = this->m_IdleSettings.m_TimeoutMgmt.m_PoxSettings;
  if ( m_PoxSettings )
  {
    Component = m_PoxSettings->Component;
    if ( Component )
      v6 = 24 * Component->IdleStateCount + 32;
    else
      v6 = 0;
    ExFreePoolWithTag((char *)m_PoxSettings - v6, 0);
  }
  m_DevicePowerRequirementMachine = this->m_PoxInterface.m_DevicePowerRequirementMachine;
  if ( m_DevicePowerRequirementMachine )
    FxWakeInterruptMachine::`scalar deleting destructor'(m_DevicePowerRequirementMachine, v2);
  this->m_PoxInterface.m_DevicePowerRequiredLock.m_DbgFlagIsInitialized = 0;
  m_TagTracker = this->m_PowerIdleMachine.m_TagTracker;
  if ( m_TagTracker )
  {
    FxTagTracker::`scalar deleting destructor'(m_TagTracker);
    this->m_PowerIdleMachine.m_TagTracker = 0LL;
  }
  MxTimer::~MxTimer(&this->m_PowerIdleMachine.m_PowerTimeoutTimer, v2);
  this->m_PowerIdleMachine.m_Lock.m_DbgFlagIsInitialized = 0;
}
