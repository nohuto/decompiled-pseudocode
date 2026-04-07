/*
 * XREFs of ??1?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x18004E9FC
 * Callers:
 *     ??__Fwrapper@?1??Instance@WindowFrameLoggingTelemetry@@KAPEAV1@XZ@YAXXZ @ 0x1800513E0 (--__Fwrapper@-1--Instance@WindowFrameLoggingTelemetry@@KAPEAV1@XZ@YAXXZ.c)
 * Callees:
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x180075CE0 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<WindowFrameLoggingTelemetry>::~static_lazy<WindowFrameLoggingTelemetry>(
        __int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize(
             &`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper,
             1u,
             (PBOOL)&fPending,
             &Context);
  if ( result )
  {
    if ( !(_DWORD)fPending )
      return (unsigned int)wil::TraceLoggingProvider::`vector deleting destructor'(
                             (wil::TraceLoggingProvider *)Context,
                             0);
  }
  return result;
}
