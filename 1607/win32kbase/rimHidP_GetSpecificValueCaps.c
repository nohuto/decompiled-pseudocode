/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C0009C68
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0005780 (RIMDeliverConfigRequest.c)
 *     RIMCacheAxisChildIndex @ 0x1C00060D0 (RIMCacheAxisChildIndex.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C00062DC (RIMGetMaxCountFeatureDetails.c)
 *     RIMAssignTouchType @ 0x1C0007A34 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0008928 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMGetPropertyCount @ 0x1C0008AB8 (RIMGetPropertyCount.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C00097F0 (RIMRetrieveLinkCollection.c)
 *     RIMIsParallelDevice @ 0x1C0009A3C (RIMIsParallelDevice.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086F50 (RIMDeliverConfigRequestWithTimeout.c)
 *     RIMPopulatePointerDevice @ 0x1C00D278C (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C00D51AC (RIMIDECheckScanTimeSupport.c)
 *     RIMIDESetPTPPhysicalSize @ 0x1C00D7068 (RIMIDESetPTPPhysicalSize.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00DF75C (rimValidateCustomHidKeyboardUsages.c)
 *     RIMDiscoverCustomPTPSettings @ 0x1C00E1EC4 (RIMDiscoverCustomPTPSettings.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00E2064 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
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
