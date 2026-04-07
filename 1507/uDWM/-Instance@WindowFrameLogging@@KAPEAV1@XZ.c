/*
 * XREFs of ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x180007808
 * Callers:
 *     ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x180007798 (--1Completer@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073984 (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073AB4 (-ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073BE4 (-ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073D14 (-ScreenDuplicationInvalidMonitor@WindowFrameLoggingTelemetry@@SAXXZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18000949C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180048648 (atexit.c)
 */

struct WindowFrameLogging *WindowFrameLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( (`WindowFrameLogging::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `WindowFrameLogging::Instance'::`2'::`local static guard' |= 1u;
    atexit(`WindowFrameLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(&`WindowFrameLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_1800BC4D8;
    qword_1800BC4D8[0] = &WindowFrameLogging::`vftable';
    qword_1800BC4F0 = (__int64)&`WindowFrameLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    wil::TraceLoggingProvider::Register(
      (wil::TraceLoggingProvider *)qword_1800BC4D8,
      (const struct _TlgProvider_t *const)&`WindowFrameLogging::StaticHandle::StaticHandle'::`2'::__hInner);
    InitOnceComplete(&`WindowFrameLogging::Instance'::`2'::wrapper, 0, qword_1800BC4D8);
  }
  return (struct WindowFrameLogging *)Context;
}
