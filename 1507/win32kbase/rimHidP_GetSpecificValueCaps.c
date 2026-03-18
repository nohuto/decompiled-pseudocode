/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C0074F80
 * Callers:
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C006E618 (RIMDeliverConfigRequestWithTimeout.c)
 *     RIMDeliverConfigRequest @ 0x1C007178C (RIMDeliverConfigRequest.c)
 *     RIMCacheAxisChildIndex @ 0x1C0071EEC (RIMCacheAxisChildIndex.c)
 *     RIMAssignTouchType @ 0x1C0073A74 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0073C5C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMGetPropertyCount @ 0x1C0073DEC (RIMGetPropertyCount.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C0074AFC (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0074D48 (RIMIsParallelDevice.c)
 *     RIMPopulatePointerDevice @ 0x1C00C304C (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C00C4DBC (RIMIDECheckScanTimeSupport.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C00C6A70 (RIMIDESetPTPPhysicalSize.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00CFB7C (rimValidateCustomHidKeyboardUsages.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificValueCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_VALUE_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificValueCaps )
    return gpfnHidP_GetSpecificValueCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}
