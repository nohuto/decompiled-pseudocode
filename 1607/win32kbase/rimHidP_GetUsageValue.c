/*
 * XREFs of rimHidP_GetUsageValue @ 0x1C0006454
 * Callers:
 *     RIMGetMaxCountFeatureDetails @ 0x1C00062DC (RIMGetMaxCountFeatureDetails.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C00DCD98 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C00DD0D8 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C00DD530 (rimExtractScantime.c)
 *     rimFindOrCreateActiveContact @ 0x1C00DDA20 (rimFindOrCreateActiveContact.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00E2064 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
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
