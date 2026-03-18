/*
 * XREFs of _PnpCtxRegDeleteValue @ 0x140564078
 * Callers:
 *     _PnpDeletePropertyWorker @ 0x140563ED4 (_PnpDeletePropertyWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140589C68 (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x14058C574 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmSetDeviceRegPropWorker @ 0x1405B2384 (_CmSetDeviceRegPropWorker.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14067A2E4 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140682F40 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407143F8 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14071562C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1407171CC (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x140717458 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140717578 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmDeleteInstallerClassMappedPropertyFromCoInstallers @ 0x140717678 (_CmDeleteInstallerClassMappedPropertyFromCoInstallers.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1407176D4 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140717868 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14071BB44 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetRegValueMappedProperty @ 0x14071CE8C (DrvDbSetRegValueMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x1401808F0 (ZwDeleteValueKey.c)
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
