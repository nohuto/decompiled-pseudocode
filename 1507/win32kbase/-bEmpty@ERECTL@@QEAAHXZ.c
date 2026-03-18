/*
 * XREFs of ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C000C1DC
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0081DD0 (EngUpdateDeviceSurface.c)
 *     ?GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00B3E28 (-GreValidateRgnInDCSurfBounds@@YA_NPEAVDC@@PEAVSURFACE@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bEmpty(ERECTL *this)
{
  return *(_DWORD *)this == *((_DWORD *)this + 2) || *((_DWORD *)this + 1) == *((_DWORD *)this + 3);
}
