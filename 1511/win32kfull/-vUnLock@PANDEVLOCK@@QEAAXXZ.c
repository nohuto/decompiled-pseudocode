/*
 * XREFs of ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C028A364
 * Callers:
 *     ?PanAssertMode@@YAHPEAUDHPDEV__@@H@Z @ 0x1C0287BC0 (-PanAssertMode@@YAHPEAUDHPDEV__@@H@Z.c)
 *     ?PanCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0287DD0 (-PanCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0287F60 (-PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C02882E0 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C0288920 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanSetPalette@@YAHPEAUDHPDEV__@@PEAU_PALOBJ@@KKK@Z @ 0x1C0288A10 (-PanSetPalette@@YAHPEAUDHPDEV__@@PEAU_PALOBJ@@KKK@Z.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0288EA0 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C028A210 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PANDEVLOCK::vUnLock(HSEMAPHORE *this)
{
  HSEMAPHORE v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    EngReleaseSemaphore(v2);
    *this = 0LL;
  }
}
