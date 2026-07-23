/*
 * XREFs of _SysCtxRegOpenKey @ 0x1404E0B1C
 * Callers:
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F0C88 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404BFAF8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DAB74 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404DBB94 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiDrvDbLoadNode @ 0x1404DD294 (PiDrvDbLoadNode.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DD3F0 (DrvDbLoadDatabaseNode.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DED30 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DEEA4 (DrvDbOpenObjectRegKey.c)
 *     _PnpCtxRegOpenKey @ 0x1404DFCAC (_PnpCtxRegOpenKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404E0410 (_CmOpenDeviceRegKeyWorker.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCreateDriverSwDevices @ 0x14050FA08 (PiCreateDriverSwDevices.c)
 *     _CmIsDeviceInContainer @ 0x140513338 (_CmIsDeviceInContainer.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1405135B4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PnpGetServiceStartType @ 0x14053947C (PnpGetServiceStartType.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FF60 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigOpenKey @ 0x1405500C4 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561FD8 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405622A8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562D74 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405631D8 (_CmEnumSubkeyCallback.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x14057EFFC (DrvDbOpenDriverDatabaseRegKey.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140629824 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpCheckDriverDependencies @ 0x14062D430 (PnpCheckDriverDependencies.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14063171C (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631E3C (PiDqOpenUserObjectRegKey.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140632F6C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgCopyVariableData @ 0x140637304 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgMigrateService @ 0x14063AEE4 (PiDevCfgMigrateService.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     _PnpCtxOpenContextBaseKey @ 0x1406D70C8 (_PnpCtxOpenContextBaseKey.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA23C (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1406DA694 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DAAF4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x1406DC850 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DFAD0 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1C00 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x1406E3B28 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall SysCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  if ( a1 )
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, *(_QWORD *)(a1 + 8));
  else
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, 0LL);
}
