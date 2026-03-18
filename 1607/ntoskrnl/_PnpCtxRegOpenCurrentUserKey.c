/*
 * XREFs of _PnpCtxRegOpenCurrentUserKey @ 0x1406D710C
 * Callers:
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404867A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404F7BE8 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404F8C08 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404FD480 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7B0C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D8024 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D85A0 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9C44 (_CmDeleteDeviceContainerRegKeyWorker.c)
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
