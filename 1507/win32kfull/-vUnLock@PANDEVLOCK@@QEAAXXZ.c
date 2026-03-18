/*
 * XREFs of ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C028A294
 * Callers:
 *     ?PanAssertMode@@YAHPEAUDHPDEV__@@H@Z @ 0x1C0287AF0 (-PanAssertMode@@YAHPEAUDHPDEV__@@H@Z.c)
 *     ?PanCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0287D00 (-PanCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z @ 0x1C0287E90 (-PanDitherColor@@YAKPEAUDHPDEV__@@KKPEAK@Z.c)
 *     ?PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0288210 (-PanEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C0288850 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanSetPalette@@YAHPEAUDHPDEV__@@PEAU_PALOBJ@@KKK@Z @ 0x1C0288940 (-PanSetPalette@@YAHPEAUDHPDEV__@@PEAU_PALOBJ@@KKK@Z.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0288DD0 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C028A140 (-vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
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
