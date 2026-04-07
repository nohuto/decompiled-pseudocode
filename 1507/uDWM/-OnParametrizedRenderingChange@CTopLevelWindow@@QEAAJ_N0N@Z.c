/*
 * XREFs of ?OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z @ 0x1800760DC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ParametrizedRenderingChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180078FD0 (-ParametrizedRenderingChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyContextualizedOpacityParameter@CVisual@@QEAAJN@Z @ 0x18007669C (-ApplyContextualizedOpacityParameter@CVisual@@QEAAJN@Z.c)
 *     ?SetHasContextualizedOpacity@CVisual@@QEAAJ_N@Z @ 0x180076A44 (-SetHasContextualizedOpacity@CVisual@@QEAAJ_N@Z.c)
 *     ?SetRenderForCapture@CVisual@@QEAAJ_N@Z @ 0x180076ABC (-SetRenderForCapture@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::OnParametrizedRenderingChange(CTopLevelWindow *this, bool a2, bool a3, double a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int HasContextualizedOpacity; // eax
  int v9; // eax

  v6 = CVisual::SetRenderForCapture(this, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    HasContextualizedOpacity = CVisual::SetHasContextualizedOpacity(this, a3);
    v7 = HasContextualizedOpacity;
    if ( HasContextualizedOpacity >= 0 )
    {
      v9 = CVisual::ApplyContextualizedOpacityParameter(this, a4);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x17D1u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, HasContextualizedOpacity, 0x17D0u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x17CFu);
  }
  return v7;
}
