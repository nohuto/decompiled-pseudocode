/*
 * XREFs of ??$?0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180078460
 * Callers:
 *     ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180078624 (-BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x180011284 (--1Completer@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004ECA8 (atexit.c)
 *     ??0?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@PEBU_TlgProvider_t@@PEBD_N@Z @ 0x180075A30 (--0-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@PEBU_TlgProvider_t@@PEBD_N@Z.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180078DA4 (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 */

WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *__fastcall WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::ImmersiveIconicBitmapReceived(
        WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived *this,
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
    (__int64)this,
    *((_QWORD *)Context + 1),
    (__int64)"ImmersiveIconicBitmapReceived");
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::`vftable';
  WindowFrameLoggingTelemetry::ImmersiveIconicBitmapReceived::StartActivity(this);
  return this;
}
