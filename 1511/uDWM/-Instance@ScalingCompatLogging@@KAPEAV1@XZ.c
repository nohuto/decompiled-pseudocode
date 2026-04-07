/*
 * XREFs of ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x18004B8A0
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x18004B830 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18003FD98 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18004ECA8 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18004F182 (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x18004F18E (InitOnceComplete_0.c)
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
    Context = qword_1800BE7A0;
    qword_1800BE7A0[0] = &WindowFrameLogging::`vftable';
    qword_1800BE7B8 = (__int64)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_1800BE7A0,
      (const struct _TlgProvider_t *)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner,
      v0);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, qword_1800BE7A0);
  }
  return (struct ScalingCompatLogging *)Context;
}
