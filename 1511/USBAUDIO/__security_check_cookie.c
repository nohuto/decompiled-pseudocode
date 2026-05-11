/*
 * XREFs of __security_check_cookie @ 0x1C0006470
 * Callers:
 *     Template_zq @ 0x1C0001774 (Template_zq.c)
 *     Template_q @ 0x1C0001818 (Template_q.c)
 *     WmiLogEvent @ 0x1C0002098 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C00021A4 (WmiLogStreamPosition.c)
 *     __GSHandlerCheckCommon @ 0x1C00064F0 (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C00069C4 (_handle_error.c)
 *     RaiseException @ 0x1C0006BF0 (RaiseException.c)
 *     PinMatchChannelConfigToFormat @ 0x1C001405C (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C0014430 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C0017A60 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C0018250 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C0019B3C (RegistryReadNameValue.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001CAFC (USBParseGetMicArrayDescriptor.c)
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
