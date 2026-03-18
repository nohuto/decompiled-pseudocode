/*
 * XREFs of _PnpCtxRegSetValue @ 0x14045D128
 * Callers:
 *     _PnpSetPropertyWorker @ 0x14045CE24 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x1404ED090 (_CmAddDeviceToContainerWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1405139AC (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x1405186F0 (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140523794 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _CmSetDeviceRegPropWorker @ 0x14053AB90 (_CmSetDeviceRegPropWorker.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140694860 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140698E10 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromCoInstallers @ 0x1406991E4 (_CmSetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1406993A0 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x1406997E0 (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14069B588 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14069C28C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14069C830 (DrvDbSetRegValueMappedProperty.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, ULONG a6)
{
  return RegRtlSetValue(a2, a6);
}
