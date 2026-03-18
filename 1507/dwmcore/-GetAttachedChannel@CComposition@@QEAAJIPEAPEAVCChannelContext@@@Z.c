/*
 * XREFs of ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x180068618
 * Callers:
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x180047FB0 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180068664 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x180068A4C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x180068AD0 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x18006C468 (-ProcessDataOnChannel@CComposition@@IEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z @ 0x1800E3B2C (-ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z.c)
 *     ?ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1800E3BF8 (-ResolveExpressionTargetReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180111840 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRES.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::GetAttachedChannel(CComposition *this, unsigned int a2, struct CChannelContext **a3)
{
  unsigned int v3; // ebx
  volatile signed __int32 *v4; // rcx

  v3 = 0;
  if ( a2 < 0x10000
    && a2 < *((_DWORD *)this + 74)
    && (v4 = *(volatile signed __int32 **)(*((_QWORD *)this + 34) + 8LL * a2)) != 0LL )
  {
    _InterlockedIncrement(v4 + 2);
    *a3 = (struct CChannelContext *)v4;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xCC4u);
  }
  return v3;
}
