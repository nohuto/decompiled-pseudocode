/*
 * XREFs of __security_check_cookie @ 0x1C00066A0
 * Callers:
 *     Template_zq @ 0x1C0001774 (Template_zq.c)
 *     Template_q @ 0x1C0001818 (Template_q.c)
 *     EvaluateCurrentStateFromRegistry @ 0x1C0001880 (EvaluateCurrentStateFromRegistry.c)
 *     WmiLogEvent @ 0x1C00022D8 (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C00023E4 (WmiLogStreamPosition.c)
 *     __GSHandlerCheckCommon @ 0x1C0006730 (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C0006C04 (_handle_error.c)
 *     RaiseException @ 0x1C0006E30 (RaiseException.c)
 *     PinMatchChannelConfigToFormat @ 0x1C001505C (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C0015430 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C0018A80 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C0019270 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C001ABDC (RegistryReadNameValue.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001DC38 (USBParseGetMicArrayDescriptor.c)
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
