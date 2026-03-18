/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14043E1AC
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x14043DFF4 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140458610 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404DA910 (_CmAddDeviceToContainerWorker.c)
 *     DrvDbGetRegValueMappedProperty @ 0x1404DAAE4 (DrvDbGetRegValueMappedProperty.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404DD708 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmIsDeviceInContainer @ 0x140537D80 (_CmIsDeviceInContainer.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140546BD0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PnpGetServiceStartType @ 0x1405728B0 (PnpGetServiceStartType.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14057EC8C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14058C574 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14058F2E0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetIndex @ 0x14058F3C0 (PipHardwareConfigGetIndex.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405A8E28 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1405B8298 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PipHardwareConfigGetLastUseTime @ 0x14067A45C (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x14067DE50 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14067EE2C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140716CBC (_PnpGetGenericStorePropertyKeys.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14071B1DC (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x14071BA64 (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071C8E8 (DrvDbSetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x1407E75D0 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x1407F9B88 (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x1407FA624 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  return RegRtlQueryValue(a2, a6);
}
