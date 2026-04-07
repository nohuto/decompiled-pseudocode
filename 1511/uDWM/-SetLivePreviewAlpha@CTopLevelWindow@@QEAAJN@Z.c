/*
 * XREFs of ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18006F190
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E044 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x18007DC48 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180023BB0 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetLivePreviewAlpha(CTopLevelWindow *this, double a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::SendSetOpacity(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x1194u);
  return v3;
}
