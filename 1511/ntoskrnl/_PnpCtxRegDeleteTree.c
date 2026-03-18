/*
 * XREFs of _PnpCtxRegDeleteTree @ 0x140522444
 * Callers:
 *     _PnpSetPropertyWorker @ 0x14045CE24 (_PnpSetPropertyWorker.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x140513D6C (PipHardwareConfigActivateService.c)
 *     PiDevCfgFreeResolveContext @ 0x14051414C (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140514214 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     PiDqDeleteUserObject @ 0x14060717C (PiDqDeleteUserObject.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140609F54 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceReset @ 0x14060D8F8 (PpDevCfgProcessDeviceReset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140692BDC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406930F8 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140693674 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140694D24 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140695A9C (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 *     PipCommitPendingOsExtensionResource @ 0x140783928 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140783B28 (PipCommitPendingService.c)
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
