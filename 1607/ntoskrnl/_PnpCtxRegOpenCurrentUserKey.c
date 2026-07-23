/*
 * XREFs of _PnpCtxRegOpenCurrentUserKey @ 0x1406D7244
 * Callers:
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DAB74 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404DBB94 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404E0410 (_CmOpenDeviceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1405135B4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7C44 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D815C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9D7C (_CmDeleteDeviceContainerRegKeyWorker.c)
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
