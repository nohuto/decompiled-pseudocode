/*
 * XREFs of _PnpCtxRegOpenCurrentUserKey @ 0x140712414
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140440170 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140537FFC (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140712778 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140712C94 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407148B4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegOpenCurrentUserKey(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = 0LL;
  if ( a1 )
    v2 = *a1;
  return SysCtxRegOpenCurrentUserKey(v2, 0LL, 0x2000000LL);
}
