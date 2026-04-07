/*
 * XREFs of ??1Completer@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAA@XZ @ 0x180011284
 * Callers:
 *     ??$?0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800101F0 (--$-0$$$V@CloneWindow@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@@Z.c)
 *     ??$?0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800757C4 (--$-0$$$V@IconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D$0A@@wist.c)
 *     ??$?0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180078460 (--$-0$$$V@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@AEAA@U-$integral_constant@D.c)
 * Callees:
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x1800112F4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

BOOL __fastcall wil::details::static_lazy<WindowFrameLoggingTelemetry>::Completer::~Completer(__int64 a1)
{
  LPINIT_ONCE v2; // rdi
  union _RTL_RUN_ONCE v3; // rdx
  union _RTL_RUN_ONCE v4; // rax

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    v3.Ptr = *(PVOID *)((char *)WindowFrameLogging::Instance() + 8);
    v4.Ptr = v2[1].Ptr;
    v2[2].Ptr = v3.Ptr;
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v4.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
