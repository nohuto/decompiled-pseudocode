/*
 * XREFs of rimHidP_GetUsageValue @ 0x1C007308C
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C0072EBC (RIMGetMaxCountFeatureDetails.c)
 *     RIMExtractDeviceUsages @ 0x1C00CA2A0 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceFrameScanTime @ 0x1C00CBC4C (RIMGetPointerDeviceFrameScanTime.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CCB80 (rimProcessPointerDeviceInput.c)
 *     RIMGetPTPContactState @ 0x1C00D0624 (RIMGetPTPContactState.c)
 *     RIMGetPTPFrameContactCount @ 0x1C00D0A88 (RIMGetPTPFrameContactCount.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetUsageValue(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_GetUsageValue )
    return gpfnHidP_GetUsageValue(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
