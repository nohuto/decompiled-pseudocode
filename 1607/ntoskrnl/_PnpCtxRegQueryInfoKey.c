/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1404D5B08
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404D5918 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1406DA55C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1406DA9BC (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x1406E10CC (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E1FD0 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x1404E1D04 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  return RegRtlQueryInfoKey(a2, a3, 0, a5, a6, 0LL);
}
