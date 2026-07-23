/*
 * XREFs of RegisteredProviderEtwCallback @ 0x140149668
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushPartial @ 0x1400AD5D4 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1401496CC (LookUpTableFlushComplete.c)
 */

void __fastcall RegisteredProviderEtwCallback(
        LPCGUID SourceId,
        __int64 ControlCode,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        _QWORD *CallbackContext)
{
  int v7; // edi
  void (__fastcall *v8)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD); // r10

  v7 = ControlCode;
  v8 = (void (__fastcall *)(LPCGUID, __int64, __int64, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, _QWORD))CallbackContext[48];
  if ( v8 )
    v8(SourceId, ControlCode, Level, MatchAnyKeyword, MatchAllKeyword, FilterData, CallbackContext[49]);
  if ( v7 == 1 )
  {
    LookUpTableFlushComplete(CallbackContext, ControlCode, Level, MatchAnyKeyword);
  }
  else if ( v7 == 2 )
  {
    LookUpTableFlushPartial((__int64)CallbackContext);
  }
}
