/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1404C6FF4
 * Callers:
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404C6DBC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14051496C (_PnpGetGenericStorePropertyKeys.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406951E4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14069563C (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14069712C (_PnpGetGenericStorePropertyLocales.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14069B588 (DrvDbSetDeviceIdDriverInfMatches.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1404BA058 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        unsigned int *a5,
        _DWORD *a6,
        void *a7,
        unsigned int *a8)
{
  return RegRtlEnumValue(a2, a3, a4, a5, a6, a7, a8);
}
