/*
 * XREFs of ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x180075738
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007B0D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x180046A30 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
        CFullScreenMagnifier *this,
        double a2,
        int a3,
        int a4)
{
  int updated; // eax
  unsigned int v5; // ebx

  updated = CFullScreenMagnifier::UpdateSettings(this, a2, (double)a3, (double)a4);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x123u);
  return v5;
}
