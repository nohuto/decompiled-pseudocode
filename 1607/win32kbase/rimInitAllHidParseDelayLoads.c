/*
 * XREFs of rimInitAllHidParseDelayLoads @ 0x1C00521EC
 * Callers:
 *     RIMInitialize @ 0x1C0051F80 (RIMInitialize.c)
 * Callees:
 *     rimFindImageProcAddress @ 0x1C005233C (rimFindImageProcAddress.c)
 */

void rimInitAllHidParseDelayLoads()
{
  void *v0; // rbx

  v0 = ghModHidParse;
  if ( ghModHidParse )
  {
    gpfnHidP_GetUsageValue = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16, unsigned int *, struct _HIDP_PREPARSED_DATA *, char *, unsigned int))rimFindImageProcAddress(ghModHidParse, "HidP_GetUsageValue");
    gpfnHidP_GetScaledUsageValue = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16, int *, struct _HIDP_PREPARSED_DATA *, char *, unsigned int))rimFindImageProcAddress(v0, "HidP_GetScaledUsageValue");
    gpfnHidP_GetUsageValueArray = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16, char *, unsigned __int16, struct _HIDP_PREPARSED_DATA *, char *, unsigned int))rimFindImageProcAddress(v0, "HidP_GetUsageValueArray");
    gpfnHidP_GetUsages = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16 *, unsigned int *, struct _HIDP_PREPARSED_DATA *, char *, unsigned int))rimFindImageProcAddress(v0, "HidP_GetUsages");
    gpfnHidP_GetSpecificValueCaps = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16, struct _HIDP_VALUE_CAPS *, unsigned __int16 *, struct _HIDP_PREPARSED_DATA *))rimFindImageProcAddress(v0, "HidP_GetSpecificValueCaps");
    WPP_MAIN_CB.Queue.ListEntry.Flink = (struct _LIST_ENTRY *)rimFindImageProcAddress(
                                                                v0,
                                                                "HidP_GetCollectionDescription");
    gpfnHidP_GetCaps = (int (*)(struct _HIDP_PREPARSED_DATA *, struct _HIDP_CAPS *))rimFindImageProcAddress(
                                                                                      v0,
                                                                                      "HidP_GetCaps");
    gpfnHidP_GetLinkCollectionNodes = (int (*)(struct _HIDP_LINK_COLLECTION_NODE *, unsigned int *, struct _HIDP_PREPARSED_DATA *))rimFindImageProcAddress(v0, "HidP_GetLinkCollectionNodes");
    gpfnHidP_FreeCollectionDescription = (void (*)(struct _HIDP_DEVICE_DESC *))rimFindImageProcAddress(
                                                                                 v0,
                                                                                 "HidP_FreeCollectionDescription");
    gpfnHidP_SetUsageValue = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16, unsigned int, struct _HIDP_PREPARSED_DATA *, char *, unsigned int))rimFindImageProcAddress(v0, "HidP_SetUsageValue");
    gpfnHidP_GetSpecificButtonCaps = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16, struct _HIDP_BUTTON_CAPS *, unsigned __int16 *, struct _HIDP_PREPARSED_DATA *))rimFindImageProcAddress(v0, "HidP_GetSpecificButtonCaps");
    gpfnHidP_SetUsages = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16 *, unsigned int *, struct _HIDP_PREPARSED_DATA *, char *, unsigned int))rimFindImageProcAddress(v0, "HidP_SetUsages");
    gpfnHidP_UnsetUsages = (int (*)(enum _HIDP_REPORT_TYPE, unsigned __int16, unsigned __int16, unsigned __int16 *, unsigned int *, struct _HIDP_PREPARSED_DATA *, char *, unsigned int))rimFindImageProcAddress(v0, "HidP_UnsetUsages");
    gpfnHidP_UsageListDifference = (int (*)(unsigned __int16 *, unsigned __int16 *, unsigned __int16 *, unsigned __int16 *, unsigned int))rimFindImageProcAddress(v0, "HidP_UsageListDifference");
  }
}
