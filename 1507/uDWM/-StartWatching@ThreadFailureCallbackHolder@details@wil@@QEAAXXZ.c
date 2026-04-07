/*
 * XREFs of ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800071D0
 * Callers:
 *     ?StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x1800073F8 (-StartActivity@CloneWindow@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x18006FB84 (-StartActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ @ 0x180070B0C (-StartActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAAXXZ.c)
 * Callees:
 *     ?GetLocal@?$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@23@_N@Z @ 0x1800076C4 (-GetLocal@-$ThreadStorage@PEAVThreadFailureCallbackHolder@details@wil@@$0BE@@details@wil@@QEAAPE.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006E170 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ThreadFailureCallbackHolder::StartWatching(
        wil::details::ThreadFailureCallbackHolder *this,
        void *a2,
        unsigned int a3,
        const char *a4)
{
  _QWORD *Local; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 6) )
  {
    wil::details::in1diag3::FailFast_Unexpected(retaddr, a2, a3, a4);
    JUMPOUT(0x180007211LL);
  }
  LOBYTE(a2) = 1;
  Local = (_QWORD *)wil::details::ThreadStorage<wil::details::ThreadFailureCallbackHolder *,20>::GetLocal(this, a2);
  *(_QWORD *)this = Local;
  if ( Local )
  {
    *((_QWORD *)this + 2) = *Local;
    *Local = this;
    *((_DWORD *)this + 6) = GetCurrentThreadId();
  }
}
