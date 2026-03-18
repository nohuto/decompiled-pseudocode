/*
 * XREFs of _PnpCtxRegQueryValue @ 0x140504098
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14023B340 (DrvDbGetConfigurationSubKeyCallback.c)
 *     _CmIsDeviceInContainer @ 0x140486528 (_CmIsDeviceInContainer.c)
 *     _CmAddDeviceToContainerWorker @ 0x140486C80 (_CmAddDeviceToContainerWorker.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404D843C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1404D8638 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404DC4F4 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404F6840 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     _PnpRegQueryValueIndirect @ 0x1404FFED4 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140503A30 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140503FAC (DrvDbGetRegValueMappedProperty.c)
 *     PnpGetServiceStartType @ 0x140538F3C (PnpGetServiceStartType.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14054CF80 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FA20 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetIndex @ 0x14054FB00 (PipHardwareConfigGetIndex.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x1406298E8 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x14062D37C (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E4E4 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC208 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1406E15DC (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x1406E1EF0 (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2CD4 (DrvDbSetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x1407CEBD0 (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x1407CF6C0 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
