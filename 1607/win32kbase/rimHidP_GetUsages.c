/*
 * XREFs of rimHidP_GetUsages @ 0x1C00D2F40
 * Callers:
 *     rimExtractButtonPageButtonUsages @ 0x1C00DC8D4 (rimExtractButtonPageButtonUsages.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C00DCA4C (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractPointerDeviceUsages @ 0x1C00DD0D8 (rimExtractPointerDeviceUsages.c)
 *     rimProcessHidKeyboardInput @ 0x1C00DF3B4 (rimProcessHidKeyboardInput.c)
 *     RIMExtractCustomPTPSetting @ 0x1C00E2064 (RIMExtractCustomPTPSetting.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetUsages(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_GetUsages )
    return gpfnHidP_GetUsages(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
