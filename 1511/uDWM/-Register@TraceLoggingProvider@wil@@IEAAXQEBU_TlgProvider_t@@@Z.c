/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18003FD98
 * Callers:
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x1800112F4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     ?Instance@ScalingCompatLogging@@KAPEAV1@XZ @ 0x18004B8A0 (-Instance@ScalingCompatLogging@@KAPEAV1@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x18003FD00 (TraceLoggingRegisterEx.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _TlgProvider_t *a2,
        void *a3)
{
  __int64 v4; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  TraceLoggingRegisterEx(a2, (TLG_PENABLECALLBACK)a2, a3);
  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v4 + 8))(this);
}
