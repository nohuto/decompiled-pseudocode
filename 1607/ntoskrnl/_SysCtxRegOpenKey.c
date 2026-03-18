/*
 * XREFs of _SysCtxRegOpenKey @ 0x1404FDB8C
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmIsDeviceInContainer @ 0x140486528 (_CmIsDeviceInContainer.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404867A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404DC4F4 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiCreateDriverSwDevices @ 0x1404ED268 (PiCreateDriverSwDevices.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404F7BE8 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404F8C08 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDrvDbLoadNode @ 0x1404FA308 (PiDrvDbLoadNode.c)
 *     DrvDbLoadDatabaseNode @ 0x1404FA464 (DrvDbLoadDatabaseNode.c)
 *     _PnpOpenPropertiesKey @ 0x1404FAC30 (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404FBDA0 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1404FBF14 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x1404FCD1C (_PnpCtxRegOpenKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404FD480 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140503A30 (DrvDbGetDriverPackageMappedProperty.c)
 *     PnpGetServiceStartType @ 0x140538F3C (PnpGetServiceStartType.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FA20 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigOpenKey @ 0x14054FB84 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561A98 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140561D68 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140562C98 (_CmEnumSubkeyCallback.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EB50 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140629770 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpCheckDriverDependencies @ 0x14062D37C (PnpCheckDriverDependencies.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140631668 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631D88 (PiDqOpenUserObjectRegKey.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140632EB8 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgCopyVariableData @ 0x140637250 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgMigrateDevice @ 0x14063A864 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgMigrateService @ 0x14063AE30 (PiDevCfgMigrateService.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063B9F4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCMDeleteDeviceKey @ 0x140646FBC (PiCMDeleteDeviceKey.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1406D6F90 (_PnpCtxOpenContextBaseKey.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA104 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1406DA55C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DA9BC (_CmRemoveDeviceFromContainerWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC208 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DC718 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x1406E39F0 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1404FDBD4 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall SysCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  if ( a1 )
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, *(_QWORD *)(a1 + 8));
  else
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, 0LL);
}
