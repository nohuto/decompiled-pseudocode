/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1404B90C0
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404B8F1C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA23C (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1406DA694 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1406DC644 (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E2108 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1404C26F0 (_RegRtlEnumValue.c)
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
