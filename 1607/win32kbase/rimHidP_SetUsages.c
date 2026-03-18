/*
 * XREFs of rimHidP_SetUsages @ 0x1C00D2FA8
 * Callers:
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000B3F0 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMDeliverConfigRequestWithTimeout @ 0x1C0086F50 (RIMDeliverConfigRequestWithTimeout.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C00D6EF8 (RIMIDESetLinkCollectionUsageValues.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C00DED30 (rimDispatchHidKeyboardInputData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_SetUsages(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_SetUsages )
    return gpfnHidP_SetUsages(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
