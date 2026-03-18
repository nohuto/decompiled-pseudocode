/*
 * XREFs of _PnpCtxRegCreateTree @ 0x1404DE538
 * Callers:
 *     PiDqOpenUserObjectRegKey @ 0x140415D2C (PiDqOpenUserObjectRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140440170 (_CmOpenCommonClassRegKeyWorker.c)
 *     DrvDbOpenObjectRegKey @ 0x1404DDA8C (DrvDbOpenObjectRegKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1404DDCF8 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DDF80 (DrvDbLoadDatabaseNode.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140537FFC (_CmOpenDeviceContainerRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegCreateTree @ 0x1404DE588 (_SysCtxRegCreateTree.c)
 */

__int64 __fastcall PnpCtxRegCreateTree(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *a1;
  return SysCtxRegCreateTree(v7, a2, a3, a4, a5, a6);
}
