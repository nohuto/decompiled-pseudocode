/*
 * XREFs of __security_check_cookie @ 0x1C0006850
 * Callers:
 *     Template_zq @ 0x1C0001764 (Template_zq.c)
 *     Template_q @ 0x1C0001808 (Template_q.c)
 *     EvaluateCurrentStateFromRegistry @ 0x1C0001870 (EvaluateCurrentStateFromRegistry.c)
 *     WmiLogEvent @ 0x1C00023FC (WmiLogEvent.c)
 *     WmiLogStreamPosition @ 0x1C0002510 (WmiLogStreamPosition.c)
 *     __GSHandlerCheckCommon @ 0x1C00068A0 (__GSHandlerCheckCommon.c)
 *     _handle_error @ 0x1C0006D74 (_handle_error.c)
 *     RaiseException @ 0x1C0006FA0 (RaiseException.c)
 *     PinMatchChannelConfigToFormat @ 0x1C0015060 (PinMatchChannelConfigToFormat.c)
 *     PinCreate @ 0x1C0015430 (PinCreate.c)
 *     PropertyGetAudioPosition @ 0x1C0018AB0 (PropertyGetAudioPosition.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C00192A0 (PropertyDrmAudioStream_SetContentId.c)
 *     RegistryReadNameValue @ 0x1C001AC0C (RegistryReadNameValue.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C001DCA0 (USBParseGetMicArrayDescriptor.c)
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
