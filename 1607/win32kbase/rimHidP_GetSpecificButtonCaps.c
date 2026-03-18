/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C0008A6C
 * Callers:
 *     RIMGetDeviceButtons @ 0x1C0007734 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0007A34 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0008928 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000B3F0 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086F50 (RIMDeliverConfigRequestWithTimeout.c)
 *     rimIDECheckConfidenceSupport @ 0x1C00D4EFC (rimIDECheckConfidenceSupport.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00DEBFC (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00DF080 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00DF75C (rimValidateCustomHidKeyboardUsages.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00E2064 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
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
