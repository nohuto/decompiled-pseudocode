/*
 * XREFs of _SysCtxRegOpenKey @ 0x14043BE70
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x14043B720 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpCtxRegOpenKey @ 0x14043BD20 (_PnpCtxRegOpenKey.c)
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140442270 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x1404442A0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404444DC (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x14044473C (DrvDbLoadDatabaseNode.c)
 *     PiDrvDbLoadNode @ 0x140444A94 (PiDrvDbLoadNode.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14045D154 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1404BDD10 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DD2D8 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DE228 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiCreateDriverSwDevices @ 0x1404EC474 (PiCreateDriverSwDevices.c)
 *     _CmIsDeviceInContainer @ 0x1404EECA8 (_CmIsDeviceInContainer.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404F8E2C (PiDqOpenUserObjectRegKey.c)
 *     PnpGetServiceStartType @ 0x140503E5C (PnpGetServiceStartType.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14051496C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140515D70 (_PnpCtxOpenContextBaseKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140517310 (DrvDbGetObjectSubKeyCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140523794 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PipHardwareConfigOpenKey @ 0x1405238F8 (PipHardwareConfigOpenKey.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140530F6C (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405313E4 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140531D0C (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140532164 (_CmEnumSubkeyCallback.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140549920 (DrvDbOpenDriverDatabaseRegKey.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x1405FF720 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PnpCheckDriverDependencies @ 0x140602FE4 (PnpCheckDriverDependencies.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140607250 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140607C34 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgCopyVariableData @ 0x140608248 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140609340 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406096F0 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiCMDeleteDeviceKey @ 0x140612A78 (PiCMDeleteDeviceKey.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406951E4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14069563C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140695A9C (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmDeleteDeviceInterfaceMappedPropertyFromRegValue @ 0x140697338 (_CmDeleteDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140699A24 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbInitializeDatabaseNodeVersion @ 0x14069CE08 (DrvDbInitializeDatabaseNodeVersion.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x14043BEB8 (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall SysCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  if ( a1 )
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, *(_QWORD *)(a1 + 8));
  else
    return RegRtlOpenKeyTransacted(a2, a3, a4, a5, a6, 0LL);
}
