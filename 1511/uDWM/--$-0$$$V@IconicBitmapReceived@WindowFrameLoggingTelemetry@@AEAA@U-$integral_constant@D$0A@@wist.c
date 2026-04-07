/*
 * XREFs of ??$?0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800757C4
 * Callers:
 *     ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180075E84 (-BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x180011284 (--1Completer@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004ECA8 (atexit.c)
 *     ??0?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@PEBU_TlgProvider_t@@PEBD_N@Z @ 0x180075A30 (--0-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@PEBU_TlgProvider_t@@PEBD_N@Z.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180077DBC (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 */

WindowFrameLoggingTelemetry::IconicBitmapReceived *__fastcall WindowFrameLoggingTelemetry::IconicBitmapReceived::IconicBitmapReceived(
        WindowFrameLoggingTelemetry::IconicBitmapReceived *this,
        char a2)
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  LPVOID Context; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(fPending) = a2;
  if ( (`WindowFrameLoggingTelemetry::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `WindowFrameLoggingTelemetry::Instance'::`2'::`local static guard' |= 1u;
    atexit((void (__cdecl *)())`WindowFrameLoggingTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    v5 = 0;
    Context = &qword_1800BBCD8;
    v4 = &`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper;
    qword_1800BBCD8 = (__int64)&WindowFrameLogging::`vftable';
    wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer((__int64)&v4);
  }
  wil::ActivityBase<1,35184372088832,5>::ActivityBase<1,35184372088832,5>(
    this,
    *((_QWORD *)Context + 1),
    "IconicBitmapReceived");
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::IconicBitmapReceived::`vftable';
  WindowFrameLoggingTelemetry::IconicBitmapReceived::StartActivity(this);
  return this;
}
