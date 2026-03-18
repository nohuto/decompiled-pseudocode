/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x1404EBE98
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14046043C (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _PnpDeletePropertyWorker @ 0x1404EBCF8 (_PnpDeletePropertyWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x14053AB90 (_CmSetDeviceRegPropWorker.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1405FF720 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140607C34 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140609F54 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140694860 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140695A9C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140697338 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406975C4 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406976E4 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1406977E4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140697840 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1406979D8 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14069B588 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14069C830 (DrvDbSetRegValueMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x140151F40 (ZwDeleteValueKey.c)
 */

int __fastcall PnpCtxRegDeleteValue(__int64 a1, void *a2, const WCHAR *a3)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( result >= 0 )
    return ZwDeleteValueKey(a2, &DestinationString);
  return result;
}
