/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x1404F0DB4
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1404D8638 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _PnpDeletePropertyWorker @ 0x1404F0C10 (_PnpDeletePropertyWorker.c)
 *     _CmSetDeviceRegPropWorker @ 0x140571500 (_CmSetDeviceRegPropWorker.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140629770 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140632EB8 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D61C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1406D9788 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DA9BC (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DC718 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x1406DC9A4 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DCAC4 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x1406DCBC4 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1406DCC20 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x1406DCDB4 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E1FD0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x1406E32BC (DrvDbSetRegValueMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x14015B5E0 (ZwDeleteValueKey.c)
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
