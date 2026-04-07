/*
 * XREFs of ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18006D628
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180072EF8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z @ 0x1800768C8 (-SetColorTransform@CVisual@@QEAAJAEBUMilColorTransform@@@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopColorEffect(CVisual **this, const struct MilColorTransform *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  v3 = CVisual::SetColorTransform(this[4], a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = CVisual::RenderRecursive(this[4]);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x107u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x102u);
  }
  return v4;
}
