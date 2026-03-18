/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C0008C68
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0005B94 (RIMDeliverConfigRequest.c)
 *     RIMCacheAxisChildIndex @ 0x1C0005F00 (RIMCacheAxisChildIndex.c)
 *     RIMAssignTouchType @ 0x1C0007760 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0007948 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMGetPropertyCount @ 0x1C0007AD8 (RIMGetPropertyCount.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C00087E4 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0008A30 (RIMIsParallelDevice.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086248 (RIMDeliverConfigRequestWithTimeout.c)
 *     RIMPopulatePointerDevice @ 0x1C00C3E6C (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C00C5CB8 (RIMIDECheckScanTimeSupport.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C00C7944 (RIMIDESetPTPPhysicalSize.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00D0F58 (rimValidateCustomHidKeyboardUsages.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C00D16D4 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00D1874 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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
