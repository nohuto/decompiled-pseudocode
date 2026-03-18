/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x140550618
 * Callers:
 *     _PnpSetPropertyWorker @ 0x140486DF8 (_PnpSetPropertyWorker.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1404E9064 (PpDevCfgProcessDeviceOperations.c)
 *     PipHardwareConfigActivateService @ 0x1406296E4 (PipHardwareConfigActivateService.c)
 *     PiDqDeleteUserObject @ 0x140631594 (PiDqDeleteUserObject.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635E44 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFreeResolveContext @ 0x140638EF4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgMigrateService @ 0x14063AE30 (PiDevCfgMigrateService.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D61C (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641D00 (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7B0C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D8024 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D85A0 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9C44 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DA9BC (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407CF148 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407CF348 (PipCommitPendingService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegDeleteTree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8

  if ( a1 && *(_QWORD *)a1 )
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  else
    v4 = 0LL;
  return RegRtlDeleteTreeInternal(a2, a3, v4);
}
