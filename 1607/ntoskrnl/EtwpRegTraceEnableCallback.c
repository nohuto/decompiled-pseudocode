/*
 * XREFs of EtwpRegTraceEnableCallback @ 0x1406A4FAC
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     CmRegisterCallbackEx @ 0x1405510D0 (CmRegisterCallbackEx.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 */

void __fastcall EtwpRegTraceEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( FilterData && FilterData->Size == 4 )
    EtwpRegTraceOptions = *(unsigned int *)FilterData->Ptr;
  if ( ControlCode )
  {
    if ( ControlCode == 1 && !EtwpRegTracingEnabled )
    {
      RtlInitUnicodeString(&DestinationString, L"425500");
      if ( CmRegisterCallbackEx(
             (PEX_CALLBACK_FUNCTION)EtwpRegTraceCallback,
             &DestinationString,
             &DestinationString,
             0LL,
             &EtwpRegTraceCookie,
             0LL) >= 0 )
        EtwpRegTracingEnabled = 1;
    }
  }
  else if ( EtwpRegTracingEnabled )
  {
    CmUnRegisterCallback(EtwpRegTraceCookie);
    EtwpRegTracingEnabled = 0;
  }
}
