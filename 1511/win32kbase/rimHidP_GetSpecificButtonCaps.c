/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C0007A8C
 * Callers:
 *     RIMGetDeviceButtons @ 0x1C0007494 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0007760 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0007948 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086248 (RIMDeliverConfigRequestWithTimeout.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00D03F8 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00D087C (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00D0F58 (rimValidateCustomHidKeyboardUsages.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00D1874 (RIMExtractCustomPTPSetting.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D28AC (RIMSendPTPLatencyMgtDeviceRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificButtonCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_BUTTON_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificButtonCaps )
    return gpfnHidP_GetSpecificButtonCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}
