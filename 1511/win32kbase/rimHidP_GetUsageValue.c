/*
 * XREFs of rimHidP_GetUsageValue @ 0x1C000A018
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C0009EAC (RIMGetMaxCountFeatureDetails.c)
 *     RIMExtractDeviceUsages @ 0x1C00CB374 (RIMExtractDeviceUsages.c)
 *     RIMGetPointerDeviceFrameScanTime @ 0x1C00CCD08 (RIMGetPointerDeviceFrameScanTime.c)
 *     rimProcessPointerDeviceInput @ 0x1C00CDE70 (rimProcessPointerDeviceInput.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00D1874 (RIMExtractCustomPTPSetting.c)
 *     RIMGetPTPContactState @ 0x1C00D209C (RIMGetPTPContactState.c)
 *     RIMGetPTPFrameContactCount @ 0x1C00D2500 (RIMGetPTPFrameContactCount.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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
