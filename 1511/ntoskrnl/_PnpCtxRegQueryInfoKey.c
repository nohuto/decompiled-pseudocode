/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1404C7040
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404C6DBC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140517310 (DrvDbGetObjectSubKeyCallback.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14069563C (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140695A9C (_CmRemoveDeviceFromContainerWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14069AD0C (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14069B588 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x1404B7820 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, void *a2, _DWORD *a3, __int64 a4, _DWORD *a5, unsigned int *a6)
{
  return RegRtlQueryInfoKey(a2, a3, 0LL, a5, a6, 0LL);
}
