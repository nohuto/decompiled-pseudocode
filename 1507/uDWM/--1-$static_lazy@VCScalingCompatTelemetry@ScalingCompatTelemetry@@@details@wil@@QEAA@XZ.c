/*
 * XREFs of ??1?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x1800484B4
 * Callers:
 *     ??__Fwrapper@?1??Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ@YAXXZ @ 0x18004AD70 (--__Fwrapper@-1--Instance@CScalingCompatTelemetry@ScalingCompatTelemetry@@KAPEAV12@XZ@YAXXZ.c)
 * Callees:
 *     InitOnceBeginInitialize_0 @ 0x180048B22 (InitOnceBeginInitialize_0.c)
 *     ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x18006DC30 (--_ETraceLoggingProvider@wil@@MEAAPEAXI@Z.c)
 */

unsigned int __fastcall wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::~static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>(
        __int64 a1)
{
  unsigned int result; // eax
  __int64 fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  fPending = a1;
  result = InitOnceBeginInitialize_0(
             &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
             0,
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
