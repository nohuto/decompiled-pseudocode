/*
 * XREFs of ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x180047B40
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180047AD0 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18000949C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180048648 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x180048B22 (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x180048B2E (InitOnceComplete_0.c)
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
    Context = qword_1800BC790;
    qword_1800BC790[0] = &WindowFrameLogging::`vftable';
    qword_1800BC7A8 = (__int64)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_1800BC790,
      (const struct _TlgProvider_t *)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner,
      v0);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, qword_1800BC790);
  }
  return (struct ScalingCompatLogging *)Context;
}
