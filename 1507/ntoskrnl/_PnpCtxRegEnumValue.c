/*
 * XREFs of _PnpCtxRegEnumValue @ 0x140588CBC
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140588A84 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140714D74 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1407151CC (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140716CBC (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140716FC0 (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14071BB44 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x14058B9D0 (_RegRtlEnumValue.c)
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
