/*
 * XREFs of ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x18004CA08
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x18004C8F4 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18004C954 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800420F0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18004F4AC (atexit.c)
 *     InitOnceComplete_0 @ 0x18004F782 (InitOnceComplete_0.c)
 *     InitOnceBeginInitialize_0 @ 0x18004F78E (InitOnceBeginInitialize_0.c)
 */

struct ScalingCompatLogging *ScalingCompatLogging::Instance(void)
{
  void *v0; // r8
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( (`ScalingCompatLogging::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `ScalingCompatLogging::Instance'::`2'::`local static guard' |= 1u;
    atexit(`ScalingCompatLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_1800B7F90;
    qword_1800B7F90[0] = &ScalingCompatLogging::`vftable';
    qword_1800B7FA8 = (__int64)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_1800B7F90,
      (const struct _TlgProvider_t *)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner,
      v0);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, qword_1800B7F90);
  }
  return (struct ScalingCompatLogging *)Context;
}
