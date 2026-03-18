/*
 * XREFs of ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CA28
 * Callers:
 *     imp_WdfInterruptReleaseLock @ 0x1C0001230 (imp_WdfInterruptReleaseLock.c)
 *     ?ReleaseLock@FxInterrupt@@QEAAXXZ @ 0x1C0011508 (-ReleaseLock@FxInterrupt@@QEAAXXZ.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x1C0023FBC (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0025160 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ @ 0x1C002B740 (-PowerParentPowerDereference@FxPkgPdo@@EEAAXXZ.c)
 *     ?_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C002E1B0 (-_ProcessEventInner@FxDevicePwrRequirementMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@.c)
 *     ?ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C002E3B0 (-ProcessEvent@FxDevicePwrRequirementMachine@@QEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C002F000 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0062698 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C007F140 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z @ 0x1C008AF58 (-CleanupInterfacePipesAndDelete@FxUsbDevice@@IEAAXPEAVFxUsbInterface@@@Z.c)
 *     ?PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z @ 0x1C008BF80 (-PipesGotoRemoveState@FxUsbDevice@@IEAAXE@Z.c)
 *     ?Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z @ 0x1C008C110 (-Purge@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@@Z.c)
 *     ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C008CD20 (-Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0092864 (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 *     ?Dispose@FxPkgPnp@@MEAAEXZ @ 0x1C0096B90 (-Dispose@FxPkgPnp@@MEAAEXZ.c)
 *     ?ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z @ 0x1C009C154 (-ProcessEvent@FxWakeInterruptMachine@@QEAAXW4FxWakeInterruptEvents@@@Z.c)
 *     ?_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z @ 0x1C009C4D0 (-_ProcessEventInner@FxWakeInterruptMachine@@SAXPEAVFxPkgPnp@@PEAUFxPostProcessInfo@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockInternal::ReleaseLock(FxWaitLockInternal *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  this->m_OwningThread = 0LL;
  KeSetEvent(&this->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
