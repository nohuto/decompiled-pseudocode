/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14045D6F8
 * Callers:
 *     _PnpRegQueryValueIndirect @ 0x14043CA58 (_PnpRegQueryValueIndirect.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140443F94 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCMValidateDeviceInstance @ 0x14045BB10 (PiCMValidateDeviceInstance.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14045D154 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     DrvDbGetRegValueMappedProperty @ 0x14045D60C (DrvDbGetRegValueMappedProperty.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14046043C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14046082C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404DE78C (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404ED090 (_CmAddDeviceToContainerWorker.c)
 *     _CmIsDeviceInContainer @ 0x1404EECA8 (_CmIsDeviceInContainer.c)
 *     PnpGetServiceStartType @ 0x140503E5C (PnpGetServiceStartType.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14051496C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14051FF04 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140523794 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigGetIndex @ 0x140523874 (PipHardwareConfigGetIndex.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140531D0C (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigGetLastUseTime @ 0x1405FF898 (PipHardwareConfigGetLastUseTime.c)
 *     PnpCheckDriverDependencies @ 0x140602FE4 (PnpCheckDriverDependencies.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1406041B0 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14069B21C (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetRegValueMappedPropertyKeys @ 0x14069B4A8 (DrvDbGetRegValueMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14069C28C (DrvDbSetDriverPackageMappedProperty.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x140783404 (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x140783EA0 (PipProcessPendingObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
