/*
 * XREFs of ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010404
 * Callers:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800100F8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180077DBC (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180078DA4 (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x1800104B4 (-GetLocal@-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPE.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180076220 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StartWatching(
        wil::details::ThreadFailureCallbackHolder *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  _QWORD *Local; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) )
  {
    wil::details::in1diag3::FailFast_Unexpected(retaddr, a2, a3, a4);
    __debugbreak();
  }
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    LOBYTE(a2) = 1;
    Local = (_QWORD *)wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(this, a2);
  }
  else
  {
    Local = 0LL;
  }
  *(_QWORD *)this = Local;
  if ( Local )
  {
    *((_QWORD *)this + 2) = *Local;
    *Local = this;
    *((_DWORD *)this + 6) = GetCurrentThreadId();
  }
}
