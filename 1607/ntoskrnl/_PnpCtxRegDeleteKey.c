/*
 * XREFs of _PnpCtxRegDeleteKey @ 0x1406D7080
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x140486C80 (_CmAddDeviceToContainerWorker.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404D3ADC (_CmGetDeviceSoftwareKey.c)
 *     PiDqDeleteUserObject @ 0x140631594 (PiDqDeleteUserObject.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7B0C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D8024 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D85A0 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9C44 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407CF148 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407CF348 (PipCommitPendingService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegDeleteKey(__int64 a1, char *a2, const WCHAR *a3)
{
  void *v4; // r8

  if ( a1 && *(_QWORD *)a1 )
    v4 = *(void **)(*(_QWORD *)a1 + 8LL);
  else
    v4 = 0LL;
  return RegRtlDeleteKeyTransacted(a2, a3, v4);
}
