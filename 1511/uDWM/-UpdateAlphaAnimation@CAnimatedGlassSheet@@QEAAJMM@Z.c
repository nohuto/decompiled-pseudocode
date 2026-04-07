/*
 * XREFs of ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x1800839CC
 * Callers:
 *     ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800845CC (-OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIF.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084670 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x180083644 (-StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateAlphaAnimation(CAnimatedGlassSheet *this, float a2, float a3)
{
  int started; // eax
  unsigned int v4; // ebx

  started = CAnimatedGlassSheet::StartAlphaAnimation(this, *((double *)this + 22), a2, a3);
  v4 = started;
  if ( started < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x17Du);
  return v4;
}
