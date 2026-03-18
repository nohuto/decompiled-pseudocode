/*
 * XREFs of __security_check_cookie @ 0x1C000E9C0
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001570 (NVMeHwFindAdapter.c)
 *     GetInterruptMessageInformation @ 0x1C000364C (GetInterruptMessageInformation.c)
 *     SrbAssignQueueId @ 0x1C0006344 (SrbAssignQueueId.c)
 *     FormInquiryStandardData @ 0x1C000658C (FormInquiryStandardData.c)
 *     FormInquiryDeviceIdentifiersData @ 0x1C00068F4 (FormInquiryDeviceIdentifiersData.c)
 *     GetRegistrySettings @ 0x1C000D7E4 (GetRegistrySettings.c)
 *     __GSHandlerCheckCommon @ 0x1C000EA10 (__GSHandlerCheckCommon.c)
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
