/*
 * XREFs of __security_check_cookie @ 0x1C000EAF0
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001570 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C000373C (GetInterruptMessageInformation.c)
 *     SrbAssignQueueId @ 0x1C000646C (SrbAssignQueueId.c)
 *     FormInquiryStandardData @ 0x1C00066B4 (FormInquiryStandardData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C0006A1C (FormInquiryDeviceIdentifiersData.c)
 *     GetRegistrySettings @ 0x1C000D914 (GetRegistrySettings.c)
 *     __GSHandlerCheckCommon @ 0x1C000EB40 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
