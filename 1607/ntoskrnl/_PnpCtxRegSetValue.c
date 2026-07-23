/*
 * XREFs of _PnpCtxRegSetValue @ 0x140512E00
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x14051299C (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140512B14 (_PnpSetPropertyWorker.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FF60 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571A40 (_CmSetDeviceRegPropWorker.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D98C0 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DE838 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DEAFC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DECE8 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1406DF270 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406DF42C (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1406DF88C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E2108 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1406E33F4 (DrvDbSetRegValueMappedProperty.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 * Callees:
 *     <none>
 */

int __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, const WCHAR *a3, ULONG a4, void *a5, ULONG a6)
{
  return RegRtlSetValue(a2, a3, a4, a5, a6);
}
