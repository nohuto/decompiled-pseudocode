/*
 * XREFs of IsDwmActive_0 @ 0x1C0001458
 * Callers:
 *     pConvertDfbSurfaceToDib2 @ 0x1C005DA50 (pConvertDfbSurfaceToDib2.c)
 *     ?DxgkEngIsDwmComposing@@YAHPEAH@Z @ 0x1C0084910 (-DxgkEngIsDwmComposing@@YAHPEAH@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B9A00 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsDwmActive_0()
{
  return IsDwmActive();
}
