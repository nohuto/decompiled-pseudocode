/*
 * XREFs of IsDwmActive_0 @ 0x1C00013F8
 * Callers:
 *     pConvertDfbSurfaceToDib2 @ 0x1C005B100 (pConvertDfbSurfaceToDib2.c)
 *     ?DxgkEngIsDwmComposing@@YAHPEAH@Z @ 0x1C007F590 (-DxgkEngIsDwmComposing@@YAHPEAH@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BB414 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 IsDwmActive_0()
{
  return IsDwmActive();
}
