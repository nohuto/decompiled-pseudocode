/*
 * XREFs of ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18006F170
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E8FC (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ @ 0x18007E834 (-LivePreviewAnimation_Animated@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180020A10 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetLivePreviewAlpha(CTopLevelWindow *this, double a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::SendSetOpacity(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0xF0Du);
  return v3;
}
