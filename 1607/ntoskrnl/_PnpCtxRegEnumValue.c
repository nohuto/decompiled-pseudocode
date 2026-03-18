/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1404D5ABC
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404D5918 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA104 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1406DA55C (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC208 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1406DC50C (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E1FD0 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1404DF0EC (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        ULONG a8)
{
  return RegRtlEnumValue(a2, a3, a4, a6, a7, a8);
}
