/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x140588D08
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140588A84 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1407151CC (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x14071562C (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14071ACCC (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14071B63C (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14071BB44 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x1405A928C (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  return RegRtlQueryInfoKey(a2, a3, 0, a5, a6, 0LL);
}
