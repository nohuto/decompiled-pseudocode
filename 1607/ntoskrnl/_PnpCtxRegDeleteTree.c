/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x140550B58
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x14050E6F8 (PpDevCfgProcessDeviceOperations.c)
 *     _PnpSetPropertyWorker @ 0x140512B14 (_PnpSetPropertyWorker.c)
 *     PipHardwareConfigActivateService @ 0x140629798 (PipHardwareConfigActivateService.c)
 *     PiDqDeleteUserObject @ 0x140631648 (PiDqDeleteUserObject.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635EF8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgFreeResolveContext @ 0x140638FA8 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgMigrateService @ 0x14063AEE4 (PiDevCfgMigrateService.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14063D6D0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x140641DE4 (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7C44 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D815C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9D7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DAAF4 (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
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
