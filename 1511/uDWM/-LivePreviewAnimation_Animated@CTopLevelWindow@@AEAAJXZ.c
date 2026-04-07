/*
 * XREFs of ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x18007DC48
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18007E2FC (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800240CC (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18006F190 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180073C50 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
 */

__int64 __fastcall CTopLevelWindow::LivePreviewAnimation_Animated(CLivePreviewTimeline **this)
{
  double CurrentOpacity; // xmm0_8
  int v3; // eax
  unsigned int v4; // edi

  CurrentOpacity = CLivePreviewTimeline::GetCurrentOpacity(this[87]);
  v3 = CTopLevelWindow::SetLivePreviewAlpha((CTopLevelWindow *)this, CurrentOpacity * *((double *)this + 22));
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_BYTE *)this[87] + 72) )
      CTopLevelWindow::StopLivePreviewAnimation((CTopLevelWindow *)this);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1184u);
  }
  return v4;
}
