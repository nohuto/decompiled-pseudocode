/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1404E7028
 * Callers:
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14023B224 (DrvDbGetConfigurationSubKeyCallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404BBA40 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1404BBC3C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404BFAF8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404D97CC (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     PiCMValidateDeviceInstance @ 0x1404D9E1C (PiCMValidateDeviceInstance.c)
 *     _PnpRegQueryValueIndirect @ 0x1404E2E64 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404E6F3C (DrvDbGetRegValueMappedProperty.c)
 *     _CmAddDeviceToContainerWorker @ 0x14051299C (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x140513338 (_CmIsDeviceInContainer.c)
 *     PnpGetServiceStartType @ 0x14053947C (PnpGetServiceStartType.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14054F090 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FF60 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetIndex @ 0x140550040 (PipHardwareConfigGetIndex.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562D74 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x14062999C (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x14062D430 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14062E598 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x1406E1714 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x1406E2028 (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
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
