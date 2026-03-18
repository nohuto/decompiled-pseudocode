/*
 * XREFs of _PnpCtxRegSetValue @ 0x1404870E4
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x140486C80 (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140486DF8 (_PnpSetPropertyWorker.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FA20 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571500 (_CmSetDeviceRegPropWorker.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D9788 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DE700 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DE9C4 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DEBB0 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1406DF138 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406DF2F4 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1406DF754 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E1FD0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2CD4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1406E32BC (DrvDbSetRegValueMappedProperty.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x1407BBCE0 (PipMigratePnpState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, ULONG a6)
{
  return RegRtlSetValue(a2, a6);
}
