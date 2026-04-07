/*
 * XREFs of ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x18007E834
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18007EED4 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180020E08 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18006F170 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ @ 0x180075AE0 (-GetCurrentOpacity@CLivePreviewTimeline@@QEAANXZ.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0xEFEu);
  }
  return v4;
}
