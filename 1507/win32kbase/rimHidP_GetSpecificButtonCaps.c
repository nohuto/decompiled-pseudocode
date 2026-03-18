/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C0073DA0
 * Callers:
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C006E618 (RIMDeliverConfigRequestWithTimeout.c)
 *     RIMGetDeviceButtons @ 0x1C00737A8 (RIMGetDeviceButtons.c)
 *     RIMAssignTouchType @ 0x1C0073A74 (RIMAssignTouchType.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0073C5C (RIMRetrieveAllLinkIndexUsages.c)
 *     rimContainsCustomHidKeyboardUsages @ 0x1C00CF024 (rimContainsCustomHidKeyboardUsages.c)
 *     rimHidKeyboardIsButtonDevice @ 0x1C00CF4A8 (rimHidKeyboardIsButtonDevice.c)
 *     rimValidateCustomHidKeyboardUsages @ 0x1C00CFB7C (rimValidateCustomHidKeyboardUsages.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D0E34 (RIMSendPTPLatencyMgtDeviceRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
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
