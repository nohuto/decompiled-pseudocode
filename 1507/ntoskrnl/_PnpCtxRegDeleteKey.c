/*
 * XREFs of _PnpCtxRegDeleteKey @ 0x1407123A4
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x1404DA910 (_CmAddDeviceToContainerWorker.c)
 *     _CmGetDeviceSoftwareKey @ 0x140549A10 (_CmGetDeviceSoftwareKey.c)
 *     PiDqDeleteUserObject @ 0x140681EA0 (PiDqDeleteUserObject.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140712778 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140712C94 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407148B4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 *     PipCommitPendingOsExtensionResource @ 0x1407FA0AC (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1407FA2AC (PipCommitPendingService.c)
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
