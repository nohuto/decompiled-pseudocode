/*
 * XREFs of ??0FxPowerPolicyOwnerSettings@@QEAA@PEAVFxPkgPnp@@@Z @ 0x1C0032DF0
 * Callers:
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0026B60 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ??0FxPowerIdleMachine@@QEAA@XZ @ 0x1C0023A78 (--0FxPowerIdleMachine@@QEAA@XZ.c)
 */

void __fastcall FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings(
        FxPowerPolicyOwnerSettings *this,
        FxPkgPnp *PkgPnp)
{
  FxPowerIdleMachine::FxPowerIdleMachine(&this->m_PowerIdleMachine);
  this->m_PoxInterface.m_DevicePowerRequiredLock.m_DbgFlagIsInitialized = 1;
  this->m_PoxInterface.m_DevicePowerRequiredLock.m_Lock = 0LL;
  this->m_PoxInterface.m_PkgPnp = PkgPnp;
  this->m_PoxInterface.m_PoHandle = 0LL;
  this->m_PoxInterface.m_DevicePowerRequired = 1;
  this->m_PoxInterface.m_DevicePowerRequirementMachine = 0LL;
  this->m_PoxInterface.m_CurrentIdleTimeoutHint = 0;
  this->m_PoxInterface.m_NextIdleTimeoutHint = 0;
  this->m_DeviceArmWakeFromS0.m_Method = 0LL;
  this->m_DeviceArmWakeFromSx.m_Method = 0LL;
  this->m_DeviceArmWakeFromSx.m_MethodWithReason = 0LL;
  this->m_DeviceDisarmWakeFromS0.m_Method = 0LL;
  this->m_DeviceDisarmWakeFromSx.m_Method = 0LL;
  this->m_DeviceWakeFromS0Triggered.m_Method = 0LL;
  this->m_DeviceWakeFromSxTriggered.m_Method = 0LL;
  this->m_WakeSettings.WmiInstance = 0LL;
  this->m_WakeSettings.DxState = PowerDeviceD3;
  *(_DWORD *)&this->m_WakeSettings.Enabled = 0;
  *(_WORD *)&this->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake = 0;
  this->m_IdleSettings.WmiInstance = 0LL;
  this->m_IdleSettings.DxState = PowerDeviceD3;
  *(_DWORD *)&this->m_IdleSettings.Enabled = 0;
  this->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus = 0;
  this->m_IdleSettings.m_TimeoutMgmt.m_PoxSettings = 0LL;
  *(_DWORD *)&this->m_IdleSettings.WakeFromS0Capable = 0;
  this->m_PkgPnp = PkgPnp;
  this->m_UsbIdle = 0LL;
  *(_QWORD *)&this->m_SystemToDeviceStateMap = 0LL;
  this->m_SystemToDeviceStateMap = 4;
  this->m_SystemToDeviceStateMap = 20;
  this->m_SystemToDeviceStateMap = 1044;
  this->m_SystemToDeviceStateMap = 17428;
  this->m_SystemToDeviceStateMap = 279572;
  this->m_SystemToDeviceStateMap = 4473876;
  this->m_SystemToDeviceStateMap = 71582740;
  *(_DWORD *)&this->m_IdealDxStateForSx = 4;
  *(_DWORD *)&this->m_WakeCompletionEventDropped = 0x10000;
  this->m_ChildrenArmedCount = 0;
  this->m_WaitWakeStatus = -1073741637;
  this->m_SystemWakeSource = 0;
  this->m_WaitWakeCancelCompletionOwnership = 0;
  this->m_PowerCallbackObject = 0LL;
  this->m_PowerCallbackRegistration = 0LL;
}
