/*
 * XREFs of ??$?0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800101F0
 * Callers:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 * Callees:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800100F8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x180011284 (--1Completer@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18004ECA8 (atexit.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

WindowFrameLoggingTelemetry::CloneWindow *__fastcall WindowFrameLoggingTelemetry::CloneWindow::CloneWindow(
        WindowFrameLoggingTelemetry::CloneWindow *this,
        char a2)
{
  __int64 v3; // rcx
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  LPVOID Context; // [rsp+40h] [rbp+8h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(fPending) = a2;
  if ( (`WindowFrameLoggingTelemetry::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `WindowFrameLoggingTelemetry::Instance'::`2'::`local static guard' |= 1u;
    atexit(`WindowFrameLoggingTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    v5 = &`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper;
    Context = &qword_1800BBCD8;
    v6 = 0;
    qword_1800BBCD8 = (__int64)&WindowFrameLogging::`vftable';
    wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer(&v5);
  }
  v3 = *((_QWORD *)Context + 1);
  *((_QWORD *)this + 5) = (char *)this + 104;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = this;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_QWORD *)this + 12) = v3;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_BYTE *)this + 128) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = "CloneWindow";
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 1LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  memset_0((char *)this + 144, 0, 0x90uLL);
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *(_QWORD *)this = &WindowFrameLoggingTelemetry::CloneWindow::`vftable';
  WindowFrameLoggingTelemetry::CloneWindow::StartActivity(this);
  return this;
}
